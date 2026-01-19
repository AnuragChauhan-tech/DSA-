#include<stdio.h>
int main(){
    int arr[]={10,20,30,23,42,424,4,5};
    int min = arr[0];
    for(int i =0;i<8;i++){
        if(arr[i]<min){
            min = arr[i];
              }

    }
    printf("the min element is %d ",min);
    

    
    
    
    return 0;

}