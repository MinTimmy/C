#include "calculator.h"

void calculator::addition()
{
    int index = 0;
    while( n1 != 0 || n2 != 0)
    {
        if(n1 == 0)
        {
            answer.push_back(index,n2->coefficient);
        }

        else if( n2 == 0)
        {
            answer.push_back(index,n1->coefficient);
        }

        else
        {
            answer.push_back(index,n1->coefficient+n2->coefficient);
        }

        n1 = n1->next;
        n2 = n2->next;
        index++;
    }
}

void calculator::print_answer()
{
    answer.list_print();
}

