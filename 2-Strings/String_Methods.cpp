#include<iostream>
#include<math.h>
using namespace std;

int main(){
    string str = "coding c++";

    // getline(cin, str) - input multiple line 
    get(cin, str);

    // str.size() - Length of the string
    str.size();

    // str.empty() - return true or false
    str.empty();

    // to_string(integer) - Convert integer into string
    to_string(inte);

    // stoi(str) - Convert string into integer
    stoi(str);

    // convert characte into number
      char ch = '7';
      int num = ch - '0';


    // str.push_back("c") - push 'character' at the end
    str.push_back('X');
    

//====================   #include<cmath>    =====================//

    // sqrt(number) - return square root of the number
   sqrt(16); - 4

    // pow(x,y) - return power of the number
   pow(2,4); - 16

   //abs(x) - return absolute/positive value of the x
   abs(-122) - 122


//====================   Algorithm & utilities    =====================//

  // max(x,y, z) - Return maximum value between x, y and z
   max({11,12,13}) - 13

  // min(x,y,z) - Return minimum value between x, y and z
   min({10,20, 30}) - 10

  //  sort(start, end) - sort from start to end
  
    string str = "coding";
    sort(str.begin(),str.end()); - "cdgino"

    int arr[5] = {12,43,2,31,22};
    sort(arr+1,arr+5) - 12, 2, 22, 31, 43;

  // swap(arr[1],arr[4]) - swap two chacaters
    string str = "coding";
    swap(str[1],srt[4]); - cndiog

  // reverse(start, end) - reverse the actual array or vector or string
    string str = "coding";
    reverse(str.begin(),str.end()); - "gnidoc"

    vector<int> v = {1,2,3};
    reverse(v.begin(), v.end()); - 3, 2, 1

    int ar[5]= {12,10,33,233,43};
    reverse(ar,ar+5);


  // str.substr(from, times) - gives sub string of a string 
    string str = "Programming";
    str.substr(0,4); - "Prog";

  // str.replace(startIdx, length, newStr) - Replace world by Earth
    string s = "hello world";
    s.replace(6, 5, "Earth"); // start index, length, new string


//==================   find() function    =====================//

    // ---> If find() finds the character or substring, it returns the starting
    // index (position) where it appears in the string.

   string str = "hello world";
   int idx = str.find('l') -  2
   int idx = str.find("world") - 6

    // ---> If find() does not finds the character or substring, it returns the
    // starting index (position) where it appears in the string.

    if (idx == string::npos){
      cout << "Not found!";
    }

    string s = "banana";
    int idx = s.find("a", 2); // start search from index 2 // --> 3


// ======================= Erase function ===========================//

  // string.erase(start_index, number_of_characters);
    string s = "hello world";
    s.erase(5, 1);   // erase 1 character at index 5 // output - helloworld

    string s = "programming";
    s.erase(3, 5); // removes "gramm" // output - proing


  // =====================================================//

  size , empty , to string , string to integer , push back , square root , power
  absolute value , max , min , sort , swap , reverse , sub string , replace , 
  find , erase 

  return 0;
}