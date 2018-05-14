#include"COMPLEX.h"



int main()
{
	char ln;
	do
	
	{
		Complex complex;
		Complex a, b;

		cin >> a;
		cin >> b;

		complex.menu();
		complex.EnterOperation(a, b);
		cout << "Next or end?";
		cin >> ln;

	} while (ln != 'end');
	

	return 0;
}
