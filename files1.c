#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
int main()
{   
  FILE* fp;
  int i=0,b;
  char *s;
  char *a;
  char c;
  printf("Enter the maximum word limit for your file:\n");
  scanf("%d",&b);
  printf("\nEnter the data for the file:\n");
  s= (char*)malloc(b*sizeof(char));
  a= (char*)malloc(b*sizeof(char));
  scanf("%c",&c);
  gets(s);
  fp=fopen("test1.txt","w");
  fprintf(fp,"%s",s);
  fclose(fp);
  fp=fopen("test1.txt","r");
  c = getc(fp);
  while(c!= EOF) 
  { 	
    a[i]=c;
    i++;
    c=getc(fp);
  }
  a[i]='\0';
  strrev(a);
  printf("\nThe data of the file in reverse is : %s",a);
  fclose(fp);
  fp=fopen("test2.txt","w");
  fprintf(fp,"%s",a);
  fclose(fp);
  fp=fopen("test3.txt","w");
  fprintf(fp,"%s",strrev(a));
  fclose(fp);
  return 0;
}
