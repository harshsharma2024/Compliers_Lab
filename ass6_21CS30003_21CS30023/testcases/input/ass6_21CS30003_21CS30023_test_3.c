int printInt(int);
int printStr(char * p);

// function calling and conditional statements



int maximum(int x, int y) {
   int ans;
   ans = x < y ? y : x; // ternary
   return ans;
}

int minimum(int x, int y) {
   int ans;
   ans = x > y ? y : x; // ternary
   return ans;
}

int absolute(int x) {
	if(x < 0)
		return -x;
	else
		return x;
}

int main(){
	int x = -5;
	int y = 4;

	int ans1 = absolute(x);
	printStr("absolute("); printInt(x); printStr(") = "); printInt(ans1); printStr("\n");
	
	int ans2 = absolute(y);
	printStr("absolute("); printInt(y); printStr(") = "); printInt(ans2); printStr("\n");

	int ans3 = minimum(x, y);
	printStr("Testing the minimum function\n");
	printStr("minimum("); printInt(x); printStr(", "); printInt(y); printStr(") = "); printInt(ans3); printStr("\n");

	int ans4 = maximum(x, y);
	printStr("Testing the maximum function\n");
	printStr("maximum("); printInt(x); printStr(", "); printInt(y); printStr(") = "); printInt(ans4); printStr("\n");

	printStr("Testing a simple for loop\n");

	int b = 0;
	printStr("LOOP \n");

	for(int i = 0; i<5; ++i) {
	    printStr("b = ");printInt(b);printStr("		");
	    b = b + i;
	}
	return 0;
}

