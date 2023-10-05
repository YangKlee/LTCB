#include <iostream>
#include <conio.h> // dùng _getch()
using namespace std;
void lengthConverter(){
cout << "1. Inch -> cm" << endl;
cout << "2. Foot -> dm" << endl;
cout << "3. Yard -> m" << endl; 
cout << "4. Mile -> km" << endl;
cout << "5. Home" << endl;
cout << "Chon don vi do chieu dai: ";
int choice;
cin >> choice;
switch (choice) {
 case 1: // Goi ham de chuyen doi tu Inch sang cm            
 cout << "Chuyen doi tu Inch sang cm" << endl; 
 break; 
 case 2: // Goi ham de chuyen doi tu Foot sang dm            
 cout << "Chuyen doi tu Foot sang dm" << endl;
  break;
   case 3:
    // Goi ham de chuyen doi tu Yard sang m            
	cout << "Chuyen doi tu Yard sang m" << endl;
	 break;
	  case 4: // Goi ham de chuyen doi tu Mile sang km            
	  cout << "Chuyen doi tu Mile sang km" << endl;
	   break;
	    case 5: // Quay lai menu chinh            
		break; 
		default: 
	  cout << "Lua chon khong hop le!" << endl;
	  break; 
	  }
	  }
void weightConverter(){
cout << "1. Ounce -> gr" << endl;
cout << "2. Pound -> kg" << endl;
cout << "3. Ton -> tan" << endl;
cout << "4. Home" << endl;
cout << "Chon don vi do khoi luong: ";
int choice;
cin >> choice;
switch (choice) {
case 1: //Goi ham de chuyen doi tu Ounce sang gr            
cout << "Chuyen doi tu Ounce sang gr" << endl;
 break;
  case 2:
   // Goi ham de chuyen doi tu sang kg           
 cout << "Chuyen doi tu Pound sang kg" << endl;
  break;
   case 3: // Goi ham de chuyen doi tu Ton sang tan            
 cout << "Chuyen doi tu Ton sang t?n" << endl; 
 break;
 case 4: // Quay lai menu chinh            
 break; 
 default: cout << "Lua chon khong hop le!" << endl; 
 break; 
 }
 }
void temperatureConverter(){
cout << "1. Fahrenheit (°F) -> Celsius (°C)" << endl;
cout << "2. Kelvin (K) -> Celsius (°C)" << endl;
cout << "3. Home" << endl;
cout << "Chon don vi do nhiet do: ";
int choice;
cin >> choice;
 switch (choice) {
case 1: // Goi ham de chuyen doi tu Fahrenheit sang Celsius            
cout << "Chuyen doi tu Fahrenheit sang Celsius" << endl; 
break; 
case 2: // Goi ham de chuyen doi tu Kelvin sang Celsius            
cout << "Chuyen doi tu Kelvin sang Celsius" << endl; break; case 3: // Quay l?i menu chính            
break; 
default: cout << "Lua chon khong hop le!" << endl; break; }}
int main(){
 while (true) {
cout << "1. Doi don vi do chieu dai" << endl;
cout << "2. Doi don vi do khoi luong" << endl;
cout << "3. Doi don vi do nhiet do" << endl;
cout << "4. Thoat" << endl;
cout << "Chon mot chuc nang: ";
int choice;
cin >> choice;
switch (choice) { 
case 1: lengthConverter();
 break; 
 case 2: weightConverter();
  break;
  case 3: temperatureConverter();
  break;
 case 4: 
 exit(0);
 default: cout << "Lua chon khong hop le!" << endl;
  break;
 }
 }
  return 0;
 }
