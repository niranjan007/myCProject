#include<stdio.h>
#include "headers.h"
#include "functions.c"

void display()
{
   printf("Added my display function\n");
}

int main()
{
  int x = 20,y = 50;
  printf("Welcome to cproj project\n");
  display();
  printf("Adiition of %d and %d is %d\n",x,y,add(x,y));
  printf("Subtraction of %d and %d is %d\n",x,y,sub(x,y));
}
