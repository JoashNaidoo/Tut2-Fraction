#include<iostream>
using namespace std;

class Fraction{

public:

	int n, d;
	int num, dem;

	void setValue(){
		cout << "Enter the numerator" << endl;
		cin >> n;

		cout << "Enter the denominator" << endl;
		cin >> d;
	}

	void add(Fraction a, Fraction b)
	{
		num = (a.n*b.d) + (b.n*a.d);
		dem = (a.d*b.d);
	}

	void sub(Fraction a, Fraction b)
	{
		num = (a.n*b.d) - (b.n*a.d);
		dem = (a.d*b.d);
	}

	void multi(Fraction a, Fraction b)
	{
		num = (a.n)*(b.n);
		dem = (a.d)*(b.d);
	}

	void div(Fraction a, Fraction b)
	{
		num = (a.n)*(b.d);
		dem = (a.d)*(b.n);
	}

	void print()
	{
		for (int i = 2; i <= 100000; i++)
		{
			if (num % i == 0 && dem % i == 0)
			{
				num = (num / i);
				dem = (dem / i);
			}

			else
			{
				num = num;
				dem = dem;
			}
		}
		cout << num << "/" << dem << endl;
	}
};

int main()
{
	Fraction f1;
	Fraction f2;
	Fraction f3;
	Fraction f4;
	Fraction f5;
	Fraction f6;

	cout << "Enter the Fraction 1" << endl;
	cout << endl;
	f1.setValue();

	cout << endl;

	cout << "Enter the Fraction 2" << endl;
	cout << endl;
	f2.setValue();

	f3.add(f1, f2);
	f4.sub(f1, f2);
	f5.multi(f1, f2);
	f6.div(f1, f2);

	cout << endl;

	cout << "Addition = ";
	f3.print();

	cout << endl;

	cout << "Subraction = ";
	f4.print();

	cout << endl;

	cout << "Mulitiplication = ";
	f5.print();

	cout << endl;

	cout << "Division = ";
	f6.print();

	cout << endl;

	return 0;
}