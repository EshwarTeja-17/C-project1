#include"headers.h"

int main()
{
	NODE *HEAD=NULL;
	char str[100];
	printf("enter the expression : ");
	scanf("%[^\n]s",str);
	printf("postfix expression \n");
	char *ptr=str;
	while(*ptr)
	{
	if(*ptr=='+'||*ptr=='-'||*ptr=='*'||*ptr=='/'||*ptr=='%'||*ptr=='('||*ptr==')'||*ptr=='&'||*ptr=='|'||*ptr=='^')
	{
		if(HEAD==NULL)
		{
			HEAD=push(HEAD,*ptr);
		}
		else if(*ptr==')')
		{
			while(HEAD->ch!='(')
			{
				HEAD=pop(HEAD);
			}
			HEAD=pop(HEAD);
		}
		else if(precedence(HEAD->ch)<precedence(*ptr)||HEAD->ch=='(')
		{
			HEAD=push(HEAD,*ptr);
		}
		else if(precedence(HEAD->ch)>precedence(*ptr))
		{
			HEAD=pop(HEAD);
			ptr--;
		}
		else
		{
			if(associvity(HEAD->ch,*ptr))
			{
				HEAD=pop(HEAD);
				ptr--;
			}
			else
			{
				HEAD=push(HEAD,*ptr);
			}

		}
	}
	else
	{
		printf("%c",*ptr);
	}
	ptr++;
	}
	if(HEAD!=NULL)
	{
		while(HEAD)
		{
			printf("%c",HEAD->ch);
			HEAD=HEAD->next;
		}

	}
	printf("\n");
}
