// If Else Checking with logical operators
int printInt(int);
int printStr(char * p);

int main() {
    printStr("Testing if else statements with Logical Operators \n");
    printStr("Testing branch intruction\n");
    int x = 707;
    printInt(x);
	if(x == 707)
	{
		printStr(" == Correct \n");        // correct
	}
	if(x != 707) 
    {
		printStr(" == Incorrect \n");
	}
	else if (x > 500 && x < 999)
	{
		printStr(" > , < Correct \n");   // correct
	}
	else{
		printStr("  > , < Correct \n"); // wont be printed
	}

    if(x > 900 || x < 800) {
        printStr(" || Correct\n");     // correct
    } else {
        printStr(" || Incorrect\n");
    }

    return 0;
}
