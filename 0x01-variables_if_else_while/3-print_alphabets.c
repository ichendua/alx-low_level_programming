nclude <stdio.h>
/**
 *  main - Prints the alphabet in lowercase, then in uppercase.
 *
 *  Return: 0 on success
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	
	for (i =0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);

}
