#include<stdio.h>
#include<stdlib.h>

void input(int num[], int length);
void output(int num[], int length);
void find_rev(int num[], int length);

int main()
{
    int length;
    printf("What's the length of array? ");
    scanf("%d", &length);

    //input validation
    if (length<=0)      
        {
            printf("length must be a positive number!\n");
            return 1;
        }

        int *num = (int *)malloc(length*sizeof(int));
        input(num, length);
        output(num, length);

        find_rev(num, length);

        free(num);

        return 0;
}

//user defined function for input 
void input(int num[], int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("Enter value %d= ", i+1);
        scanf("%d", &num[i]);
    }
}

//user defined function for output
void output(int num[], int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}

//user defined function for find reverse
void find_rev(int num[], int length)
{
    int temp = 0;
    for(int i = 0; i < (length/2); i++)
    {
        temp = num[i];
        num[i] = num[length - i - 1];
        num[length -i - 1] = temp;
    }

    for (int  i = 0; i < length; i++)
    {
        printf("reverse value %d= %d\n", i+1, num[i]);
    }
}