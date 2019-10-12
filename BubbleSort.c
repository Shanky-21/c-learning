#include <stdio.h>
void BubbleSort(int *,int );
void Display(int *,int);
int main(){
    int i,j,size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements of array to be sorted");
    for(i = 0;i<size;i++)
        scanf("%d",&a[i]);
    BubbleSort(a,size);
    Display(a,size);
    return(0);
}
void BubbleSort(int *p,int size){
    int temp,i,j;
    for(i = 0; i < size; i++){
        for(j = i+1;j<size;j++){
            if (*(p+i)>*(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}
void Display(int *p,int size){
    int i;
    for(i = 0; i<size; i++){
        printf("%d\t",*(p+i));
    }
    printf("\n");
}
