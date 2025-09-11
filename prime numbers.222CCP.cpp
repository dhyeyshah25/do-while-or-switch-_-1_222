#include<stdio.h>
int main()

{
    int n,i;
    char flag ='y';
    printf("enter one number");
    scanf("%d",&n);
    if(n==1)
    {
        flag='n';
        printf("%d is neither prime nor composite",n);}
    else
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag ='n';
            printf("%d is a composite number",n);
            break;
        }
    }
    if(flag== 'y')
        printf("%d is a prime number",n);
}
