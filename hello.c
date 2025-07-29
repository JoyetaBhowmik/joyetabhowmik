#include<stdio.h>
  void insertatEnd(int arr[],int n,int ele){
      arr[n]=ele;
      for(int i=0;i<=n;i++)
         printf("%d",arr[i]);
    
  }
  int main(){
    int n=6;
    int arr[6]={1,2,3,4,5};
    int ele=12;
    insertatEnd(arr,n,ele);
    return 0;  
}                             