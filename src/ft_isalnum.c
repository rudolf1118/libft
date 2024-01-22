#include "../libft.h"

int isalnum(int argument)
{
    if ((argument >= '0' && argument <= '9') || (argument >= 'a' && argument <= 'z') || (argument >= 'A' && argument <= 'Z'))  
        return (1);
    else 
        return (0); 
}