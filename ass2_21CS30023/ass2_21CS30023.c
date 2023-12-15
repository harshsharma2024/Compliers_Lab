#include "myl.h"
#define space 1000
// prints a string of characters. The parameter is terminated by ’\0’. The return value is the number of characters printed
int printStr(char *str) 
{
    int cnt = 0; // To Maintain the count of Characters 
    char newarr[space];
    for(cnt=0;str[cnt] != '\0';cnt++)
        newarr[cnt] = str[cnt]; // Copying and counting , To be used in Inline assembly code
    
    newarr[cnt]='\0';
    //Inline assembly Code to print newarr
    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(newarr),"d"(cnt)
        );

    return cnt; // return the count
}

// reads a signed integer in ‘%d’ format. Caller gets the value through the pointer parameter. The return value is OK (for success) or ERR (on failure)
int readInt(int *n) 
{
    char readarr[space]; //to store the input as an array of characters
    int flag = 0; // To track the negative values
    int cnt = 0; // to traverse the complete array 


    //Inline code to read the integer in the array readarr
    __asm__ __volatile__ (
          "movl $0, %%eax \n\t"
          "movq $1, %%rdi \n\t"
          "syscall \n\t"
          :
          :"S"(readarr), "d"(sizeof(readarr))
    ) ;
 
    if (readarr[0] == '-'){ // Tracking negative values
        flag = 1;
        cnt++;
    }
    *n=0;
    while(1)
    {
        if(readarr[cnt] == ' ' || readarr[cnt] == '\n' || readarr[cnt] == '\t') break;  // If there is space or newline or tab , means we have reached the end of the input so Break
        if (( ((int)(readarr[cnt]-'0') > 9) || (((int)readarr[cnt]-'0') < 0) ))         // If element at any index in readarr does not belong to [0,9] then show ERR as It is not a valid input
            return ERR;
        
        *n *= 10;                      //Calculating the final ans
        *n += (int)(readarr[cnt] - '0');
        cnt++;
    }
 
    if( flag ==1) *n = (*n) * (-1);                // Using the flag to decide whether final ans would be negative or not
    return OK; 
}


/*prints the signed integer (n) with left-alignment. Printing sign
for a negative number is mandatory while for a positive number it is not required. On
success, function will return the number of characters printed and on failure it will return
ERR.*/
int printInt(int n)
{
	char writearr[space]; // array of characters that would be used to print the integer in Inline assembly code
	int cnt=0;
    int flag=0;

    if(n == 0) writearr[cnt++]='0'; // If n is 0
    
    else
    {
        if(n < 0) // If the number is negative
        {
            flag=1;  // To consider that the number is negative
            n=n*(-1);   // making n positive for rest of the calculation
        }

        // Storing the digits as char in reverse order
        do
        {
            writearr[cnt++] = n%10 + '0'; // Storing as Char
            n=n/10;
        }while(n>0);


        if(flag) writearr[cnt++]='-';   //If n negative then the last term in the array would be '-' , as we are storing in  
        
        // As Everything was stored in reverse order, So we will reverse the array now; 
        for(int i=0;i<cnt/2; i++){
            char temp = writearr[cnt - 1 - i];
            writearr[cnt - 1 - i] = writearr[i];
            writearr[i] = temp;
        }
    }

	// Inline assembly code to print writearr array 
	__asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(writearr),"d"(cnt)
        );

    return cnt; // Size of array that would be printed
}

/*reads a floating point number in ‘%f’ format (for example,
–123.456). Caller gets the value through the pointer parameter. The return value is
ERR or OK*/
int readFlt(float *f) {
	char readarr[space];  // To store the floating point number as characters , to be used in Inline assembly code to read
    int point = 0;      // It will be used as standard flag which will emphasize that decimal part of the floating number has started
    int flag = 0;       // Distinguish between negative and positive
    int i = 0;          // To traverse the array
       
    // Inline assembly code to read floating point number into the readarr array
    __asm__ __volatile__ (
          "movl $0, %%eax \n\t"
          "movq $1, %%rdi \n\t"
          "syscall \n\t"
          :
          :"S"(readarr), "d"(sizeof(readarr))
    ) ;
    *f=0;
    if (readarr[0] == '-'){   // Checking If negative
        flag = 1;
        i++;
    }

    float decimal=10;  // to calculate the decimal part
    while(1)
    {   

        if(readarr[i] == ' ' || readarr[i] == '\n' || readarr[i] == '\t'){          // Space means Input has been read completely
            break;
        }


        if(((int)(readarr[i]-'0')) > 9 || ((int)(readarr[i]-'0') < 0 )){
            if((readarr[i]!='.') || ((readarr[i]=='.') && (point))){
                return ERR;
            }
        }
        
        if(readarr[i] == '.')       // Decimal Point
        {
            point=1;
            i++;
            continue;
        }
        if(point == 0)          // Calculating the floating point value before '.'
        {
            *f = *f * 10;
            *f = *f + (int)(readarr[i] - '0');
        }
        else
        {
            *f += ((int)(readarr[i] - '0'))/decimal;
            decimal *=10;      // / Calculating the Decimal part  after '.'
        }
        i++;
    }
    
    if(flag)
        *f = (*f) * (-1);
	return OK; 
}

/*prints the floating point number (f) with left-alignment. Print-
ing sign for a negative number is mandatory while for a positive number it is not required.
However, decimal point should be printed to differentiate it from an integer number. Re-
turns the number of characters printed (on success) or ERR (on failure)*/

int printFlt(float f)
{
	char readarr[space]; // array of characters that would be used to print the float in Inline assembly code
	
    
    
    int cnt=0; // to count the number of elements to be printed
    int flag=0;
    if(f==0) // Input value is 0
    {
        readarr[cnt++] ='0';
        readarr[cnt++] ='.';
        readarr[cnt++] = '0';
    }
    else
    {
        if(f < 0) // number is negative
        {
            flag=1;
            f*=-1;
        }


        int befdec = f;                 // integer part
        do{
            int term = befdec%10;
            befdec/=10;
            readarr[cnt++]=term + '0';
        }while(befdec);                     // storing the integer part in reverse order


        if(flag) readarr[cnt++]='-';       // If negative, add -

        for(int i=0;i<cnt/2; i++){         // Reversing the array
            char temp = readarr[cnt - 1 - i];
            readarr[cnt - 1 - i] = readarr[i];
            readarr[i] = temp;
        }

        readarr[cnt++]='.';                 // '.' added as now decimal part would be added in the array

        float aftdec = f - (int)f;          // decimal part

        for(int i=0;i<6;i++){          // Precision (6) ; precesion can be increased by incresing 6 to the level of prevesion
            int term=((int)(aftdec*10))%10;   // term bt term extraction
            aftdec*=10;

            readarr[cnt++]=term + '0';
        } 

    }

        

	// Inline code to print the readarr
	__asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(readarr),"d"(cnt)
        );

    return cnt; // number of characters
}