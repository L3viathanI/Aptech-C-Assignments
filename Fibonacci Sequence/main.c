#include <stdio.h>

int fibonacci(int n) {
    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }
    
    

    int a,b,sum;
    
    a = 0;
    b = 1;

    for (size_t i = 0; i < n - 2; i++)
    {
        sum = a + b;

        if (a < b)
        {
            a = sum;
        }
        else {
            b = sum;
        }   
    }
    
    return sum;
}

int main() {
    int n;

    printf("Enter the term of the Fibonacci sequence to display: ");
    scanf("%i", &n);

    printf("The %ith member of the fibonacci sequence is %i.\n", n, fibonacci(n));
}