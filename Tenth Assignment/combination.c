#include<stdio.h>
int fact(int);
int comb(int,int);
int main()
{
    int n,r;
    printf("Enter value of all numbers: ");
    scanf("%d",&n);
   printf("Enter value for slected numbers: ");
    scanf("%d",&r); 
  printf("The combinations are: %d",comb(n,r));
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
int comb(int N,int R)
{
  int C=fact(N)/fact(R)*fact(N-R);
   return C;
}