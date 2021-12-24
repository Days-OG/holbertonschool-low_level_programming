#include <stdio.h>
void init(void) __attribute__((constructor));
/**
 * init - execute before main
 */
void init(void)
{
printf("%s\n%s\n",
"You're beat! and yet, ypu must allow,",
"I bore my house upon my back!",
"(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)"
);
}
