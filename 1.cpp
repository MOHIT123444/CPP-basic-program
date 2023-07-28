#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std; 

int main(){
    int quant;
    int choice;
    // Qunatity
    int Qrooms =0,Qpasta =0,Qburger =0,Qnoodles =0,Qshake =0,Qchicken =0;
    //food items sold
    int Srooms =0, Spasta =0, Sburger =0,Snoodles =0,Sshakes =0,Schicken =0;
    //total price of the items
    int total_rooms =0,total_pasta =0,Total_burger =0,Total_noodles =0,Total_shake =0,Total_chicken=0;

    cout << "\n\t Qunatity of items we have";
    cout << " n rooms available :";
    cin >> Qrooms;
    cout << "Quantity of pasta :";
    cin >> Qpasta;
    cout << "Quantity of burger" ;
    cin >> Qburger;
    cout << "Quantity if noodles :";
    cin >> Qnoodles;
    cout << "Quantityt of shake:";
    cin >>Qshake;
    cout << "Quantity of chichken:";
    cin >> Qchicken;

    cout << "\n\t\t\t Please select from the menu options:";
    cout << "\n\n1) Rooms";
    cout << " \n2) Pasta";
    cout << " \n3) Burger ";
    cout << " \n4) Noodles";
    cout << " \n5) Shake";
    cout << " \n6) Chicken_roll";
    cout << " \n7) INformation regarding sales and colllection";
    cout << " \n8) Exit";

    cout <<"Please enter your choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want :";
        cin >> quant;
        if(Qrooms-Srooms >=quant){
            Srooms =Srooms+quant;
            total_rooms=total_rooms +quant*1200;
            cout << "\n\n\t\t"<< quant<<"rooms\rooms have been alloted to you";

        }
        else {
            cout << "\n\t Only" << Qrooms-Srooms<<"rooms remainning in hotel";
        }
        break;
    
    default:
        break;
    }
    

    return 0;
}