//
// Created by ChienDC on 9/22/2023.
//
#include <stdio.h>
//void main(){
int Vidu7_8(){
    int x, y;
    x = y = 0;
    clrscr ();
    printf("Enter Choice (1-3): ");
    scanf("%d",&x);
    if(x == 1)
    {
        printf("\nEnter Value for y (1-5): ");
        scanf("%d",&y);
        if(y <= 5)
            printf("\nThe value for y is %d",y);
        else
            printf("\nThe value of y exceeds 5");
    }
    else
        printf("\nChoice Entered was not 1");
}