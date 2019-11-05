/*!!!!bas aese hi kuch bhi karte hain hum!!!!*/
#include <stdio.h> /*FOR BURSTING CRACKERS*/
#include <stdlib.h>/*FOR Clearing the garbage and making city clean*/
int main(void){
    int crackers;
    char wish[50];
    printf("no. of crackers you have: ");  /*get as much love as you can handle*/
    scanf("%d",&crackers);
    while(crackers>0){
        char ch='y';
        printf("Do you want to burst a cracker(Y/N)\n");
        fflush(stdin);
        scanf("%c",&ch);
        if ((ch=='y') || (ch == 'Y')){
            printf("BOOM!!, BOOM!!\n");
            crackers--;
            if (crackers == 0)
                printf("Happy Deepawali to you!!!");
        }
        else{
            printf("Enter your wish :\n");
            fflush(stdin);
            scanf("%[^\n]%*c",wish);
            printf("\n%s\n",&wish);
        }
    }

}
