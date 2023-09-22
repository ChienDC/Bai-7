//
// Created by ChienDC on 9/22/2023.
//
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void clrscr(){
    system("cls");
}
//int main(){
int Chien_TT02(){
    int x;
    x = 0;
    clrscr();

    printf("Enter Choice (1-3):");
    scanf("%d",&x);

    if ( x == 1)
        printf("\nChoice is 1");
    else if (x == 2)
        printf("\nChoice is 2");
    else if (x == 3)
        printf("\nChoice is 3");
    else
        printf("\nInvalid Choice : Invalid Choice");
}