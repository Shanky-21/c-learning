/*pointer method for bubble sort*/
#include <stdio.h>

/*initializing function bubble sort with two arguments one integer pointer type and one integer type*/
void BubbleSort(int *,int );

/* Initializing function for Displaying Content*/
void Display(int *,int);

/*main function*/
int main(){
    int i,j,size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements of array to be sorted");
    for(i = 0;i<size;i++)
        scanf("%d",&a[i]);
    BubbleSort(a,size);                                          /*calling bubble sort*/
    Display(a,size);                                             /*calling Display*/
    return(0);
}
/*Defination of BubbleSort function*/
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
/*Defination of Display function*/
void Display(int *p,int size){
    int i;
    for(i = 0; i<size; i++){
        printf("%d\t",*(p+i));
    }
    printf("\n");
}
