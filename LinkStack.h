#ifndef LinkStack_h
#define LinkStack_h
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
typedef int dataType;
typedef struct node{
	        dataType data;
		        struct node *next;
}LinkStack,node;


LinkStack* InitStack();
int Empty(LinkStack *);
int priority(char x);
double compute(double x,double y, char op);
void Push(LinkStack *,dataType x);
void Pop(LinkStack *);
dataType GetTop(LinkStack *);
void Operation();



#endif
