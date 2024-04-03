#include <stdio.h>
int main()
{
    char alphabets;
    printf("enter the alphabets\n");
    scanf("%c",&alphabets);
    switch(alphabets)
    {
        case 'a':
        {printf("a\n");
        }
        break;
        case 'b':
        {printf("b\n");
        }
        break;
        case 'c':
        {printf("c\n");
        }
        break;
        {printf("d\n");
        }
        break;
        case 'd':
        {
            printf("e\n");
        }
        break;
        case 'e':
        {
            printf("f\n");
        }
        break;
        case 'f':
        {
            printf("g\n");
        }
        break;
        default:
        {
            printf("invalid day\n");
        }
        break;
    }
}