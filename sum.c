#include<stdio.h>
#include<cs50.h>

void input(int num[], int length);
void output(int num[], int length);
int find_sum(int num[], int length);

int main()
{
    int length = get_int("What's the length of array? ");
    
    int num[length];
    input(num, length);
    output(num, length);
    
    int total = find_sum(num, length);
    printf("Summation= %d\n", total);
    
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
    
//user defined function for find sum 
int find_sum(int num[], int length)
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum+=num[i];
    }

    return sum;
    
}