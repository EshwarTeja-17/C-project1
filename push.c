#include"headers.h"

NODE *push(NODE *ptr,char x)
{
	NODE *newnode=calloc(1,sizeof(NODE));
	newnode->ch=x;
	newnode->next=ptr;
	ptr=newnode;
	return ptr;
}
