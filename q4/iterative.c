#include <stdio.h>
#include <stdlib.h>

int maxSubArray(int[], int);

int main()
{
	int a[] = {-2,1,-3,4,-1,2,1,-5,4};
	int len = sizeof(a)/sizeof(a[0]);
	printf(" %d\n",maxSubArray(a,len));

    	return 0;
}

int maxSubArray(int a[],int n){
	int max_sum = 0;
	int sum= 0;
	int begin=0;
	int temp_begin=0;
	int temp_i=0;
	int end=0;
	int result[3];
	int i;
	for(i=0; i<n; i++){
		sum += a[i];
		if (sum < 0)
		{
			sum = 0;
			temp_begin = i+1; 
			temp_i=0;
		}
		if (sum > max_sum)
		{
	            		max_sum = sum;
	            		begin = temp_begin;
	            		temp_i++;
	            		end = begin+temp_i;
	            		
	        	}
	}
	result[0]=max_sum;
	result[1]=begin;
	result[2]=end;
	printf("The contiguous subarray is[");
	for(begin;begin<=end;begin++)
		printf("%d,",a[begin] );
	printf("] has the largest sum = " );
	return *result;
}