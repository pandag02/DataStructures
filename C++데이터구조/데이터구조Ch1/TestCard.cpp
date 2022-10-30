#include <vector>
#include "CreditCard.h"
#include "CreditCard.cpp"   //이 부분 안넣으면 링커 오류,,,

using namespace std;

void testCard(){
    vector<CreditCard*> wallet(10);

    wallet[0] = new CreditCard("2364 7456 3563 7453", "John Bowman", 2500);
    wallet[1] = new CreditCard("2364 7456 3563 7453", "John Bowman", 3500);
    wallet[2] = new CreditCard("2364 7456 3563 7453", "John Bowman", 4500);

    for(int j = 1; j<=16; j++){
        wallet[0] -> chargelt(double(j));
        wallet[1] -> chargelt(2*j);
        wallet[2] -> chargelt(double(3*j));
    }

    cout<< "Card payments: \n";
    for(int i = 0; i <3; i++){
        cout<<*wallet[i];
        while(wallet[i] -> getBalance() > 100.0){
            wallet[i] -> makePayment(100.0);
            cout << "New Balance" << wallet[i] -> getBalance() << "\n";
        }

        cout << "\n";
        delete wallet[i];
    }

}

int main(){
    testCard();
    return EXIT_SUCCESS;
}