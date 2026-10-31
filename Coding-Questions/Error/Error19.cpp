//Q19. Find the error in the nested loop.
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++){ //its j++ not i++
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

