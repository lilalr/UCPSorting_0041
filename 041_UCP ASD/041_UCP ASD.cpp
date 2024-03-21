#include <iostream>
using namespace std;

// 1. Bubble sort membandingkan elemen-elemen per langkah dengan cara membandingkan elemen
//	  pada index 0 dan index 2, terus di tukar kalau tidak sesuai atau tidak urut. Element
//	  yang paling besar itu pasti terletak di index 4 didalam langkah pertama. Kemudian lanjut
//	  lagi ke langkah 2 dan lakukan cara yang sama sampai ke langkah terakhir. Caranya sama dg 
//	  diulang sampai elemen yang ada di index 0,1,2,3,4 berurutan.



// 2. Shell sort cara membandingkan elemennya dg cara membagi 3 sublist dan memasukkan index
//	  nya berjarak 3 angka, kemudian dijadikan satu lagi sesuai index yg didapat, trs dibagi 2 lagi
//	  dan indexnya berjarak 2 angka misalnya 1,3,5,7,9. Terakhir di jadiin satu atau dimasukkan
//	  lagi sesuai index dan urut.



// 3. Algoritma yang dipilih yaitu algoritma insertion sort, karena lebih cocok
//	  metode nya, yaitu dengan cara menyisipkan elemen data ke posisi yang tepat.



// 4. Konvesi algoritma

int lila[41];
int i, n, j, temp;

void input() {				
	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";				
		cin >> n;			
		if (n <= 20)		
			break;			
		else {				
			cout << "\rArray dapat mempunyai maksimal 20 elemen.\n";	
		}
	}
	cout << endl;								
	cout << "=====================" << endl;	
	cout << "Masukan Elemen Array" << endl;		
	cout << "=====================" << endl;	

	for (int i = 0; i < n; i++) {				
		cout << "Data ke-" << (i + 1) << ": ";	
		cin >> lila[i];							
	}
}

void SelectionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {

		temp = lila[i];

		j = i - 1;

		while (j >= 0 && lila[j] > temp)
		{
			lila[j + 1] = lila[j];
			j--;
		}
		lila[j + 1] = temp;
	}
}

void display() {
	cout << endl;
	cout << "================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << lila[j];
		if (j < n - 1) {
			cout << " --> ";

		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
	input();
	SelectionSort();
	display();
	system("pause");

	return 0;
}