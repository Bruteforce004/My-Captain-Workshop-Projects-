#include<stdio.h>
int main()
{
int a;
printf("Enter a number b/w 1-5 to print out a Dish\n");
scanf("%d",&a);
switch(a)
{case 1: printf("Idli\nPrice:Rs.20");
         break;
 case 2: printf("Rava Idli\nPrice:Rs.25");
         break;        
 case 3: printf("Ragi Idli\nPrice:Rs.30");
         break;
 case 4: printf("Godhi Idli\nPrice:Rs.35");
         break;
 case 5: printf("Mosar Vada\nPrice:Rs.19");
         break;
 default:printf("Invalid Input");
 }
return 0;
}
