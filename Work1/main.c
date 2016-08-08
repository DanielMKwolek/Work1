//
//  main.c
//  Work1
//
//  Created by Daniel Kwolek on 8/8/16.
//  Copyright © 2016 Arcore. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int again;
    again = 0;
    while (again == 0)
    {
        printf("Please enter the type of Math you would like to do:\n 1: Add\n 2: Subtract\n 3: Multiply\n 4: List \"n\" odd numbers\n 5: List first \"n\" prime numbers (Trial Division)\n: ");
        int Math;
        Math = 0;
        while (Math < 1 || Math > 5)
        {
            fpurge(stdin);
            scanf ("%d", &Math);
            printf("Your input was accepted as \"%d\"\n", Math);
            if (Math < 1 || Math > 5)
            {
                printf("\nPlease use a valid input of\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Listing odds\n 5 for Listing primes (Trial Division)\n: ");
            }
        }
        if (Math > 0 && Math < 4)
        {
            int a;
            int b;
            a = 0;
            b = 0;
            printf("For the next operations, invalid inputs will default to 0\nInt and Char mixes will truncate at first non int\n");
            printf("Please input the first integer to manipulate\n: ");
            scanf("%d", &a);
            printf("Please input the second integer to manipulate\n: ");
            scanf("%d", &b);
            switch (Math)
            {
                case (1): printf("%d + %d = %d\n", a, b, a+b); break;
                case (2): printf("%d - %d = %d\n", a, b, a-b); break;
                case (3): printf("%d * %d = %d\n", a, b, a*b); break;
            }
        }
        else if (Math == 4)
        {
            int a;
            printf("For the next operation, invalid inputs will default to 0\nInt and Char mixes will truncate at first non int\n");
            printf("How many odd numbers would you like to print?\n: ");
            scanf("%d", &a);
            for (int i = 0; i < a; i++)
            {
                printf("%d, ", (i*2 + 1));
            }
            printf("\n");
        }
        else if (Math == 5)
        {
            int a;
            printf("For the next operation, invalid inputs will default to 0\nInt and Char mixes will truncate at first non int\n");
            printf("How many prime numbers would you like to print?\n: ");
            printf("before: %d\n", a);
            scanf("%d", &a);
            printf("after: %d\n", a);
            int prime_check;
            prime_check = 0; //if prime_check becomes 1 then it is not a prime number Magick Magick
            int counter;
            counter = 1;
            printf("1, ");
            for (int i = 2; counter < a; i++)
            {
                prime_check = 0;
                for (int j = i-1; j > 1; j--)
                {
                    int h = (i % j);
                    switch (h)
                    {
                        case (0): prime_check = 1; break;
                        default: break;
                    }
                }
                if (prime_check == 0)
                {
                    printf("%d, ", i);
                    counter++;
                }
            }
            printf("\n");
        }
        printf("Would you like to do another operation?\n 0: Yes\n 1: No\n: ");
        again = -1;
        while (again < 0 || again > 1)
        {
            fpurge(stdin);
            scanf("%d", &again);
            printf("Your input was accepted as \"%d\"\n", again);
            if (again < 0 || again > 1)
            {
                printf("\nPlease use a valid input of\n 0 for Yes\n 1 for No\n: ");
            }
        }
    }
}
