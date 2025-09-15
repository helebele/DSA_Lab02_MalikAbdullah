#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(vector<int> arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}
int main() {
    // Test case 1: Multiple occurrences
    vector<int> arr1 = {1, 2, 3, 2, 4, 2};
    int key1 = 2;
    vector<int> result1 = findIndices(arr1, key1);
    cout << "Indices for key " << key1 << ": ";
    for (int i : result1) cout << i << " ";
    cout << endl;

    // Test case 2: Key not present
    vector<int> arr2 = {5, 6, 7, 8};
    int key2 = 3;
    vector<int> result2 = findIndices(arr2, key2);
    cout << "Indices for key " << key2 << ": ";
    for (int i : result2) cout << i << " ";
    cout << endl;

    // Test case 3: Empty array
    vector<int> arr3 = {};
    int key3 = 10;
    vector<int> result3 = findIndices(arr3, key3);
    cout << "Indices for key " << key3 << ": ";
    for (int i : result3) cout << i << " ";
    cout << endl;


    //Additional test cases for second commit

    vector<int> arr4 = {7, 7, 7, 7, 7};
    int key4 = 7;
    vector<int> result4 = findIndices(arr4, key4);
    cout << "Indices for key " << key4 << ": ";
    for (int i : result4) cout << i << " ";
    cout << endl;

    vector<int> arr5 = {5, 2, 3, 4, 5};
    int key5 = 5;
    vector<int> result5 = findIndices(arr5, key5);
    cout << "Indices for key " << key5 << ": ";
    for (int i : result5) cout << i << " ";
    cout << endl;

    vector<int> arr6 = {1, 9, 3, 9, 5, 6, 7, 8, 9, 10};
    int key6 = 9;
    vector<int> result6 = findIndices(arr6, key6);
    cout << "Indices for key " << key6 << ": ";
    for (int i : result6) cout << i << " ";
    cout << endl;

    //Additional cases for second commit end.





    return 0;
}
