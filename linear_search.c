#include <stdio.h>
#include <conio.h>
void linearsearch(const int *arr,int n,int key)
{
	// This function performs linear search on given array.
    int i, found=0;
    printf("*********[SEARCH RESULT]*********\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
           printf("Found %d at index %d\n",key,i);
           found++;
        }
    }
    if(found==0)
    {
        printf("Not found\n\n");
    }
    else
    {
	printf("%d is present %d times in the array.\n\n",key,found);
    }
}
int main()
{
    int n=9;//Number of element in the array.
    int arr[]={5,4,7,3,78,8,5,7,5};
    int key=5;//Key to search in the array.
    linearsearch(arr,n,key);
    getch();
    return 0;
}
