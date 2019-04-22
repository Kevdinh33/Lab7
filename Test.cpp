#include "Test.h"

std::string Test::boolToStr(bool boo)
{
	if (boo){
		return "PASSED";
	}
	else{
		return "FAILED!";
	}
}

void Test::runTests()
{
	std::cout << "Test 1 checks length of list = 0: " + boolToStr(test1()) + '\n';
	std::cout << "Test 2 checks m_front = nullptr: " + boolToStr(test2()) + '\n';
	std::cout << "Test 3 checks isEmpty function on initialization: " + boolToStr(test3()) + '\n';
	std::cout << "Test 4 checks isEmpty function after adding elements: " + boolToStr(test4()) + '\n';
	std::cout << "Test 5 tests empty list = 0: " + boolToStr(test5()) + '\n';
	std::cout << "Test 6 tests any list size is != 0: " + boolToStr(test6()) + '\n';
	std::cout << "Test 7 checks for correct list size after using addFront: " + boolToStr(test7()) + '\n';
	std::cout << "Test 8 checks for correct list size after using addBack: " + boolToStr(test8()) + '\n';
	std::cout << "Test 9 tests if addFront is successful on empty list: " + boolToStr(test9()) + '\n';
	std::cout << "Test 10 tests if addBack is successful on empty list: " + boolToStr(test10()) + '\n';
	std::cout << "Test 11 tests if addFront is successful with multiple elements: " + boolToStr(test11()) + '\n';
	std::cout << "Test 12 tests if addBack is successful with multiple elements: " + boolToStr(test12()) + '\n';
	std::cout << "Test 13 tests if addFront increments size: " + boolToStr(test13()) + '\n';
	std::cout << "Test 14 tests if addBack increments size: " + boolToStr(test14()) + '\n';
	std::cout << "Test 15 tests correct size after adding and removing using Front fns: " + boolToStr(test15()) + '\n';
	std::cout << "Test 16 tests correct size after adding and removing using Back fns: " + boolToStr(test16()) + '\n';
	std::cout << "Test 17 tests removeFront decrements size: " + boolToStr(test17()) + '\n';
	std::cout << "Test 18 tests removeBack decrements size: " + boolToStr(test18()) + '\n';
	std::cout << "Test 19 tests removeFront on empty list returns false: " + boolToStr(test19()) + '\n';
	std::cout << "Test 20 tests removeBack on empty list returns false: " + boolToStr(test20()) + '\n';
	std::cout << "Test 21 checks if removeBack fn is working: " + boolToStr(test21()) + '\n';
	std::cout << "Test 22 checks if removeBack fn is working: " + boolToStr(test22()) + '\n';
	std::cout << "Test 23 tries to remove an element from the list with removeFront: " + boolToStr(test23()) + '\n';
	std::cout << "Test 24 tries to remove an element from the list with removeBack: " + boolToStr(test24()) + '\n';
	std::cout << "Test 25 tries to remove beyond empty list with removeFront: " + boolToStr(test25()) + '\n';
	std::cout << "Test 26 tries to remove beyond empty list removeBack: " + boolToStr(test26()) + '\n';
	std::cout << "Test 27 checks if search returns false when empty: " + boolToStr(test27()) + '\n';
	std::cout << "Test 28 checks if search returns false when not in list: " + boolToStr(test28()) + '\n';
	std::cout << "Test 29 tests search and returns true if found: " + boolToStr(test29()) + '\n';
}

//CONSTRUCTOR TESTS
bool Test::test1() //initiates length = 0
{
	LinkedListOfInts list;
	if (list.size() == 0) return true;
	else return false;
}

bool Test::test2() //initiates m_front = nullptrr
{
	LinkedListOfInts list;
	try
	{
		list.toVector().at(0);
		return false;
	}
	catch (std::out_of_range & rte)
	{
		return true;
	}
}

//ISEMPTY TESTS
bool Test::test3() //Checks isEmpty at the start
{
	LinkedListOfInts list;

	if (list.isEmpty()) return true;
	else return false;
}

bool Test::test4() //Checks isEmpty after adding elements
{
	LinkedListOfInts list;
	list.addFront(1);

	if (!list.isEmpty()) return true;
	else return false;
}

//SIZE TESTS
bool Test::test5() //Tests empty list = 0
{
	LinkedListOfInts list;

	if (list.size() == 0) return true;
	else return false;
}


bool Test::test6() //Tests any list size is != 0
{
	LinkedListOfInts list;
	bool check, check2, check3 = false;
	list.addFront(3);
	if (list.size() == 1) check = true;
	list.addFront(2);
	if (list.size() == 2) check2 = true;
	list.addFront(1);
	if (list.size() == 3) check3 = true;
	if(check && check2 && check3) return true;
	else return false;
}

