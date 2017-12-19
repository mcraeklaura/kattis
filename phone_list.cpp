#include <iostream>
#include <string>
using namespace std;

int main(){
    string prefix;
    int num_tests;
    int num_nums;
    cin >> num_tests;
    for(int i = 0; i < num_tests; ++i){
        cin >> num_nums;
        cin >> prefix;
        int y;
        for( y= 0; y < num_nums-1; y++){
            string number;
            cin >> number;
            if(number.substr(0,prefix.length()) == prefix){
                cout << "NO" << endl;
                break;
            }
        }
        if(y == num_tests){
            cout << "YES";
        }
    }
    return 0;
}
