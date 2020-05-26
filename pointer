#include<stdio.h>
int main() 
{   
    int a[3][3],i,j,s=0;
    int* b;
    b=a;
    printf("Enter array elelemts\n");
    for(i=0;i<3;i++)
       for(j=0;j<3;j++)
       {
	     printf("Element [%d]x[%d]: ",i,j);
         scanf("%d",(b+i*3+j));
         if(i==j)
            s+= *(b+i*3+j);
        }
    printf("The matrix is:\n");
	for(i=0;i<3;i++)
   {   for(j=0;j<3;j++)
         printf("%d  ",*(b+i*3+j));
	   printf("\n");
    }
	printf("The sum of the diagonal elements is : %d",s);	    
	return 0;
}
