#include <iostream>

using namespace std;

class BirthDate
{
	private:
		//private fields
		int year = 0;
		int month = 0;
		int day = 0;
	public:
		//Print function for BirthDate objects
		void print(){
			cout << month << "/" << day << "/" << year;
		}
		//Combination Setter
		void set(int d, int m, int y)
		{
			year = y;
			day = d;
			month = m;
		}
		//Individual Setters
		void setYear(int y)
		{
			year = y;
		}
		void setMonth(int m)
		{
			month = m;
		}
		void setDay(int d)
		{
			day = d;
		}
		//Individual Getters
		int getYear()
		{
			return year;
		}
		int getMonth()
		{
			return month;
		}
		int getDay()
		{
			return day;
		}

};

int main()
{
	//Create two BirthDate objects
	BirthDate bob;
	BirthDate tom;

	//No longer used because of private access modifier
	int d, y, m;
	//Ask user for birthday's day
	cout << "Enter bob's birthday's day: ";
	cin >> d; 
	bob.setDay(d);

	//Ask for year
	cout << "Enter bobs birthday year: ";
	cin >> y; 
	bob.setYear(y);

	//Ask for month
	cout << "Enter bobs birthday month: ";
	cin >> m; 
	bob.setMonth(m);



	//Should be user entered birthday
	bob.print();
	cout << endl;
	//Toms birthday should be 0
	tom.print();




	return 0;
}
