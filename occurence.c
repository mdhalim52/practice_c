#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

void input(int num[], int length);
void output(int num[], int length);
int find_occ(int num[], int length);

int main()
{
    int length = get_int("What's the length of array? ");

    //length validation 
    if (length <= 0)    
    {
        printf("Length must be a positive number!\n");
        return 1;
    }
    
    //memory allocation
    int *num = malloc(length * sizeof(int));
    if (num==NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    input(num, length);
    output(num, length);

    int occurance = find_occ(num, length);
    printf("occurance= %d\n", occurance);
    
    free(num);

    return 0;
}

//user defined function for input 
void input(int num[], int length)
{
    for (int  i = 0; i < length; i++)
    {
        printf("Enter value %d: ", i+1);
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

//user defined function for counting occurance
int find_occ(int num[], int length)
{
    int target = get_int("Enter the number to search: ");

    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (num[i] == target)
        {
            count++;
        }
        
    }
    return count;
}