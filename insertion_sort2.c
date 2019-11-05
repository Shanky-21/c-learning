#include <stdio.h>

int main(){
    int n,i,j,key;
    printf("Enter size of array:\n");
    scanf("%d",&n);                     /*Reading size of array*/

    int arr[n];                         /*Initialising an array of length n*/

    printf("Enter Elements of array");
    for(i = 0;i<n;i++)
        scanf("%d",&arr[i]);            /*Inserting each element*/

    for(i=1;i<n;i++){                   /*loop containing unsorted sub-array*/
        j = i-1;
        key = arr[i];                   /*Value that to be inserted at its place in sorted array*/
        while(j>=0 && key<arr[j]){      /*loop containing sorted sub array, i.e key is to be inserted in this sorted array arr[0:i-1]*/
            arr[j+1] = arr[j];          /*taking each element one step ahead,i.e., to make place for 'key' insertion*/
            j--;
        }
        arr[j+1] = key;                 /*inserting key at its proper position in sub array*/
    }
    for(i = 0; i<n; i++)                /*printing sorted array*/
        printf("%d\t",arr[i]);
}
