#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int liczba;
    int strzal;
    int odp;
    do
    {
    cout << "Witaj pomyslalem sobie liczbe od 1 do 100!" << endl;
    srand(time(NULL));
    liczba= rand()%100 + 1;
    cout << liczba ;
    cout << "Zgadnij jaka"<< endl;
    cout << "Zaczynamy!";
    while(strzal!=liczba)
    {
        cin >> strzal;
        if ((strzal==liczba+1) || (strzal==liczba-1))
        {
            cout << "Jestes blizej niz ci sie wydaje"<< endl;
        }
        else if(strzal>liczba)
        {
           cout << "Za duzo!"<< endl;
        }
        else if (strzal<liczba)
        {
            cout << "Za malo!"<< endl;
        }
        else if(strzal==liczba)
        {
            cout << "Gratulacje!";
             cout << "chcesz grac dalej?"<<endl;
        cout <<"1. Tak 2.Nie"<< endl;
        cin >> odp;
        system("cls");
        }

        }
    }while(odp==1);
    cout << "Dzieki za gre!";


    return 0;
}
