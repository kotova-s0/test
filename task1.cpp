#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ifstream fin("num2020.txt");
    if (fin.is_open()) {
        string n;
        vector <int> num;
        while (getline(fin, n)) {
            if (atoi(n.c_str())) {
                num.push_back(atoi(n.c_str()));
            }
        }
        for (int i = 0; i < num.size() - 1; i++) {
            for (int j = i + 1; j < num.size(); j++) {
                if (num[i] + num[j] == 2020) cout << num[i] * num[j] << endl;
            }
        }
    }
    else cout << "can't open file";
    fin.close();
}
