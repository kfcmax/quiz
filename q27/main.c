#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static void swap_fun(int arr[], int i, int j)
{
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void shuffle(int arr[],int array_size)
{
        int j;
        srand((unsigned) time(NULL));
        for(int i = 0; i < array_size; i++){
                j = i + rand() % (array_size - i);
                swap_fun(arr, i, j);
        }
}

int main()
{
    int array_size = 52;
    int array[array_size];
    for (int i = 0 ; i < array_size; i++) 
        array[i] = i + 1;
 
    shuffle(array,array_size);
    for (int i = 0 ; i < array_size; i++) 
        printf("card %d  is %d\n", i,array[i]);
    
    return 0;
}