//Tora King
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
 //Asking for file name input
    string fileName;
cout << "Enter file name: " << endl;
cin >> fileName;

ifstream inData;

//Took input fileName and use that to find the test file
inData.open(fileName);

string firstName, lastName;
double baseSalary, comissionPercent;
double totalSales;
double expense;
double total;
double totalComission;

//Took data from selected file
cout << setprecision(2) << fixed;
inData >> firstName >> lastName >> baseSalary >> comissionPercent >> totalSales >> expense;

totalComission = (comissionPercent * totalSales) / 100;
total = totalComission + expense + baseSalary;

//Created output for information in file
cout << "Payroll data for " << firstName << " " << lastName << endl;
cout << endl;
cout << "Base Salary:  " << baseSalary << endl;
cout << "Comission:     " << totalComission << " (" << comissionPercent << "% " << "of " << totalSales << ")" << endl;
cout << "Expense:       " << expense << endl;
cout << "     ------------------" << endl;
cout << "Total:        " << total << endl;

inData.close();

return 0;
}
