#include <iostream>

#define MAX 80

void produce_postfix(char* , char*);
int priority(char);

int main()
{
    char infix[MAX] = {'\0'};
    char postfix[MAX] = {'\0'};

    std::cout<<"the infix:";
    std::cin>>infix;
/*
    infix[0] = 'a';
    infix[1] = '+';
    infix[2] = 'b';
*/
    produce_postfix(infix ,postfix);
    std::cout<<"\n\nthe postfix:";
    for(int i=0;postfix[i] != '\0';i++)
    {
        std::cout<<postfix[i];
    }
    return 0;
}


void produce_postfix(char* infix , char* postfix)
{
    char stack[MAX] = {'\0'};
    int i , j , top;
    for( i = 0 , j = 0 , top = 0; infix[i] != '\0'; i++)
    {
        switch(infix[i])
        {
            case '(':
                stack[++top] = infix[i];
                break;

            case'+':  case'-': case'*':  case'/':
                std::cout<<"\n\nhello\n\n";
                while ( priority(stack[top]) >= priority(infix[i]) )
                {
                    postfix[j++] = stack[top--];
                }
                stack[++top] = infix[i];
                break;

            case ')' :
                while(stack[top] != ')')
                {
                    postfix[j++] = stack[top--];
                }
                top--;
                break;

            default:
                postfix[j++] = infix[i];
                break;

        }
    }
        while (top > 0)
        {
            postfix[j++] = stack[top--];
        }

}
int priority( char oper)
{
    switch(oper)
    {
        case '+':  case '-': return 1 ;
        case '*':  case '/': return 2;
        default:           return 0;
    }

}
