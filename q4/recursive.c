#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int max(int a,int b)
{
    return a > b ? a : b ;
}
int maxSubArray(int A[], int n)
{
    assert(A&&n>=0);
    if(n==1)	
    	return A[0];
    else {
        	A[1] = max( A[0]+A[1],A[1]);
        	return max(A[0], maxSubArray(A+1, n-1));
    }

}

int main()
{
    int arr[9] = { -2,1,-3,4,-1,2,1,-5,4 };
    int ans;
    ans = maxSubArray(arr,9);
   
    printf("ans = %d \n", ans);
    return 0;
}