#include <stdio.h>
int main()
{
    while (1)
    {
        int choice;
        printf("1.all operation enter 0:\n2.choice operation enter 1:\n3.continue operation enter 2:\n4.exit enter 3:\n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            float a, b;
            printf("enter first number :");
            scanf("%f", &a);
            printf("enter second number :");
            scanf("%f", &b);
            printf("first number %.1f\nsecond number %.1f\nsum of number %.1f\nsub of number %.1f\nmulti of number %.1f\ndivision of number %.2f\n", a, b, a + b, a - b, a * b, a / b);
            
        }
        else if (choice == 1)
        {
            char operation;
            float a, b;
            printf("enter first number:");
            scanf("%f", &a);
            printf("enter second number:");
            scanf("%f", &b);
            printf("choice the operation(+,-,*,/)");
            scanf(" %c", &operation);
            switch (operation)
            {
            case '+':
                printf("the sum is %.1f\n", a + b);
                break;
            case '-':
                printf("the sub is %.1f\n", a - b);
                break;
            case '*':
                printf("the multi id %.1f\n", a * b);
                break;
            case '/':
                if (b == 0)
                {
                    printf("not divisible by zero");
                }
                else
                {
                    printf("the divi is %.2f\n", a / b);
                    
                }
                break;
            default:
                printf("invaid operation");
            }
            
        }
        else if (choice == 2)
        {
            char operation;
            printf("choice the operation(+,-,*,/)");
            scanf(" %c", &operation);
            float a, b, c = 0;
            printf("enter first number:");
            scanf("%f", &a);
            printf("enter second number:");
            scanf("%f", &b);

            switch (operation)
            {
            case '+':
                c = a + b;
                break;
            case '-':
                c = a - b;
                break;
            case '*':
                c = a * b;
                break;
            case '/':
                if (b == 0)
                {
                    printf("not divisible by zero");
                }
                else
                {
                    c = a / b;
                    
                }
                break;
            default:
                printf("invaid operation");
            }
            while (1)
            {
                float d;
                printf("choice the operation(+,-,*,/,=)");
                scanf(" %c", &operation);
                /* printf("enter next number:");
                 scanf("%d",&d);*/

                if (operation == '+')
                {
                    printf("enter next number:");
                    scanf("%f", &d);
                    c = c + d;
                }
                else if (operation == '-')
                {
                    printf("enter next number:");
                    scanf("%f", &d);
                    c = c - d;
                }
                else if (operation == '*')
                {
                    printf("enter next number:");
                    scanf("%f", &d);
                    c = c * d;
                }
                else if (operation == '/')
                {
                    if (d == 0)
                    {
                        printf("not divisible by zero");
                        break;
                    }
                    else
                    {
                        printf("enter next number:");
                        scanf("%f", &d);
                        c = c / d;
                    }
                }
                else if (operation == '=')
                {
                    printf("the value of %.2f", c);
                    break;
                }
                else
                {
                    printf("synax error ");
                }
            }
        }
        else if (choice == 3)
        {
            printf("thank you");
            break;
        }
        else
        {
            printf("the operation select wrong");
        }
        
    }
    return 0;
}