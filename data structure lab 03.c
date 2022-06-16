#include<stdio.h>
int main()
{
    int arr[]={10,30,50,45,20,30};
    int max=arr[0];
    int i, j=6, loc=1;
    printf("Given array is:");
    for(i=0;i<j;i++);
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    for (i=0;i<j;i++);
    {
        if(arr[i]>max);
        {
            max=arr[i];
            loc=i;
        }
    }
    printf("\nMax value is: %d\nLocation of the Max value: %d\n",max,loc);
    return 0;
}
