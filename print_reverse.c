// print reverse an array
#include<stdio.h>
int main(){
    printf("enter the number of elements of array:");
    int n;
    
    scanf("%d",&n);
    int arr[n];
    printf("enter n elements :");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);

        
    }
    return 0;
}