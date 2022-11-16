#include <unistd.h>

/**
 * main - Entry point
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Always 0
 */

int main(__attribute__((unused))int ac, __attribute__((unused))char **av)
{
	write(1, "Betty would be proud", 20);
	return (0);
}
