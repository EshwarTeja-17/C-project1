#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node
{
	char ch;
	struct node *next;
}NODE;


NODE *push(NODE *,char);
NODE *pop(NODE *);
int precedence(char);
int associvity(char,char);
