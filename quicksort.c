/*Quick_sort */
/*quicksort taking last element as pivot*/
#include <stdio.h>

int partition(int arr[],int left,int right){
    int pivot,i,j,temp;
    pivot = arr[right];
    i = left-1;
    j = left;
    for(j = left;j<right;j++){
        if(arr[j]<pivot){
            i++;
            temp = arr[j];
            arr[j]= arr[i];
            arr[i]= temp;
        }
    }
    temp = arr[i+1];
    arr[i+1]= arr[right];
    arr[right] = temp;
    return(i+1);
}
void quicksort(int arr[],int left,int right){
    if(left<right){
        int part = partition(arr,left,right);
        quicksort(arr,left,part-1);
        quicksort(arr,part+1,right);
    }
}

int main(){
    int i,n;
    printf("Enter size of your array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for(i = 0;i<n;i++)
        scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    printf("sorted array is:\n");
    for(i = 0;i<n;i++)
        printf("%d\t",arr[i]);
}
