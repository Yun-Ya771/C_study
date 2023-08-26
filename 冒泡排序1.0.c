void bubble_sort(int arr[],int sz)
{
    int i;
    for(i=0;i<sz-1;i++)
    {
        int j;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}


#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(arr[0]);

    int i=0;
    bubble_sort(arr,sz);

    for(i=0;i<sz;i++)
    {
    printf("%d",arr[i]);

    }
    return 0;
}