#include <iostream>
using namespace std;

string eng[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(char c : s){
        sum += c - '0';
    }
    string ans = to_string(sum);
    cout << eng[ans[0] - '0'];
    for (int i = 1; i < ans.length(); i++){
        cout << " " << eng[ans[i] - '0'];
    }
    return 0;
}