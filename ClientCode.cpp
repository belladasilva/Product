#include "product.h"

using namespace std;

// Isabella Da Silva
// COMP333 - Assignment #2 Inheritance

/*Use the following main() for your assignment.
This code will replace your main()
Do not make any changes to existing code!
You will need to add the required header files and deallocate memory.
You will need to call the polymorphic functions where requested.
Add your name and a short narrative explaining the purpose of the program.
//Write the code for the polymorphic function. Label all output. Add a comment statement clearly
identifying the polymorphic function.
NOTE: I changed to parameter order for both derived classes to match the UML
Revised Sun Dec 10, 2017
*/


int main()
{
	// do not change my main except where you call the polymorphic function as indicated below

	cout << "1a) Create dynamic Product (non default): " << endl;
	Product* phone = new Product(90, "Android cell");
	assert(phone);
	cout << "Name= " << phone->getProductName() << endl;
	cout << "Bar code=" << phone->getBarCode() << endl << endl;
	phone->show(std::cout);
	cout << "Call polymorphic function:\n ";
	phone->scanner(); // polymorphic function

	cout << endl << endl;
	delete phone;


	cout << "1b) Create dynamic Product (default): " << endl;
	Product* item = new Product;
	assert(item);
	cout << "Name= " << item->getProductName() << endl;
	cout << "Bar code=" << item->getBarCode() << endl << endl;
	item->show(cout);
	cout << "Call polymorphic function:\n ";
	item->scanner(); // polymorphic function


	cout << endl << endl;
	delete item;


	cout << "2a) Create dynamic PrePackedFood (non default): " << endl;
	PrePackedFood* pasta = new PrePackedFood(40, "spaghetti", -.67);
	assert(pasta);
	cout << "Name= " << pasta->getProductName() << endl;
	cout << "Bar code=" << pasta->getBarCode() << endl << endl;
	cout << "Unit Price=" << pasta->getUnitPrice() << endl << endl;
	pasta->show(cout);
	cout << "Call polymorphic function:\n ";
	pasta->scanner(); //polymorphic function

	cout << endl << endl;
	delete pasta;


	cout << "2b) Create dynamic Prepacked (default): " << endl;
	PrePackedFood* food = new PrePackedFood;
	assert(food);
	cout << "Name= " << food->getProductName() << endl;
	cout << "Bar code=" << food->getBarCode() << endl << endl;
	cout << "Unit Price=" << food->getUnitPrice() << endl << endl;
	food->show(cout);
	cout << "Call polymorphic function:\n ";
	food->scanner();  //polymorphic function

	cout << endl << endl;
	delete food;


	cout << "3a) Create dynamic FreshFood (non default): " << endl;
	FreshFood* apples = new FreshFood(-6, "Delicious", 1.1, .67);
	assert(apples);
	cout << "Name= " << apples->getProductName() << endl;
	cout << "Bar code=" << apples->getBarCode() << endl << endl;
	cout << "Weight=" << apples->getWeight() << endl << endl;
	cout << "Price=" << apples->getUnitPrice() << endl << endl;
	apples->show(cout);
	cout << "Call polymorphic function:\n ";
	apples->scanner(); //polymorphic function


	cout << endl << endl;
	delete apples;


	cout << "3b) Create dynamic FreshFood (default): " << endl;
	FreshFood* freshPtr = new FreshFood;
	assert(freshPtr);
	cout << "Name= " << freshPtr->getProductName() << endl;
	cout << "Bar code=" << freshPtr->getBarCode() << endl << endl;
	cout << "Weight=" << freshPtr->getWeight() << endl << endl;
	cout << "Price=" << freshPtr->getUnitPrice() << endl << endl;
	freshPtr->show(cout);
	cout << "Call polymorphic function:\n ";
	freshPtr->scanner(); //polymorphic function

	cout << endl << endl;
	delete freshPtr;

	system("pause");
}


// OUTPUT

/*1a) Create dynamic Product (non default):
Name= Android cell
Bar code=90

bar code: 90product name: Android cell
Call polymorphic function:


1b) Create dynamic Product (default):
What is the bar code? 22222
What is the name of the product? rrrr
Name= rrrr
Bar code=22222

bar code: 22222product name: rrrr
Call polymorphic function:
 

2a) Create dynamic PrePackedFood (non default):
Name= spaghetti
Bar code=40

Unit Price=0

bar code: 40product name: spaghetti
unit price: 0
Call polymorphic function:



2b) Create dynamic Prepacked (default):
What is the bar code? 44444
What is the name of the product? rrrrr
What is the bar code? 33333
What is the name of the product? rrrr
What is the price of the unit? 2
Name= rrrr
Bar code=33333

Unit Price=2

bar code: 33333product name: rrrr
unit price: 2
Call polymorphic function:
 Discounted!

3a) Create dynamic FreshFood (non default):
Name= Delicious
Bar code=0

Weight=0.67

Price=1.1

bar code: 0product name: Delicious
unit price: 1.1weight: 0.67
Call polymorphic function:
 Discounted!


3b) Create dynamic FreshFood (default):
What is the bar code? 2222
What is the name of the product? rrrr
What is the bar code? 11111
What is the name of the product? ffff
What is the price of the unit? 1
What is the weight? 4
Name= ffff
Bar code=11111

Weight=4

Price=1

bar code: 11111product name: ffff
unit price: 1weight: 4
Call polymorphic function:


Press any key to continue . . .*/
