#include "my_strlen.h"

int main( int argc, char **argv)
{
    char *t = argv[1];
    int len = my_strlen(t);
    int i   = len/2;
    int j   = 0;
    if (len % 2 == 0)
    {
	j = i - 1;
    }
    else
    {
	i;
	j = i;
    }
    while (i < len)
    {
	if (t[i] != t[j])
	{
	    return(1);
	}
	i++;
	j--;	    
    }
    return(0);
}
