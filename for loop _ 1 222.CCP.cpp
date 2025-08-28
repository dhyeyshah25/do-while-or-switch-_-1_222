#include<stdio.h>
#include<conio.h>
int main()
{
    for(int i=0;i<10;i++)
        for(int j=0;j<8;j++)
   {
       if(i==j)
        continue;
    printf("%d %d\n",i,j);
   }
}
