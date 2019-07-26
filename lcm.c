

#include <stdio.h>

int main()
{
    int i,n1,n2,max,lcm=1;
    printf("enter the number ");
    scanf("%d %d",&n1,&n2);
    max = (n1>n2) ? n1:n2;
   i = max;
   while(1)
   {
       if(i%n1==0 && i%n2==0)
       {
           lcm = i;
           break;
       }
       i+=max;
   }
printf("Lcm of number %d and %d = %d",n1,n2,lcm);
    return 0;
}


