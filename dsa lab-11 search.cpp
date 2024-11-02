#include <iostream>
using namespace std;

int main() {
   
    const string tickets[10] = {
        "13579", "26791", "26792", "33445", "55555",
        "62483", "77777", "79422", "85647", "93121"
    };

    string winningNumber;
    bool isWinner = false;

    
    cout << "Enter this week's winning 5-digit number: ";
    cin >> winningNumber;

    
    for (int i = 0; i < 10; ++i) {
        if (tickets[i] == winningNumber) {
            isWinner = true;
            break; 
        }
    }

    if (isWinner) {
     cout << "Congratulations! You have a winning ticket: " << winningNumber << endl;
    } else {
     cout << "Sorry, the number " << winningNumber << " is invalid or not a winner." << endl;
    }

    return 0;
}
