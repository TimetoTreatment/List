#include <stdio.h>
#include <stdlib.h>
#include "Elinkedlist.h"


int main(void)
{
	int n;
	LList* head = NULL;


	printf(" * num : ");
	scanf("%d", &n);

	for (LLiniti(&head); n; n--)
	{
		LLadd_asc(head);
	}

	printf(" * Number to DELETE : ");
	scanf("%d", &n);
	LLdel(head, n);

	LLprint(head);


	return 0;
}