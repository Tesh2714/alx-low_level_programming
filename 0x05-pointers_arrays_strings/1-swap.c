wap_int - swaps the values of a and b
 * @a: pointer int = 98
 *  * @b: pointer int = 42
 *   * @a: pointer 1
 *    * @b: pointer 2
 *     * Return; 0
 *      */

 void swap_int(int *a, int *b)
{
		*a = 42;
			*b = 98;
				*a += *b;
					*b = *a - *b;
						*a = *a - *b;
}
