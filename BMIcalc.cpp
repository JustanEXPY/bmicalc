#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{

	string sex, actsex1 = "F", actsex2 = "M"; // пол
	float height, weight; // Рост и вес

			cout << "Enter your sex F or M" << endl;
		cin >> sex;

					if ( sex == actsex1) {
					cout << "Plese Enter your height in m" << endl;
					cin >> height;
					cout << "Please enter your weight in kg" << endl;
					cin >> weight;
					cout << "Your BMI is:";
					cout << weight / (height * height);
					return 0;
					}
					else if (sex == actsex2) {
					cout << "Plese Enter your height in cm" << endl;
						cin >> height;
						cout << "Please enter your weight in kg" << endl;
						cin >> weight;
						cout << "Your BMI is:";
						cout << weight / (height * height);
						return 0;
					} else {
						cout << "Ha Ha Ha isn`t funny";
					}
					
}