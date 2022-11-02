include "main.h"

int check_prime(int n, int resp);
/**
 * is_prime_number - check if n is prime number
 * @n: integer to be checked
 *
 * Return: i if is prime 0 otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @resp: int
 * Return: int
 */

int check_prime(int n, int resp)
{
