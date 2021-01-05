#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double loan=0,inter=0,pay=0,newbalance,total,tax;	
	int i=1;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>inter;
	cout << "Enter amount you can pay per year: ";
	cin>>pay;
    newbalance=loan;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	do
	{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	loan=newbalance;
	cout << setw(13) << left << loan;
	tax=loan*inter/100;
	cout << setw(13) << left << tax;
	total=loan+tax;
	cout << setw(13) << left << total;
	if(total<=pay)
	{
		pay=total;
	}
	cout << setw(13) << left << pay;
    newbalance=total-pay;
	cout << setw(13) << left << newbalance;
	cout << "\n";
	i++;
	}while ((int)newbalance!=0);
	return 0;
}
