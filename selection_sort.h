/*Selection sort works like, it finds minimum of given array and places it first, by swapping the element present at first position with the minimum element position*/
@Shashank_dwivedi
#include <stdio.h>

int main(){
    int  i,j,temp,n,minimum;                    /*initializing variables*/

    printf("Enter length of your array");
    scanf("%d",&n);                             /*reading size of array*/

    int arr[n];      /*initializing array of given size*/

    for(i = 0;i<n;i++)
        scanf("%d",&arr[i]);                   /*reading elements of array*/

    for(i = 0;i<n-1;i++){                      /*per iteration one element at its required position*/
        minimum = i;
        j = i+1;
        for(j;j<n-i-1;j++){
            if(arr[minimum]>arr[j])            /*finding minimum of array to keep it at first*/
                minimum = j;
        }
        if(minimum!=i){                        /*if minimum has changed then placing it at its position*/
            temp = arr[minimum];
            arr[minimum] = arr[i];
            arr[i] = temp;
        }
    }
    printf("sorted array is:\n")              /*printing sorted array*/
    for(i = 0; i<n;i++)
        printf("%d\t",arr[i]);
}
