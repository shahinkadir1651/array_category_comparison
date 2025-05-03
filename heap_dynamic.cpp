#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    for (int i = 0; i < 5; i++) arr.push_back(i * 2);
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}
