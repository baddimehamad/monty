#include "monty.h"
#define  _POSIX_C_SOURCE 200809L
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 if the function success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *the_file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *the_stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	the_file = fopen(argv[1], "r");
	bus.file = the_file;
	if (!the_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, the_file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			execute(content, &the_stack, counter, the_file);
		}
		free(content);
	}
	free_stack(the_stack);
	fclose(the_file);
return (0);
}
