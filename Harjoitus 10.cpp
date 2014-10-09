/*Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten
että negatiivisten kokonaislukujen osuuden.Lukujen syöttä lopetetaan
syöttämällä luku 0.

Tulostus:
Syötit kokonaislukuja seuraavasti :
----------------------------------
Negatiiviset 7 kpl 70.00%
Positiiviset 3 kpl 30.00%
Yhteensä 10 kpl 100.00%*/
//*******************
//Tapio Pekkarinen
//Harjoitus 10
//9.10.2014
//versio 1.0
#include <iostream>
using namespace std;
int main()
{
	
	int luku;
	double neg = 0;
	double pos = 0;
	cout << "Anna lukuja";
	while (1)
	{
		cin >> luku;	
		if (luku == 0)
			break;
		if (luku < 0)//tosi
		neg++;
			
		if (luku > 0)
			pos++;
	}

	 
	cout << "Syötit kokonaislukuja seuraavasti: " << endl;
	cout << "----------------------------------" << endl;
	cout << "Negatiiviset " << neg << " kpl " <<  neg*100/(neg+pos) << " %" << endl;
	cout << "Positiiviset " << pos << " kpl " << pos * 100 / (pos + neg) << " %" << endl;
	cout << "Yhteensä " << pos + neg << " kpl " << pos * 100 / (pos + neg) + neg * 100 / (neg + pos) << " %"<< endl;

	return 0;

	
}

