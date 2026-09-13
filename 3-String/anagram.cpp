#include <iostream>
#include <unordered_map>
using namespace std;

bool Anagram(string str1, string str2){

    if (str1.size() != str2.size())
        return false;

    unordered_map<char, int> mpp1;
    unordered_map<char, int> mpp2;

    for (int i = 0; i < str1.size(); i++)
    {
        mpp1[str1[i]]++;
    }

    for (int i = 0; i < str2.size(); i++)
    {
        mpp2[str2[i]]++;
    }

    if (mpp1.size() != mpp2.size())
        return false;

    for (auto it : mpp1)
    {
        if (mpp2.find(it.first) == mpp1.end())
        {
            return false;
        }
    }

    return true;
}

int main(){
    string str1 = "anagram";
    string str2 = "nagaram";

    cout << Anagram(str1, str2);

    return 0;
}