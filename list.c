#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "list.h"

// Takes a valid, sorted list starting at `head` and adds the element
// `new_element` to the list. The list is sorted based on the value of the
// `index` member in ascending order. Returns a pointer to the head of the list
// after the insertion of the new element.
list_t* insert_sorted(list_t* head, list_t* new_element) {
	assert(head != NULL);
	assert(new_element != NULL);
	list_t* p=head;

	//Insert at front
	if(new_element->index<p->index)
	{
		new_element->next=head;
		head=new_element;
	}
	else
	{
		while(1)
		{
			if (p->next==NULL||(p->next->index >= new_element->index))
			{
				new_element->next=p->next;
				p->next=new_element;
				break;
			}
			else
				p=p->next;
		}
	}


	return head;
}

// Reverses the order of the list starting at `head` and returns a pointer to
// the resulting list. You do not need to preserve the original list.
list_t* reverse(list_t* head) {
	assert(head != NULL);

	return head;
}

