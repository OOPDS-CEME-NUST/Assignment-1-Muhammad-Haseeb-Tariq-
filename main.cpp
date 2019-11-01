#include <iostream>
#include "LL.h"
using namespace std ;

void main ()
	{
		list object ;
		object.node_creation (25);
		object.node_creation (50);
		object.node_creation (90);
		object.node_creation (40);
		object.node_creation (55);
		
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		cout << "-----------Displaying all nodes-----------" ;
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		
		object.display () ;
		
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		cout << "-------------Inserting at End-------------" ;
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		
		object.node_creation ( 15 ) ;
		cout << endl ;
		object.display () ;
		
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		cout << "------------Inserting At Start------------" ;
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		
		object.insert_at_start ( 10 ) ;
		cout << endl ;
		object.display () ;
		
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		cout << "-------------Deleting At Start------------" ;
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		
		object.delete_first_element () ;
		cout << endl;
		object.display () ;
		
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		cout << "--------------Deleting At End-------------" ;
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		
		object.delete_last_element () ;
		cout << endl ;
		object.display () ;
		
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		cout << "---------Deleting at 4th Position---------" ;
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		
		object.delete_certain_position ( 4 ) ;
		cout << endl ;
		object.display () ;
		
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		cout << "--------Inserting At 3rd Position---------" ;
		cout << endl ;
		cout << "------------------------------------------" ;
		cout << endl ;
		
		object.insert_at_certain_position ( 3 , 45 ) ;
		cout << endl ;
		object.display () ;
		
		system ("pause");
		
	}
