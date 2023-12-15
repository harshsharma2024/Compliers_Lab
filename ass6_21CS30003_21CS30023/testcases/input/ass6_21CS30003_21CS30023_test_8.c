// Array Implemntation
int printInt(int);
int printStr(char * p);



int main() {
    int i,n;
    int arr[6];
    arr[0] = 22;
    arr[1] = -1;
    arr[2] = -8;
    arr[3] = 9;
    arr[4] = 84;
    arr[5] = 172;
    n=6;

    printStr("Array Implementation\n");
    printStr("Sorting Arrays using insertion sort\n");
    printStr("Before Sorting: \n");
  
    for(i=0;i<n;++i)
   	{
   		printInt(arr[i]); printStr(", ");
   	}
    printStr("\n");

    int key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printStr("After Sorting: \n");
    for(i=0;i<n;++i)
   	{
   		printInt(arr[i]); printStr(", ");
   	}
    printStr("\n");
    return 0;
}


