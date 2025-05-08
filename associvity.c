#include"headers.h"

int associvity(char ch,char x)
{
	if(ch=='?'||ch==':'||ch=='='||ch=='~'||ch=='!')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
