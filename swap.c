#include <stdio.h>
#include <cs50.h>

void swap_max(int arr[],int l,int n){
int max=arr[n];
int pos=-1;
for(int i=n+1;i<l;i++){
if(arr[i]>max){
max=arr[i];
pos=i;
}
}
 if(pos!=-1){
arr[pos]=arr[n];
arr[n]=max;
 }
 return 0;
}

void ssort(int arr[],int l){
  
 for(int i=0;i<l;i++){
   swap_max(arr[],l,i);
  }
 return 0;
  
}
