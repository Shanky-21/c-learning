#include <stdio.h>

int main(){
    int n,i,j,temp,max;
    printf("Enter size of array:\n");
    scanf("%d",&n);                     /*Reading size of array*/

    int arr[n];                         /*Initialising an array of length n*/

    printf("Enter Elements of array");
    for(i = 0;i<n;i++)
        scanf("%d",&arr[i]);            /*Inserting each element*/

    for(i = 0; i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    for(i = 0; i<n; i++)
        printf("%d\t",arr[i]);
}
