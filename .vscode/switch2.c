#include<stdio.h>
int main()
{
    char c;
    printf("enter the value of ch\n");
    scanf("%c",&c);
    switch('c')
    {
        case 'm':{
            printf("monday");
        }
        //break;
        case 't':
        {
            printf("tuesday");
        }
        break;
        default:{
            printf("invalid");
        }
        break;
    }
    return 0;
}