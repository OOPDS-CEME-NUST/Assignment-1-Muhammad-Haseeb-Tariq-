#include <iostream>
using namespace std ;

struct node 
{
	double data ;
	node *next ;
};

class list 
{
	private : 
	node *head , *tail ;
	
	public :
	list () ;
	void node_creation (double) ;
	void display () ;
	void insert_at_start (double) ;
	void insert_at_certain_position ( int , double ) ;
	void delete_first_element () ;
	void delete_last_element () ;
	void delete_certain_position (int) ;
	
} ;