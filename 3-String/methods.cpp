#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1 = " Hello ";
    string str2 = "World ";
    string str3 = ", Duniya ";

    string add = str1 + str2 + " & " + str3;
    cout << add << endl;

    string add2 = str1.append(str3);
    cout << add2 << endl;

    // Push_back('') - add a character at the end of string
    string st = "apple";
    st.push_back('o');
    cout << st << e ndl;

    // pop_back() - remove a character from the end of string
    st.pop_back();
    cout << st << endl;

    return 0;
}