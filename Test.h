#ifndef TEST_H
#define TEST_H
#include "LinkedListOfInts.h"
#include <string>
#include <iostream>
#include <vector>

class Test
{
private:
public:
  void runTests();
	std::string boolToStr(bool result);

  //CONSTRUCTOR TESTS
	bool test1(); //initiates length = 0
  bool test2(); //initiates m_front = nullptr

  //ISEMPTY TESTS
	bool test3(); //Checks isEmpty at the start
	bool test4(); //Checks isEmpty after adding elements

	//SIZE TESTS
	bool test5(); //Tests empty list = 0
	bool test6(); //Tests any list size is != 0
  bool test7(); //Checks for correct list size after using addFront
	bool test8(); //Checks for correct list size after using addBack
  bool test13(); //tests addFront increments size
	bool test14(); //tests addBack increments size
  bool test15(); //tests correct size after adding and removing using Front fns
	bool test16(); //tests correct size after adding and removing using Back fns
  bool test17(); //tests removeFront decrements size
  bool test18(); //tests removeBack decrements size

	//ADD TESTS
	bool test9(); //tests if addFront is successful on empty list
	bool test10(); //tests if addBack is successful on empty list
	bool test11(); //tests if addFront is successful with multiple elements
	bool test12(); //tests if addBack is successful with multiple elements


  //REMOVE TESTS
  bool test19(); //tests removeFront on empty list returns false
  bool test20(); //tests removeBack on empty list returns false
  bool test21(); //checks if removeFront fn is working
  bool test22(); //checks if removeBack fn is working
  bool test23(); //tries to remove an element from the list with removeFront
  bool test24(); //tries to remove an element from the list with removeback
  bool test25(); //tries to remove beyond empty list with removeFront
  bool test26(); //tries to remove beyond empty list removeBack

  //SEARCH TESTS
	bool test27(); //checks if search returns false when empty
	bool test28(); //checks if search returns false when not in list
	bool test29(); //tests search and returns true if found


};

#endif
