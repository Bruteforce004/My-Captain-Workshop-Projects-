#include <stdio.h> 
int pn(int x, int y)
{
  if(y>x/2)
    return 1;
  else if(x%y==0)
    return 0;
  else
    pn(x,y+1); 	  
}
 
int main()
{
    int n, a;
    printf("Enter a number:");
    scanf("%d",&n);
    a= pn(n,2);
    if (a==1)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0;
}
