#include "../domain/provider/operators_overload.h"

int main() 
{
	try
	{
		Point point1;
		Point point2;
		cin >> point1;
		cin >> point2;
		cout << point1;
		cout << point2;
	}
	catch (const char* msg) //ловить throw
	{
		cout << msg << endl;
	}

	return 0;
}