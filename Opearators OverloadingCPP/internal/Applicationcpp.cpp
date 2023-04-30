#include "../domain/provider/operators_overload.h"

int main() 
{
	//Point p1(12, 14);
	//cout << "p1 = "; p1.print();
	//Point p2(0, 7);
	//cout << "p2 = "; p2.print();
	//Point p3 = p1 / p2;
	//cout << "p3 = "; p3.print();

	try
	{
		Point p1(12, 14);
		Point temp = ++p1;
		cout << "temp = "; temp.print();
		cout << "p1 = "; p1.print();


		//Point p2(0, 0);
		//cout << "p2 = "; ++p2.print();
		//Point p3 = p1 / p2;
		//cout << "p3 = "; p3.print();
	}
	catch (const char* msg) //ловить throw
	{
		cout << msg << endl;
	}

	return 0;
}