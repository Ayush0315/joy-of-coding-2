#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str1[100],str2[100];
    printf("enter 1st string\n");
    gets(str1);
    printf("enter 2nd string\n");
    gets(str2);  
    if(strlen(str1) != strlen(str2))
    {  
        printf("Second string is not a rotation of first string");  
    }  
    else
    {   
        strcat(str1, str1);
        if(strstr(str1, str2) != NULL)  
            printf("Second string is a rotation of first string");  
        else  
            printf("Second string is not a rotation of first string");  
    }  
    return 0;  
}  