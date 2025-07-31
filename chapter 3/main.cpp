#include <iostream>
#include <string>


using std::string; using std::cin; using std::cout; using std::endl; using std::getline;

int main() {
    // read until end-of-file
    cout << "1) Line\n2) Word" << endl;
    int choice;
    cin >> choice;
   
    
    if (choice == 1) {
        string line;
        while (getline(cin, line)) {
            auto line_size = line.size();
            cout << line << " (" << line_size  << ")" << endl;
        }
    } else {
        string word;
        while (cin >> word) {
            cout << word << endl; // write each word followed by a new line
        }
    }
   
    return 0;
}