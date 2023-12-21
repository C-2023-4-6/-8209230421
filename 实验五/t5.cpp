#include<iostream>
using namespace std;
class point
{
private:
	double x;
	double y;
public:

	point(double x = 60, double y = 80)
	{
		this->x = x;
		this->y = y;
	};

	void setpoint(int i, int j)
	{

		x = x + i;
		y = y + j;




	}

	void display()
	{
		cout << x << "," << y << endl;


	}






};









int main()
{
	int i;
	int j;
	cin >> i;
	cin >> j;
	point a;
	a.display();
	a.setpoint(i, j);
	a.display();



}