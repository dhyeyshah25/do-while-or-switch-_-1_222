
#include <stdio.h>


int main()
{
    FILE*fpr=NULL;
    char ch;

           fpr=fopen("my 1st fl.dat","r");
           ch=fgetc(fpr);
                    while(ch!=EOF)
                    {
                        printf("%c",ch);
                       // fputc(ch,stdout);
                    ch=fgetc(fpr);}
fclose(fpr);

};

