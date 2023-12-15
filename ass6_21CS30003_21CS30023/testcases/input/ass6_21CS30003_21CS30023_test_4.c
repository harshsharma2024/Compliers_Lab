// INT, FLOAT read
// ALgorithm Print 1 to n
int printInt(int);
int printStr(char * p);
int fib(int n);
int readInt(int *n);

int oneton(int a) { 
    if(a<0) return 0; 
    else if (a == 0) 
        return 1;

    else 
        return oneton(a - 2);
} 

int main()  {  
    printStr("Program to check If divisible By 2 (Positive numbers) \n");

    printStr("Enter int number (n ): ");
    int a;
    readInt(&a);

    int ans = oneton(a);
    printStr("Divisible(1) , NotDivisible(0): "); printInt(ans); printStr("\n\n");



    return 0;  
}  
