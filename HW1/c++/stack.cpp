#include "stack.h"

Stack::Stack() 
{
	top = 0;
}

void Stack::push(int x)
{
    node *newnode = new node(x); 
    if(top != 0) 
    {
        newnode->next=top; 
        top = newnode; 
    }
    else top = newnode;
}

int Stack::pop()
{
    node *temp,*cur; 
    cur = top; 
    temp = top->next; 
    int x = top->data; 
    delete cur; 
    top = temp; 
    return x;
}

Stack::~Stack() 
{
	while(top != 0) 
    {
        node *cur = top; 
        top = top->next; 
        delete cur;
    }
}
