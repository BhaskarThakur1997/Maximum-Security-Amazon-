#include<bits/stdc++.h>
using namespace std;

string getEncryptedNumber(vector<int>& numbers){
    int n = numbers.size();
    string result;
    if(n == 2){
        if(numbers[0] == 0 && numbers[1] == 0)
        return "00";
        else if(numbers[0] == 0)
        return "0" + to_string(numbers[1]);
        return to_string(numbers[0]) + to_string(numbers[1]);
    }
    for(int i=0; i<n-1; i++)
        numbers[i] = (numbers[i] + numbers[i+1]) % 10;
        numbers.pop_back();
        return getEncryptedNumber(numbers);
}

int main()
{
    vector<int> numbers = { 4, 5, 6, 7 };
    cout << getEncryptedNumber(numbers);
    return 0;
}