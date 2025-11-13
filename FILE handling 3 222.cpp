#include<stdio.h>
#include<stdlib.h>
int main()

{
    FILE*fpw,*fpr=NULL;
    char ch;
    fpr=fopen("my 1st fl.dat","r");
    fpw=fopen("my 2nd fl.dat","a");
           ch=fgetc(fpr);
                    while(ch!=EOF)
                    {
                        printf("%c",ch);
                        fputc(ch,fpw);
                    ch=fgetc(fpr);}
fclose(fpr);
fclose(fpw);
printf(" copied ");



};
