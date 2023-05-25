#include<stdio.h>
#include<conio.h>

void main(){

int first_angle;
int second_angle;
int c;
clrscr();

printf("enter first angle: ");
scanf("%d",&first_angle);

printf("enter second angle: ");
scanf("%d",&second_angle);

c=180 - first_angle - second_angle;
printf("the third angle is: %d",c);
getch();
}