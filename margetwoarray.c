#include<stdio.h>
void merge(int arr1[], int arr2[],int n,int m){
    int i=0,j=0,k=0;
    int arr3[m+n];
    while(i<n){
            arr3[k++]=arr1[i++];
    }
    while(j<m){
            arr3[k++]=arr2[j++];
    } 

    for(i=0;i<n+m;i++){
        printf("%d ",arr3[i]);
   }
}

int main(){
    int m=4,n=6;
    int arr1[6]={1,5,7,3,56,8};
    int arr2[4]={2,4,6,7};
    merge(arr1,arr2,n,m);
    return 0;
}
