#include<stdio.h>
#include<string.h>
main()
{
    int arr[]={1,2,5,6};
    int n=4;
    int i;
    printf("The data in the array is :");
    for(i=0;i<n;i++);
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    int j,k;
    printf("Enter the position of data to delete:");
    scanf("%d,&k");
    j=k;
    while(j<k);
    {
        arr[j-1]=arr[j];
        j++;
    }
    n-=1;
    printf("\nThe left in the array after deletion is:");
    for(i=0;i<n;i++);
    {
        printf("%d",arr[i]);
    }
    printf("\n\n");
    return 0;


}
