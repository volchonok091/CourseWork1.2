#include "Vehicle.h"
/*constructor*/
Vehicle::Vehicle() {
	newHp = new int;;
	Infostr = new string;
	newMark = new string;
	newModel = new string;
	newYear = new int;
	newPrice = new int;
}	
/*distructor*/
	Vehicle::~Vehicle(){
		delete[]newHp, newMark, newModel, newPrice, newYear,  Infostr;
	}
	/*set of setters to input value*/
	void Vehicle::setMark(string Mark) {
		*newMark = Mark;
	}
	void Vehicle::setModel(string Model) {
		*newModel = Model;
	}
	void Vehicle::setYear(int Year) {
		*newYear = Year;
	}
	void Vehicle::setHP(int val) {
		*newHp = val;
	}
	void Vehicle::setPrice(int Price) {
		*newPrice = Price;
	}
	void Vehicle::setInfo()
	{
		cout << "sMT WRONG" << endl;
	}

	/*set of getterrs to get value*/
	void Vehicle::getMark() {
		cout << "MArk:" << *newMark << endl;;
	}
	void Vehicle::getModel() {
		cout << "Model:" << *newModel << endl;
	}
	void Vehicle::getYear() {
		cout << "Year:" << *newYear << endl;
	}
	void  Vehicle::getHP() {
		cout << "HP:" << *newHp << endl;
	}
	void Vehicle::getPrice() {
		cout << "Price:" << *newPrice << endl;
	}
	void Vehicle::GetInfo() {
		cout << "Additional info: " << *Infostr << endl;
	}


	ostream& operator<<(ostream& Cout, vector<Vehicle>& VehicleList)

{
	unsigned int size = VehicleList.size();

	for (unsigned int i = 0; i < size; i++)
	{
		cout << "Car number " << i + 1 << ": " << endl;
		VehicleList[i].getMark();
		VehicleList[i].getModel();
		VehicleList[i].getYear();
		VehicleList[i].getHP();
		VehicleList[i].getPrice();
		VehicleList[i].GetInfo();
		cout << "=============" << endl;
	}
	return Cout;
	istream& operator>>(istream& cin, Vehicle *carname) {
		string val;
		int valI;
		cout << "input Mark" << endl;
		cin >> val;
		carname->setMark(val);
		cout << "input Model" << endl;
		cin >> val;
		carname->setModel(val);
		cout << "input HP amount" << endl;
		cin >> valI;
		carname->setHP(valI);
		cout << "input Year" << endl;
		cin >> valI;
		carname->setYear(valI);
		cout << "input Price" << endl;
		cin >> valI;
		carname->setPrice(valI);
		carname->setInfo();
		return cin;
	}

