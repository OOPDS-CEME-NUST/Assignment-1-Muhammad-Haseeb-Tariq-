#include "LL.h"

list :: list ()
	{ 
		head = NULL;
		tail = NULL;
	}
	
void list :: node_creation ( double value )
	{
		node *ptr = new node;
		ptr->data = value;
		ptr->next = NULL;
		
		if ( head == NULL )
			{ 
				head = ptr ;
				tail = ptr ;
				ptr = NULL ;
			}
		else 
			{
				tail->next = ptr ;
				tail = ptr ;
			}
	}

void list :: display ()
	{
		node *ptr = new node ;
		ptr = head ;
		while ( ptr != NULL )
			{
				cout << ptr->data << "\t" ;
				ptr = ptr->next ;
			}
	}

void list :: insert_at_start ( double value )  
	{
		node *ptr = new node ;
		ptr->data = value ;
		ptr->next = head ;
		head = ptr ;
	}
	
void list :: insert_at_certain_position ( int pos , double value )
	{
		node *previous = new node ;
		node *current = new node ;
		node *ptr = new node ;
		current = head ;
		
		for ( int i = 1 ; i < pos ; i++ )
			{
				previous = current ;
				current = current->next ;
			}
		
		ptr->data = value ;
		previous->next = ptr ;
		ptr->next = current ;
	}

void list :: delete_first_element ()
	{
		node *ptr = new node ;
		ptr = head ;
		head = head->next ;
		delete ptr ;
	}
	
void list :: delete_last_element ()
	{
		node *current = new node ;
		node *previous = new node ;
		current = head ;
		
		while ( current->next != NULL )
		{
			previous = current ;
			current = current->next ;
		}
		
		tail = previous ;
		previous->next = NULL ;
		delete current ;
	}
	
void list :: delete_certain_position ( int pos )
	{	
		node *current = new node ;
		node *previous = new node ;
		current = head ;
		
		for ( int i = 1 ; i < pos ; i++ )
			{
				previous = current ;
				current = current->next ;
			}
			
		previous->next = current->next ;
		delete current ;
	}
		