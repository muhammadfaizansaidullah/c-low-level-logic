#include <stdio.h>

int main(void)
{
	int arr[5]={1, 2, 3, 4, 5};
	int* pArr=arr;
	
	printf("*pArr= %d \n", *pArr);
	printf("*(++pArr) = %d \n", *(++pArr));
	printf("*(++pArr) = %d \n", *(++pArr));
	printf("*(pArr+ 1) = %d \n", *(pArr+ 1));
	printf("*(pArr+ 2) = %d \n", *(pArr+ 2));

	return 0;
}
