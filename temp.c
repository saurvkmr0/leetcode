#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool isValid(char * s){

   
    
int j=1;

    for(int i=0;s[i]!='\0';i++)
    {
        
        if(s[i]!=s[j]){continue;}
        for(j=i+1;s[j]!='\0';j++)
        {

            if(s[i]=='(' && s[j]==')')
            {
                s[i]='0';
                s[j]='0';
            }
            else if(s[i]=='{' && s[j]=='}')
            {
               s[i]='0';
                s[j]='0'; 
            }
            else if(s[i]=='[' && s[j]==']')
            {
               s[i]='0';
                s[j]='0'; 
            }
        }
    }

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!='0')
        {
        printf("false");
        return false;
        }
    }
  
    
        printf("true");
        return true;
    

    

}

int main()
{
    char s[1000];
    gets(s);


    isValid(&s);
    return 0;
}