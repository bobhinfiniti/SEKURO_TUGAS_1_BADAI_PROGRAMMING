#include <iostream>
#include <map>
#include <vector>

using namespace std;

// Program menghitung frekuensi angka
// Contoh input:
// 5
// 2 1 2 3 1
int main() {
    int n, val;
    cin >> n;
    int length;
    length = n;
    int count;

    vector<int> numbers(length);
    for (int i=0;i<length;i++){
        cin >> numbers[i];
    }
    map<int, int> id;
    for (int i = 0; i < n; i++) {
        cin >> val;
        id[numbers[i]] = val; 
    }
    int min_value = numbers[1];
    for (int i=1;i<numbers.size();i++){
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        };
    }
    


    return 0;
}

