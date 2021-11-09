#include <stdlib.h>
#include "stack.h"

void push(struct stack* this, int x)
{
    struct node* tmp  = malloc(sizeof(struct node));
    if(this->top!=0)
    {
        tmp->data=x; 
        tmp->next=this->top; 
        this->top=tmp; 
    }
    else
    {
        this->top=tmp;
        tmp->data=x;
    }
}
int pop(struct stack* this)
{
    struct node* tmp; 
    int n;
    tmp=this->top; 
    n=tmp->data; 
    this->top=this->top->next; 
    free(tmp); 
    return n;
}

struct stack* new_stack()
{
	struct stack* stk = malloc(sizeof(struct stack));
	return stk;
}

void delete_stack(struct stack* stk)
{
	free(stk);
}
