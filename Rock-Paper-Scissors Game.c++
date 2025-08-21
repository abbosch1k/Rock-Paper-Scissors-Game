#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string choices[] = {"Rock", "Paper", "Scissors"};

    int player, comp = rand() % 3;
    cout << "0=Rock, 1=Paper, 2=Scissors: ";
    cin >> player;

    cout << "You: " << choices[player] << " | Computer: " << choices[comp] << endl;

    if (player == comp) cout << "Draw!\n";
    else if ((player==0&&comp==2)||(player==1&&comp==0)||(player==2&&comp==1))
        cout << "You win!\n";
    else
        cout << "You lose!\n";

    return 0;
}
