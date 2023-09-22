//
// Created by ChienDC on 9/22/2023.
//
#include <stdio.h>
//void main(){
int Chien_TT001(){
    int num , res;
    printf("Enter a number : ");
    scanf("&d", &num);
    res = num % 2;
    if ( res == 0)
        printf("The number is Even");
    else
        printf("The number is Odd");
}