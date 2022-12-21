#include <iostream>
#include <Windows.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main (){
int x;
int y;
int z;
int k;
int p;
int o, t;
string q;

vyber:
cout << "vyberte funkci" << endl;
cout << "1 number comparator" << endl;
cout << "2 prohozeni cisel" << endl;
cout << "3 umocneni dvou cisel " << endl;
cout << "4 spocitani znaku" << endl;
cin >> k;


switch (k){

case 1:{
    cout << "zadejte cisla k porovnani" << endl;
    cin  >> x >>  y >>  z;
    if ( x>y && x>z){
        cout << x;
    } else if (y>x && y >z ){
        cout << y;}
        else {
            cout << z;
            goto vyber;
        }
        break;
}


    case 2: {
        cout << "zadejte cisla k prohozeni";
        cin >> p >> o;
        cout << p << endl;
        cout << o << endl;
 Sleep (1000);
 system("cls");
        t = p;
    p = o;
    o = t;
    cout << p<< endl << o<< endl;
break;

}


    case 3:{
        cout << "zadejte cislo a jeho mocninu" << endl;
        cin >> x;
        cin >> y;
        double mocnina = pow( x, y);
        cout << mocnina;
        break;




}
case 4:{
    cout << "zadejte slovo" << endl;
    cin >> q;
    cout << " pocet pismen " << endl;
   cout << q.length();









}
    }
}
