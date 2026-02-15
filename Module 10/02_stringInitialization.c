#include <stdio.h>
int main()
{
    // char ar[6]= {'F','a','r','i','h','a'};
    // for(int i=0; i<6; i++)
    // {
    //    printf("%c\n",ar[i]);
    // }


    // char ar[6] = "Fariha";
    // for(int i=0; i<6; i++)
    // {
    //     printf("%c\n",ar[i]);
    // }

    char ch[5];
    ch[0]='k';
    ch[1]='a';
    ch[2]='p';
    ch[3]='p';
    ch[4]='\0';
    printf("%s\n",ch);
    printf("%s\n",ch[4]);


    char a[]="FARIHA ISLAM";
    char ari[13]="FARIHA AKTER";
    char arif[13]="FARIHA MONIE\0"; 
    printf("%s\n%s\n%s\n",a,ari,arif);

    char arii[7] = "Fariha";
    printf("%s\n",arii);
    
    return 0;
}