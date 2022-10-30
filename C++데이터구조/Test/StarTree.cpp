#include <iostream>
#include <string>

using namespace std;

int main (void){
    int num;
    int star = 1;
    cin >> num;
    for(int i = 0; i< num; i++){
        for(int j = 0; j<(num-star); j++){
            cout << " ";
        }
        for(int i =0; i< star; i++){
            cout << "* ";
        }
        star++;
        cout<<endl;
    }
    
    return 0;
}

