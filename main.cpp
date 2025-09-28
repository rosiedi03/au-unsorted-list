#include <iostream>
#include "AUList.h"

int main(int argc, char** argv) {	
	AUList TestList;
	std::cout<<"Newly Created List: ";
	TestList.PrintList();
	for (int i=0; i<10; i++)
	  TestList.PutItem(100-i*10);
	std::cout<<"List after 'PutItem' (100 down to 10) calls: ";
	TestList.PrintList();
	std::cout<<"Length after 'PutItem' calls: " <<TestList.GetLength() <<std::endl;
	std::cout<<"IsFull after 'PutItem' calls? " <<TestList.IsFull() <<std::endl;
	TestList.DeleteItem(50);
	std::cout<<"List after 'DeleteItem' (50) call: ";
	TestList.PrintList();
	std::cout<<"IsFull after 'DeleteItem' call? " <<TestList.IsFull() <<std::endl;
	std::cout<<"Index of value 80: "<<TestList.GetItem(80)<<std::endl;
	std::cout<<"Index of value 25: "<<TestList.GetItem(25)<<std::endl;
	std::cout << "Minimum element: " << TestList.getMin() << std::endl;
	std::cout << "Range of list: " << TestList.getRange() << std::endl;
	std::cout << "Original list: ";
	TestList.PrintList();
	AUList sub = TestList.DuplicateSE(1, 3);
	std::cout << "Duplicated sublist (1 to 3): ";
	sub.PrintList();
	TestList.MakeEmpty();
	std::cout<<"List after 'MakeEmpty': ";
	TestList.PrintList();
	return 0;
}
