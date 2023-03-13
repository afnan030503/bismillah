#include <iostream>
using namespace std;

int main()
{//begin
//numeric bill
int bill;
//character status
string status;
//display "masukkan bilangan = "
cout << "masukkan bilangan = ";
cin >> bill;
if(bill == 0)
//status = "0"
status = "nol1";
//else if (bil % 2 == 0)
else if (bill % 2 == 0)
//status = "genap"
status = "genap";
//else
else
//status = "ganjil"
status = "ganjil";
//display "bilanganya = " + status
cout << "bilanganya = " << status;

}//end