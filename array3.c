//Array as function argument
#include<stdio.h>
//void printnumbers(int arr[],int n);
void printnumbers(int *arr,int n);
int main()
{
    int arr[]={1,2,3,4};
    printnumbers(arr,4);//Function call
    return 0;
}
//void printnumbers(int arr[],int n)
void printnumbers(int *arr,int n)
{
    for(int i=0;i<n;i++)
    { 
        printf("%d\t",arr[i]);
    }
}