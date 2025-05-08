#include"headers.h"

int precedence(char ch)
{
	if(ch=='('||ch==')')
	{
		return 15;
	}	

	else if(ch=='*'||ch=='/'||ch=='%')
	{
		return 14;
	}						
	else if(ch=='+'||ch=='-')
	{
		return 13;
	}
	else
	{
		return 12;
	}
}
