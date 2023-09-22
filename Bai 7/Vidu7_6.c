//
// Created by ChienDC on 9/22/2023.
//
#include <stdio.h>
//void main(){
int Chien_Bai7(){
    char c;
    printf("Please enter a character : ");
    scanf("%c", &c);

    if (c>= 'A'&& c <= 'Z')
    printf("Lowercase character = %c", c + 'a' - 'A');
    else
        printf("Character Entered is = %c",c);
}