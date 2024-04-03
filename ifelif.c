#include <stdio.h>

int main(int argc, char *argv[]) {

char input_color[100] = {0};

printf("\nEnter color [red/green/yellow] to map with fruit :");
scanf("%s", input_color);

if (strncmp(input_color, "red", sizeof(input_color)) == 0) {
    printf("%s is mapped to APPLE\n", input_color);
} else if (strncmp(input_color, "green", sizeof(input_color)) == 0) {
    printf("%s is mapped to GRAPES\n", input_color);
} else if (strncmp(input_color, "yellow", sizeof(input_color)) == 0) {
    printf("%s is mapped to BANANA\n", input_color);
} else {
    printf("\nInvalid color entered :%s", input_color);
}

return 0;
}