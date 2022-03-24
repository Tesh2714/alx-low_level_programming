#include <stdio.h>
/**
 *  * main -  calculate largest prime of 612852475143
 *   *
 *    * Return: Success Always
 *     */
int main(void)
{
		long int x = 612852475143;
			long int y;
				long int py;

					for (y = 2; y < x; y++)
							for (py = 2; py < x; py++)
									{
												if (x % y == 0)
															if (x % py == 0)
																		{
																						x = x / y;
																									x = x / py;
																											}
													}
						printf("%ld\n", y);
							printf("%ld\n", py);
								return (0);
}
}
