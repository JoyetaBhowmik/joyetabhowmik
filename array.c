#include<stdio.h>
}int main(){
    int n;
    printf("enter the num");
    scanf("%d",&n);
    int arr[n];
    int mid=(n+1)/2;
    int arr1[mid];
    int arr2[n-mid];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<mid;i++){
        printf("%d\n",arr1[i]);
    }
    printf("\n");
    for(int i=mid;i<n-mid;i++){
        printf("%d\n",arr2[i]);
    }
    return 0;
