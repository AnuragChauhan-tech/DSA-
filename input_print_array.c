//Q2: WAP in C read and print elements of array
#include<stdio.h>
int main(){
    printf("enter numbers of elements  :");
    int n ;
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements :",n);
    for(int i= 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        printf("elements are :%d",arr[i]);
        printf("\n");
    }
    
    
    return 0;

  
}