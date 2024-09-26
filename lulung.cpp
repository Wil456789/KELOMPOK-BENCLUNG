#include <iostream>
using namespace std;

int main (){
int i,N,jumlah=0;
N=0;

cout << "masukan banyak nilai :";
cin >> i;
jumlah = jumlah+i;
if (i%2 ==0) {
	cout << i << " - ";
	i=i-2;
}
while (i>N) {
	if (i%2 ==0) {
		cout << i << " - ";
		jumlah = jumlah - (i);
		i;
	}
	i--;
}
jumlah = jumlah - (i);
cout << i << " ";
cout << " = " << jumlah << endl;
}
