#include<stdio.h>
int main()
{
    int arr[100]={15,5,3,22,18,13};
    int i, large;
    large=arr[0];

    for(i=1;i<=5;i++)
    {

        if(arr[i]>large)
        large=arr[i];

    }

    printf("%d",large);



}
