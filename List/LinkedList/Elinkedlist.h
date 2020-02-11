//
// LinkedList Header.
//
// Made by (CE) TimetoTreatment.
//
#ifndef ELINKEDLIST_H
#define ELINKEDLIST_H


//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// Define DATA type and ArrayStack structure
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

// ~def ___ DATA;
typedef int DATA;

typedef struct _LinkedList
{
	DATA item;
	struct _LinkedList* next;

} LList;


//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// ArrayStack Functions
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

/* Head initialize */
void LLiniti(LList** head);

/* Stack initialize */
void LLadd(LList* prev, DATA data);

/* Check whether empty */
void LLadd_asc(LList* head);

/* Check whether full */
void LLdel(LList* head, DATA data_target);

/* Extract DATA */
void LLprint(LList* head);

/* Read top */


/* Read current Stack size */


/* Show all DATA */


#endif