bool Test::test7() //Checks for correct list size after using addFront
{
	LinkedListOfInts list;
	list.addFront(1);

	if (list.size() == 1) return true;
	else return false;
}

bool Test::test8() //Checks for correct list size after using addFront
{
	LinkedListOfInts list;
	list.addBack(1);

	if (list.size() == 1) return true;
	else return false;
}

bool Test::test13() //test if addFront increments size
{
	LinkedListOfInts list;
	list.addFront(1);
	list.addFront(2);
	int size = list.size();
	list.addFront(3);
	if (list.size() == size + 1) return true;
	else return false;
}

bool Test::test14() //test if addBack increments size
{
	LinkedListOfInts list;
	list.addBack(1);
	list.addBack(2);
	int size = list.size();
	list.addBack(3);
	if (list.size() == size + 1) return true;
	else return false;
}

bool Test::test15() //tests correct size after adding and removing using Front fns
{
	LinkedListOfInts list;

	list.addFront(1);
	list.removeFront();
	list.addFront(2);
	list.removeFront();

	if (list.size() == 0) return true;
	else return false;
}

bool Test::test16() //tests correct size after adding and removing using Front fns
{
	LinkedListOfInts list;

	list.addBack(1);
	list.removeBack();
	list.addBack(2);
	list.removeBack();

	if (list.size() == 0) return true;
	else return false;
}
bool Test::test17() //tests removeFront decrements size
{
	LinkedListOfInts list;
	list.addFront(1);
	list.addFront(2);
	int size = list.size();
	list.removeFront();
	if (list.size() == size - 1) return true;
	else return false;
}

bool Test::test18() //tests removeBack decrements size
{
	LinkedListOfInts list;
	list.addFront(1);
	list.addFront(2);
	int size = list.size();
	list.removeBack();
	if (list.size() == size - 1) return true;
	else return false;
}


//ADD TESTS
bool Test::test9() //tests if addFront is successful on empty list
{
	LinkedListOfInts list;
	list.addFront(1);

	if (list.search(1)) return true;
	else return false;
}

bool Test::test10() //tests if addBack is successful on empty list
{
	LinkedListOfInts list;
	list.addBack(1);

	if (list.search(1)) return true;
	else return false;
}

bool Test::test11() //tests if addFront is successful with multiple elements
{
	LinkedListOfInts list;

	for (int i = 0; i < 3; i++)
	{
		list.addBack((i+1));
	}

	list.addFront(3);

	if (list.search(3)) return true;
	else return false;
}

bool Test::test12() //tests if addBack is successful with multiple elements
{
	LinkedListOfInts list;

	for (int i = 0; i < 3; i++)
	{
		list.addFront((i+1));
	}

	list.addBack(3);

	if (list.search(3)) return true;
	else return false;
}


//REMOVE TESTS

bool Test::test19() //tests removeFront on empty list returns false
{
	LinkedListOfInts list;

	if (!list.removeFront()) return true;
	else return false;
}

bool Test::test20() //tests removeBack on empty list returns false
{
	LinkedListOfInts list;

	if (!list.removeBack()) return true;
	else return false;
}

bool Test::test21() //checks if removeFront fn is working
{
	LinkedListOfInts list;
	list.addFront(10);

	if (list.removeFront()) return true;
	else return false;
}

bool Test::test22() //checks if removeBack fn is working
{
	LinkedListOfInts list;
	list.addFront(10);

	if (list.removeBack()) return true;
	else return false;
}


bool Test::test23() //tries to remove an element from the list with removeFront
{
	LinkedListOfInts list;
	list.addFront(1);
	list.addFront(2);
	list.removeFront();
	if (!list.search(2)) return true;
	else return false;
}

bool Test::test24() //tries to remove an element from the list with removeBack
{
	LinkedListOfInts list;
	list.addFront(1);
	list.addFront(2);
	list.removeBack();
	if (!list.search(1)) return true;
	else return false;

}bool Test::test25() //tries to remove beyond empty list with removeFront
{
	LinkedListOfInts list;
	list.addFront(1);
	list.removeBack();
	if (!list.removeBack()) return true;
	else return false;
}

bool Test::test26() //tries to remove beyond empty list with removeBack
{
	LinkedListOfInts list;
	list.addFront(1);
	list.removeBack();
	if (!list.removeBack()) return true;
	else return false;
}


//SEARCH TESTS
bool Test::test27() //checks if search returns false when empty
{
	LinkedListOfInts list;

	if (!list.search(1)) return true;
	else return false;
}

bool Test::test28() //checks if search returns false when not in list
{
	LinkedListOfInts list;
	list.addFront(10);

	if (!list.search(20)) return true;
	else return false;
}

bool Test::test29() //tests search and returns true if found
{
	LinkedListOfInts list;

	for (int i = 0; i < 20; i++)
	{
		list.addBack(10*(i+1));
	}

	if (list.search(10)) return true;
	else return false;
}
