#include <stdio.h>
struct employee{
    char ename[30],dname[30];
    int empno,age;
    long phno;
    float sal;
};
 
int main()
{   int i;
    struct employee emp;
    printf("Enter details for 20 employees :\n");
    for(i=1;i<=20;i++)
    {
     printf("\nEmployee No. :");            
	 scanf("%d",&emp.empno);	
     printf("Employee Name :");
	 scanf("%s",emp.ename);
	 printf("Dept Name :");
	 scanf("%s",emp.dname);
     printf("Salary :");        
	 scanf("%f",&emp.sal);
	 printf("Age :");            
	 scanf("%d",&emp.age);
	 printf("Employee Ph No. :");            
	 scanf("%dl",&emp.phno);
    }
    printf("\nEntered details for 20 employees are:\n");
    printf("No.\t Name\t Dept Name\t Salary\t\t Age\t Phone Number");
    for(i=1;i<=20;i++)
    {
	 printf("\n%d\t",emp.empno);	
     printf("%s\t",emp.ename);
     printf("%s\t\t",emp.dname);
     printf("%f\t",emp.sal);
     printf("%d\t",emp.age);
     printf("%lu",emp.phno);
    }
    return 0;
}
