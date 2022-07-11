/**
 * print_name - prints a name
 * @name: given name (string)
 * @f: print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
