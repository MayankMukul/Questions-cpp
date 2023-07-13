#include<iostream>
using namespace std;

int sttonumeric(string str[],string nw)
{
    string output = "";   
    
    int n=nw.length();

    for(int i=0;i<n;i++)
    {
        if (nw[i] == ' ')
            output = output + "0";

        else
            int position=position-'A';
            output = output + str[i];
    }

    return output;

}

int main()
{
    string str[]={ "2",   "22",  "222", "3",   "33",   "333", "4",
                    "44",  "444", "5",   "55",  "555",  "6",   "66",
                    "666", "7",   "77",  "777", "7777", "8",   "88",
                    "888", "9",   "99",  "999", "9999" };

    string S="GEEKS FOR GEEK";
    cout<<"GEEKS FOR GEEK\n"<<sttonumeric(str,S);
    return 0;
}