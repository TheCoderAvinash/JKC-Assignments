//to find the largest element in an array
#include<stdio.h>
int maxEl(int arr[], int l){
    int elem = arr[0];
    for(int i=1;i<l;i++){
        if(arr[i]>elem){
            elem =arr[i];
        }
    }
    return elem;
}
int main(){
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int arr[len];
    for(int i=0;i<len;i++){
        printf("Enter element%d :", i+1);
        scanf("%d", &arr[i]);
    }
    int max=maxEl(arr,len);
    printf("%d is the max element", max);
    return 0;
}
