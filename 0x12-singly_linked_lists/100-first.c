#include <stdio.h>
void init(void) __attribute__((constructor));
/**
 * init - execute before main
 */
void init(void)
{
printf("%\n%s\n",
"you're beat! and yet, ypu must allow,",
"i bore my house upon my back!"
);
}
