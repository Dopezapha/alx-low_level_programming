#include <stdio.h>

#define FILE_DEFINED

int main(void)
{
#ifdef FILE_DEFINED
printf("2-main.c");
printf("\n");
endif
return (0);
}
