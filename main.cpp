#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

    string nick;
   string temat;
   string tresc[5];
   string odpa[5];
   string odpb[5];
   string odpc[5];
   string odpd[5];
   string poprawna[5];

int main()
{
    int nr_linii=1;
    string linia;
    fstream plik;
    int nr_pyt=0;
    string odp;
    int pkt=0;

    plik.open("quiz.txt", ios::in);
    if (plik.good() == false )
    {
        cout << "Plik nie istnieje.";
        exit(0);
    }
    while(getline(plik, linia))
    {
        switch(nr_linii)
        {
            case 1: temat=linia;                 break;
            case 2: nick=linia;                  break;
            case 3: tresc[nr_pyt] = linia;       break;
            case 4: odpa[nr_pyt] = linia;        break;
            case 5: odpb[nr_pyt] = linia;        break;
            case 6: odpc[nr_pyt] = linia;        break;
            case 7: odpd[nr_pyt] = linia;        break;
            case 8: poprawna[nr_pyt] = linia;    break;
        }

        if(nr_linii==8)
        {
            nr_linii=2;
            nr_pyt++;
        }
        nr_linii++;
    }
    plik.close();
    cout << "stworca tego quizu: " <<nick<<endl;
    for (int i=0;i<=4;i++)
    {
        cout << tresc[i]<< endl;
        cout <<"A. " <<odpa[i]<< endl;
        cout <<"B. " <<odpb[i]<< endl;
        cout <<"C. " <<odpc[i]<< endl;
        cout <<"D. " <<odpd[i]<< endl;
        cout <<"Udziel odpowiedzi: ";
        cin >> odp;
        transform (odp.begin(),odp.end(),odp.begin(), :: tolower);

        if(odp==poprawna[i])
        {
            cout << "poprawna odpowiedz!"<<endl;
            pkt++;
        }
        else
        {
            cout << "Zla odpowiedz :(."<< endl<<"Poprawna odp to: " <<poprawna[i]<<endl;

        }
    }

    cout << "Koniec quizu zdobyles " << pkt<< " punktow" ;

    return 0;
}
