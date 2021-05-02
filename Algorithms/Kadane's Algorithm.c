//to find largest sum of a  contigous subarray - kadane algorithm

#include<stdio.h>

int maxSumSubarray(int arr[],int n)
{
    int maxSum = 0;
    int curSum = 0;
    for(int i=0;i<n;i++)
    {
        curSum = curSum + arr[i];
        if(curSum>maxSum)
        {
            maxSum = curSum;
        }
        if(curSum<0)
        {
            curSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int arr[10],n,i,ans;
    printf("\nenter the size of array\n");
    scanf("%d",&n);
    printf("\n enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    ans = maxSumSubarray(arr,n);
    printf("\n this is the element : %d\n",ans);
}
