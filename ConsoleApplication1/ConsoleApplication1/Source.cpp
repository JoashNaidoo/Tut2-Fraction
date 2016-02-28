//213502827 Sheridan Joash Naidoo

#include<iostream>

using namespace std;

class Fraction
{
public:
	int a, b, x, rem;

	Fraction(int num, int denom)
	{
		getNumDenom(num, denom);
	}

	void getNumDenom(int num, int denom)
	{
		a = num;
		b = denom;
	}

	int add()
	{
		return(a + b);
	}

	int subtract()
	{
		return(a - b);
	}

	int multiply()
	{
		return(a*b);
	}

	int divide()
	{
		return(a / b);
	}

	void print()
	{
		x = a / b;
		rem = a%b;

		cout << "Mixed fracrion is: " << x << " and " << rem << " over " << b << "\n" << endl;
	}
private:


};

int main()
{
	int num;
	int den;

	cout << "Enter Numerator" << endl;
	cin >> num;

	cout << "Enter Dumerator" << endl;
	cin >> den;

	Fraction value(num, den);

	cout << "Addition--->" << value.add() << "\nDivide--->" << value.divide() << "\nMulitple--->" << value.multiply() << "\nSubstract--->" << value.subtract() << endl;
	value.print();
}

