//declarations, Diff data types, Arithmetic operations
int printInt(int);
int printStr(char * ch);

float f = 5.67;
int arr[8];                            
int b = -4, *c, d;                      
char ch;
int* a;

int main() {
	int p,q,r,s;

	float flt = 4.78;
	int sum=0;
	char CH='A';

	
	printStr("Hello World\n");
	int i = 24;
	int n = 8;
	int a1 = i+n;
	int a3 = a1*3;
	int a4 = a1/3;
	int a5 = a1-3;
	printInt(a1);printStr("* 3 = "); printInt(a3);printStr("\n");
	printInt(a1);printStr("/ 3 = "); printInt(a4);printStr("\n");
	printInt(a1);printStr("- 3 = "); printInt(a5);printStr("\n");


	return 0;
}
