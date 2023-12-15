#include "myl.h"

int main()
{
    char *string1 = "Enter integer: ";
    printStr(string1);
    
    int p;
    int check;
    check = (readInt(&p)); // Valid integer
    if(check)
    {
        char *string2 = "You have entered: ";
        printStr(string2);
        printInt(p); // Print int
    }
    else // Error
    {
        char *string3 = "ERROR, Not an integer";
        printStr(string3);
    }
    
    char *string4 = "\nEnter floating point number: ";
    printStr(string4);
    
    float f;
    check = (readFlt(&f)); // Valid
    if(check)
    {
        char *string5 = "You have entered: ";
        printStr(string5);
        printFlt(f); 
    }
    else // Error
    {
        char *string6 = "ERROR, Not a floating point number";
        printStr(string6);
    }        

}