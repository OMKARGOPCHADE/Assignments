#include<stdio.h>
int fact(int);
int perm(int,int);
int main()
{
    int n,r;
    printf("Enter value of all numbers: ");
    scanf("%d",&n);
   printf("Enter value for slected numbers: ");
    scanf("%d",&r); 
  printf("The arrangements are: %d",perm(n,r));
    return 0;
}
int fact(int N)
{
   int i;
   int sum=1;
   for ( i = 1; i <= N; i++)
   {
    sum=i*sum;
    
   }
   return sum;
}
int perm(int N,int R)
{
  int C=fact(N)/fact(R);
   return C;
}