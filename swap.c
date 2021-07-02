#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
void swap_max(int arr[], int l, int n ){
    int p,max;
    max=arr[n];
    for(int i=0; i<(l-n); ++i)
    {
		   if(max<=arr[i+n]){
		        max=arr[i+n];
		        p=i+n;
		       
		   }
    }
    
  arr[p]=arr[n];
  arr[n]=max;
}
void ssort(int arr[], int l){
    for(int i=0;i<l-1;++i){
        swap_max(arr, l, i);
    }
}
