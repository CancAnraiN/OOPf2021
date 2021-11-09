#ifndef __STACK_H__
#define __STACK_H__

class node 
{
	public:
	friend class Stack;
    	node(int x){data=x;}

	private:
	int data; 
	node* next; 
};

class Stack 
{
	public:
	Stack();
	void push(int x);
	int pop();
	~Stack();

	private:
	node *top; 
};

#endif
