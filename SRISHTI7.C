#include<stdio.h>
#include<conio.h>

void main(){

float basic_salary,hra,da,ta,gross_salary;
clrscr();

printf("enter the basic_salary:");
scanf("%f",&basic_salary);


printf("enter the hra percentage:");
scanf("%f",&hra);

printf("enter the da percentage:");
scanf("%f",&da);

printf("enter the ta percentage:");
scanf("%f",&ta);

hra=(basic_salary*hra)/100;
da=(basic_salary*da)/100;
ta=(basic_salary*ta)/100;

gross_salary=basic_salary+hra+da+ta;

printf("gross_salary:Rs.%f/n",gross_salary);

getch();

}