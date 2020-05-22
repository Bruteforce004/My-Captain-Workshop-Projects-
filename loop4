#include <stdio.h> 
int m,n;
int pn(int x, int y)
{
  if(x%m==0 && x%n==0)
    return x;
  else
    pn(x+((m>n)?m:n),y); 	  
}
 
int main()
{
    
    printf("Enter 2 numbers:");
    scanf("%d%d",&m,&n);
    if (m>n)
    {
        printf("LCM of %d and %d is %d",m,n,pn(m,n));
    }
    else
    {
        printf("LCM of %d and %d is %d",m,n,pn(n,m));
    }
    return 0;
}
