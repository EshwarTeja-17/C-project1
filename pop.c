#include"headers.h"

NODE *pop(NODE *ptr)
{
	NODE *temp;
	if(ptr->ch!='('&&ptr->ch!=')')
	{
		printf("%c",ptr->ch);
	}
	temp=ptr;
	ptr=ptr->next;
	free(temp);
	return ptr;
}
