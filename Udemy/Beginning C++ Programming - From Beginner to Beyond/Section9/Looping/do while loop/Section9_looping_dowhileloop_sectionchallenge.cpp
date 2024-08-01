#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'}; // Example initialization
    size_t i{0};
    bool vowelfound{false};

    if (!vec.empty()) {
        do {
            switch (vec[i]) {
                
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowelfound = true;
                    break;

                default: ++i;
            }
        } while (!vowelfound && i < vec.size());

    }

        if (vowelfound) {
            cout << "Vowel found: " << vec[i];
        } else {
            cout << "No vowel was found";
        }

}