#include<iostream>

using namespace std;

string removeDuplicates(string s){
    int n = s.length();
    string str = " ";

    if (n == 0)
        return str;

    for ( int i = 0; i <  n; i++){
        if (s[i] != s[i+1]){
            str += s[i];
        }

    }
    //str.push_back(s[n - 1]);
    return str;
}


int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    string s1 = "geeksforgeeks";
    cout<< removeDuplicates(s1)<< endl;

    string s2 = "aabcca";
    cout << removeDuplicates(s2) << endl;


    return 0;
}
