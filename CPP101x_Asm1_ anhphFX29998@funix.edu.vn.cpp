// CPP101x_Asm1_ anhphFX29998@funix.edu.vn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//cau 1
	cout << "Enter: day,month,year: ";
	int iHour, iMinute, iDay, iMonth, iYear;//bien de nhap thoi gian "input time"
	int oHour, oMinute, oDay, oMonth, oYear;//bien de xuat thoi gian "output time"
	cin >> iDay >> iMonth >> iYear;

	switch (iMonth)
		{
		case 1:	if (iDay >= 1 && iDay <= 31) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			  else { cout << "wrong information";exit(0); };
		break;
		//check nam nhuan o thang 2
		case 2: if (iYear % 4 == 0 && iYear % 100 != 0) {
			if(iDay >= 1 && iDay <= 29 ) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			else { cout << "wrong information";exit(0); }
			    }
			    
			  else if (iYear % 4 == 0 && iYear % 400 == 0) {
				  if (iDay >= 1 && iDay <= 29 ) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
				  else { cout << "wrong information";exit(0); }
			   }

			  else {if (iDay >= 1 && iDay <= 28) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
					else { cout << "wrong information";exit(0); }
					};
			  break;

		case 3:	if (iDay >= 1 && iDay <= 31) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			  else { cout << "wrong information";exit(0); };
			  break;
		case 4:	if (iDay >= 1 && iDay <= 30) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			  else { cout << "wrong information";exit(0); };
			  break;
		case 5:	if (iDay >= 1 && iDay <= 31) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			  else { cout << "wrong information";exit(0); };
			  break;
		case 6:	if (iDay >= 1 && iDay <= 30) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			  else { cout << "wrong information";exit(0); };
			  break;
		case 7:	if (iDay >= 1 && iDay <= 31) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			  else { cout << "wrong information";exit(0); };
			  break;
		case 8:	if (iDay >= 1 && iDay <= 31) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			  else { cout << "wrong information";exit(0); };
			  break;
		case 9:	if (iDay >= 1 && iDay <= 30) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			  else { cout << "wrong information";exit(0); };
			  break;
		case 10:if (iDay >= 1 && iDay <= 31) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			   else { cout << "wrong information";exit(0); };
			  break;
		case 11:if (iDay >= 1 && iDay <= 30) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			   else { cout << "wrong information";exit(0); };
			  break;
		case 12:if (iDay >= 1 && iDay <= 31) { oDay = iDay; oMonth = iMonth;oYear = iYear; }
			   else { cout << "wrong information";exit(0); };
			  break;
		default: cout << "wrong information";exit(0);
		}

	cout << " Enter time: ";
	cin >> iHour >> iMinute;
	if (iHour >= 0 && iHour <= 23) {
		if (iMinute >= 0 && iMinute <= 59) { oHour = iHour;oMinute = iMinute; }
		else { cout << "wrong information";exit(0); }
	}
	else { cout << "wrong information";exit(0); }

	//cau 2
	cout << oHour << "g:" << oMinute << "p, Ngay " << oDay << ", Thang " << oMonth << ", " << oYear << endl;

	//cau 3
	
	int tType; // tao bien 12 gio
	cout << "Press 1 is 12hour and if not 1 will be 24hour" << endl;
	cout << "Enter time type: ";
	cin >> tType;
		
	if (tType == 1) {
		if (oHour < 12) {
			cout << oHour << "g:" << oMinute << "p AM, Ngay " << oDay << ", Thang " << oMonth << ", " << oYear << endl;
		}
		else if (oHour == 12) {
			cout << oHour << "g:" << oMinute << "p PM, Ngay " << oDay << ", Thang " << oMonth << ", " << oYear << endl;
		}
		else { cout << oHour-12 << "g:" << oMinute << "p PM, Ngay " << oDay << ", Thang " << oMonth << ", " << oYear << endl; }
	}
	else { cout << oHour << "g:" << oMinute << "p, Ngay " << oDay << ", Thang " << oMonth << ", " << oYear << endl; }
	
	int tZone;// tao bien mui gio
	int nTime;// tao bien gio sau chuyen doi
	cout << " Press time zone you want: ";
		cin >> tZone;
		nTime = oHour + tZone;

	if (tType == 1) {
		if (tZone >= -12 && tZone <= 12) {
			
			if (nTime == -12) { cout << 12 << "g:" << oMinute << "p PM"; }
			else if (nTime > -12 && nTime < 0) { cout << 12 + nTime << "g:" << oMinute << "p PM"; }
			else if (nTime >= 0 && nTime <= 12) { cout << 12 + nTime << "g:" << oMinute << "p AM"; }
			else if (nTime > 12 && nTime <= 24) {cout << nTime -12 << "g:" << oMinute << "p PM";}
			else { cout << nTime - 24 << "g:" << oMinute << "p AM"; }
		}
		else { cout << "wrong information";exit(0); }
	}
	else {
		if (tZone >= -12 && tZone <= 12) {
			
			if (nTime < 0) { cout << 24 + nTime << "g:" << oMinute << "p"; }
			else if (nTime >= 0 && nTime < 24) { cout << 12 + nTime << "g:" << oMinute << "p "; }
			else { cout << nTime - 24 << "g:" << oMinute << "p AM"; }
		}
		else { cout << "wrong information";exit(0); }
	}
} 
