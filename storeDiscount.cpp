#include <iostream>
#include <conio.h>
using  namespace std;

int main(){

    float productCost, finalPrice;

    cout << "Welcome to the e-market" << endl;
    cout << "Introduce the price of the Product: ";
    cin >> productCost;

    if (productCost < 50){   
        cout << "No available discount: $" << productCost << endl;
    }

    else if (50 <= productCost && productCost < 100){    
        finalPrice = productCost-(productCost*0.05);
        cout << "You recived a 5% discount: $" << finalPrice << endl;
    }

    else{
        finalPrice = productCost-(productCost*0.1);
        cout << "You recived a 10% discount: $" << finalPrice << endl;
    }

    cout << "Press Enter to exit";
    _getch();
    return 0;
}
