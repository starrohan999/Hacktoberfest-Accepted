//WAP to accept a string and count the number of vowels and consonants and numbers

#include <stdio.h>
#include <string.h>

void main() {
    char s[100];
    int c=0,i,v=0,num=0,cons=0;
    printf("Enter a string: \n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
        c++;
    for(i=0;s[i]!='\0';i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
        else if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
            num++;
        else
            cons++;
    }
    printf("The number of numbers is: %d\n",num);
    printf("The number of vowels is: %d\n",v);
    printf("The number of consonants is: %d\n",cons);
}