#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// variable block
	float totalfarm;
	string veg1;
	float veg1_acre;
	float veg1_cost;
	float veg1_total;
	string veg2;
	float veg2_acre;
	float veg2_cost;
	float veg2_total;
	float total_cost;

	cout << "Please enter total number of acres: ";
	cin >> totalfarm;
	cout << "Please enter name of first vegetable: ";
	cin >> veg1;
	cout << "Please enter amount of " << veg1 << " planted in acres: ";
	cin >> veg1_acre;
	cout << "Please enter the cost of " << veg1 << " seeds per acre: ";
	cin >> veg1_cost;
	cout << "Please enter name of second vegetable: ";
	cin >> veg2;
	cout << "Please enter cost of " << veg2 << " seeds per acre :";
	cin >> veg2_cost;

	veg2_acre = totalfarm - veg1_acre;
	veg1_total = veg1_acre * veg1_cost;
	veg2_total = veg2_acre * veg2_cost;
	total_cost = veg1_total + veg2_total;

	cout << endl;
	cout << endl;
	cout << "Vegetable:          Cost of seeds:          Acres planted:          Total cost:" << endl;
	cout << "          " << veg1 << "                    " << veg1_cost << "                    " << veg1_acre << "                   " << veg1_total << endl;
	cout << "          " << veg2 << "                    " << veg2_cost << "                    " << veg2_acre << "                   " << veg2_total << endl;
	cout << "                                                                            " << total_cost;

	return 0;
}
