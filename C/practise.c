//Fibonacci Numbers
#include <stdio.h>
int main()
{
    int num, first = 0, second = 1, next;
    printf("How many Fibonacci numbers? ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%d\n", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

//Prime numbers
#include <stdio.h>
int main()
{
    int num, c = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        printf("%d is a prime number", num);
    }

    else
    {
        printf("%d is not a prime number", num);
    }

    return 0;
}

//Palindrome
#include <stdio.h>
int main()
{
    int num, reverse = 0, l_d;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (num > 0)
    {
        l_d = num % 10;
        reverse = reverse * 10 + l_d;
        num /= 10;
    }

    if (temp == reverse)
    {
        printf("Your number is a palindrome\n");
    }

    else
    {
        printf("Your number is not a palindrome\n");
    }

    return 0;
}


//Factorial
#include <stdio.h>
int main()
{
    int a, b = 1;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (; a >= 1; a--)
    {
        b *= a;
    }
    printf("Factorial is %d", b);
    return 0;
}


//Sum of the digits
#include <stdio.h>
int main()
{
    int n, sum = 0, l_d;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        l_d = n % 10;
        sum += l_d;
        n /= 10;
    }

    printf("Sum of the digits is %d", sum);
    return 0;
}

//Swap without temp variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    a = b + a;
    b = a - b;
    a = a - b;

    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
