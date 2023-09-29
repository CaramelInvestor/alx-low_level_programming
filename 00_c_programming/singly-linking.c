#include <stdio.h>
#include <stdlib.h>

// singly-linking list
typedef struct node node;

struct node
{
	int value;
	node* next;
};

int main(int argc, const char * arv[])
{
	node* first = NULL;

	first = malloc (sizeof (node));
	printf("Hello, Australia!\n");
	return (0);
}
