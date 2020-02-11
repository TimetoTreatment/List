#include <stdio.h>
#include <stdlib.h>
#include "Elinkedlist.h"


void LLiniti(LList** head)
{
	*head = (LList*)malloc(sizeof(LList));
	if (*head == NULL)
	{
		printf(" Memory Error : \"LLiniti\\newnode\"");
		exit(-1);
	}

	(*head)->next = NULL;
}

void LLadd(LList* prev, DATA data)
{
	LList* newnode = (LList*)malloc(sizeof(LList));
	if (newnode == NULL)
	{
		printf(" Memory Error : \"LLadd\\newnode\"");
		exit(-1);
	}

	newnode->item = data;
	newnode->next = prev->next;
	prev->next = newnode;
}

void LLadd_asc(LList* head)
{
	DATA data;
	LList* pll;

	scanf("%d", &data);

	for (pll = head; pll->next != NULL; pll = pll->next)
	{
		if (data <= pll->next->item)
		{
			break;
		}
	}

	LLadd(pll, data);
}

void LLdel(LList* head, DATA data_target)
{
	for (LList* pll = head; pll->next != NULL;)
	{
		if (pll->next->item == data_target)
		{
			LList* temp = pll->next->next;

			free(pll->next);
			pll->next = temp;

			if (temp == NULL)
				break;
		}
		else
		{
			pll = pll->next;
		}
	}
}

void LLprint(LList* head)
{
	for (LList* pll = head->next; pll != NULL; pll = pll->next)
	{
		printf("%d ", pll->item);
	}
}