//find maximum element in the array 



#include<stdio.h>
int main(){
    int arr[] = {23,43,5,3,132,32,95};
    
    int max = arr[0];
    for(int i =1;i<7;i++){
        if(arr[i] > max){
            max = arr[i];
            
        }

    }
    printf("maximum element here is %d",max);
    return 0;

}