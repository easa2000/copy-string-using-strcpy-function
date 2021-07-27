// strncmp

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20] = "Hello Easa";
    char str2[20] = "Hello Mahudoom";

    if(strncmp(str1,str2,6) == 0)
    {
        printf("\n Two Strings are equal");
    }
    else{
        printf("\n Two Strings are not equal.");
    }


}
