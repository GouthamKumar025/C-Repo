#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sentence[1000];
    
    scanf("%c",&ch);
    scanf("%s",s);
    scanf(" %[^\n]%*c", &sentence);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sentence);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
