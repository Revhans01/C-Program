#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	float bilangan_1, bilangan_2, hasil;
	string jenis_operator;
	string menu;

	main:
	cout << "\n+-----------------------------\n";
	cout << "| KALKULATOR KU\n";
	cout << "+-----------------------------\n";
	cout << "| {!} JENIS OPERATOR\n";
	cout << "| {1} PERTAMBAHAN\n";
	cout << "| {2} PENGURANGAN\n";
	cout << "| {3} PEMBAGIAN\n";
	cout << "| {4} PERKALIAN\n";
	cout << "+-----------------------------\n";
	cout << "| BILANGAN PERTAMA  = ";
	cin >> bilangan_1;
	jenis_operator:
	cout << "| JENIS OPERATOR    = " ;
	cin >> jenis_operator;
	while(true){
		if (jenis_operator == "1"){
			cout << "| BILANGAN KEDUA    = ";
			cin >> bilangan_2;
			cout << "+-----------------------------\n";
			hasil = bilangan_1 + bilangan_2;
			cout << "| HASIL " << bilangan_1 << " + " << bilangan_2 << "   = " << hasil << endl;
			cout << "+-----------------------------\n\n";
			cout << "+-----------------------------\n";
			cout << "| {1} COBA LAGI KALKULATOR\n";
			cout << "| {0} STOP PROGRAM\n";
			cout << "+-----------------------------\n";
			nanya:
			cout << "| MAU PILIH YANGA MANA = ";
			cin >> menu;
			cout << "+-----------------------------\n";
			while(true){
				if (menu == "1"){
					goto main;
				}
				else if (menu == "0"){
					cout << "| TERIMAKASIH :)\n";
					cout << "+-----------------------------\n";
					break;
				}
				else {
					goto nanya;
				}
			}
			break;
		}
		if (jenis_operator == "2"){
			cout << "| BILANGAN KEDUA    = ";
			cin >> bilangan_2;
			cout << "+-----------------------------\n";
			hasil = bilangan_1 - bilangan_2;
			cout << "| HASIL " << bilangan_1 << " - " << bilangan_2 << "   = " << hasil << endl;
			cout << "+-----------------------------\n\n";
			cout << "+-----------------------------\n";
			cout << "| {1} COBA LAGI KALKULATOR\n";
			cout << "| {0} STOP PROGRAM\n";
			cout << "+-----------------------------\n";
			nanya2:
			cout << "| MAU PILIH YANGA MANA = ";
			cin >> menu;
			cout << "+-----------------------------\n";
			while(true){
				if (menu == "1"){
					goto main;
				}
				else if (menu == "0"){
					cout << "| TERIMAKASIH :)\n";
					cout << "+-----------------------------\n";
					break;
				}
				else {
					goto nanya2;
				}
			}
			break;
		}
		if (jenis_operator == "3"){
			cout << "| BILANGAN KEDUA    = ";
			cin >> bilangan_2;
			cout << "+-----------------------------\n";
			hasil = bilangan_1 / bilangan_2;
			cout << "| HASIL " << bilangan_1 << " : " << bilangan_2 << "   = " << hasil << endl;
			cout << "+-----------------------------\n\n";
			cout << "+-----------------------------\n";
			cout << "| {1} COBA LAGI KALKULATOR\n";
			cout << "| {0} STOP PROGRAM\n";
			cout << "+-----------------------------\n";
			nanya3:
			cout << "| MAU PILIH YANGA MANA = ";
			cin >> menu;
			cout << "+-----------------------------\n";
			while(true){
				if (menu == "1"){
					goto main;
				}
				else if (menu == "0"){
					cout << "| TERIMAKASIH :)\n";
					cout << "+-----------------------------\n";
					break;
				}
				else {
					goto nanya3;
				}
			}
			break;
		}
		if (jenis_operator == "4"){
			cout << "| BILANGAN KEDUA    = ";
			cin >> bilangan_2;
			cout << "+-----------------------------\n";
			hasil = bilangan_1 * bilangan_2;
			cout << "| HASIL " << bilangan_1 << " X " << bilangan_2 << "   = " << hasil << endl;
			cout << "+-----------------------------\n\n";
			cout << "+-----------------------------\n";
			cout << "| {1} COBA LAGI KALKULATOR\n";
			cout << "| {0} STOP PROGRAM\n";
			cout << "+-----------------------------\n";
			nanya4:
			cout << "| MAU PILIH YANGA MANA = ";
			cin >> menu;
			cout << "+-----------------------------\n";
			while(true){
				if (menu == "1"){
					goto main;
				}
				else if (menu == "0"){
					cout << "| TERIMAKASIH :)\n";
					cout << "+-----------------------------\n";
					break;
				}
				else {
					goto nanya4;
				}
			}
			break;
		}
		else {
			goto jenis_operator;
		}
	}

	getch();
	return 0;

}
