#include<stdio.h>
#include<string.h>
#define SIZE 6

void input(char arr[][10], int size);
void upper(char arr[][10], int size);
void findIntValue(char arr[][10], int size);

int main(void)
{
  char arr[SIZE][10] = {0.0};

  input(arr, SIZE);

  upper(arr, SIZE);

 

  return 0;
}

 void input(char arr[][10], int size)
{
  int i, j;

  for(i = 0 ; i < size ; i++)
 {
    printf("\nEnter the name: ");
    scanf(" %s", arr[i]);
 }
}

void upper(char arr[][10], int size)
{
  int i, j;
  int temp[10];

  for(i = 0 ; i < size && arr[i] != '\0' ; i++)
 {
    for(j = 0 ; j < 10 && arr[i][j] != '\0' ; j++)
    {
        if(arr[i][j] >= 'a' && arr[i][j] <= 'z')
        {
            arr[i][j] -= 32;
        }
    }
 }

 for(i = 0; i < size && arr[i] != '\0' ; i++)
 {
   
        printf(" %s ", arr[i]);
    
 }
 printf("\n");
 for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);

            }
        }
    }
    for(i=0;i<size;i++)
    {
    printf("%s\n",arr[i]);
    }
}

