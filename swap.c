#include <stdio.h>

void swap_max(int arr[],int l,int n) {
int max=arr[n];
int pos=n;
for(int i=n;i<l;i++){
if(arr[n]>max){
max=arr[i];
pos=i;
}
}
arr[pos]=arr[n];
arr[n]=max;
}


