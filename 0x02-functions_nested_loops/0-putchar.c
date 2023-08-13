/**
 * main - prints _putchar
 * Return: 0
 */

int main(void)
{
	int i;
	char ch;
	char str[] = "_putchar\n";

	for (i = 0; i < 9; i++)
	{
		ch = str[i];
		_putchar(ch);
	}
	return 0;
}
