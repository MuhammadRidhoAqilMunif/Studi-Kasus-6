#include <iostream>
using namespace std;

class nilai {
	public:
		void garis(int b){
			for(int i=1; i<=b; i++){
				cout << "=";
			}
		}
		void input();
		void proses();
		void output();
	private:
		int smt, total=0, i, min, maks;
		string nmDosen, nmMatkul;
		double rata;
};

void nilai::input(){
	cout << "PROGRAM INPUT NILAI" << endl;
	garis(50);
	cout << "\nMasukkan Nama Dosen : "; cin >> nmDosen;
	cout << "Masukkan Mata Kuliah : "; cin >> nmMatkul;
	cout << "Masukkan jumlah semester : "; cin >> smt;
	int nilai[smt];
	for(int i = 0; i < smt; i++){
		cout << "Nilai Semester " << i + 1 << " : ";
		cin >> nilai[i];
		total += total + nilai[i];
	}
	garis(50);
	cout << endl;
}

void nilai::proses(){
	int nilai[i];
	double maks = nilai[i];
	double min = nilai[i];
	for (int i = 0; i<smt ; i++){
		if (nilai[i] > maks){
			maks = nilai[i];
		}
		else if (nilai[i] < min){
			min = nilai[i];
		}
	}	
	cout << "Nilai Minimal     : " << min;
	cout << "Nilai Maksimal    : " << maks;
	rata = total / smt;
	cout << "Rata - Rata Nilai : " << rata;
	garis(50);
	cout << "\n\n";
}

void nilai::output(){
	cout << "NILAI PER SEMESTER" << endl;
	garis(50);
	cout << "\nMata Kuliah : " << nmMatkul;
	cout << "Dosen       : " << nmDosen;
	cout << "Daftar Nilai " << endl;
	int nilai[smt];
	for (int j = 0; j < smt; j++){
		cout << "Semester " << j + 1 << " : " << nilai[j] << endl;
	} 
	cout << endl;
	cout << "Nilai Minimal     : " << min;
	cout << "Nilai Maksimal    : " << maks;
	cout << "Rata - Rata Nilai : " << rata;
}

int main(){
	nilai n;
	
	n.input();
	n.proses();
	n.output();
	return 0;
}
