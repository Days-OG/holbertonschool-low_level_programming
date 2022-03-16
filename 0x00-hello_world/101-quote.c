#include <stdio.h>
#include <unistd.h>
/**
 * main - a Function entry
 * Description - print string stderr(write function)
 * Return - 1
 */

int main()
{
  write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 
		  59);
  return 1;
}
