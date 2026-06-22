#include<stdio.h>
#include<stdlib.h>

void input(int num[], int length);
void output(int num[], int length);
int find_max(int num[], int length);


int main()
{
    int length;
    printf("What's the length of array? ");
    scanf("%d", &length);

    //length validation
    if (length <= 0)
    {
        printf("length must be a positive number!\n");
        return 1;
    }
    
    //memory allocation 
    int *num = malloc(length * sizeof(int));
    if (num == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    input(num, length);
    output(num, length);

    int maximum = find_max(num, length);
    printf("maximum= %d\n", maximum);

    free(num);

    return 0;
}

//user defined function for input
void input(int num[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter value %d= ", i+1);
        scanf("%d", &num[i]);
    }
}

//user defined function for output
void output(int num[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", num[i]);

    }
    printf("\n");
}

//user defined function for find maximum
int find_max(int num[], int length)
{
    int max = num[0];

    for (int i =1; i < length; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    return max;
}