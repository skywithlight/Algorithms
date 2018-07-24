#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
vector<string> timeInWords(int h, int m) {
    
    vector <string> a;
    a.push_back("one");
    a.push_back("two");
    a.push_back("three");
    a.push_back("four");
    a.push_back("five");
    a.push_back("six");
    a.push_back("seven");
    a.push_back("eight");
    a.push_back("nine");
    a.push_back("ten");
    a.push_back("eleven");
    a.push_back("twelve");
    a.push_back("thirteen");
    a.push_back("fourteen");
    a.push_back("quarter");
    a.push_back("sixteen");
    a.push_back("seventeen");
    a.push_back("eighteen");
    a.push_back("nineteen");
    a.push_back("twenty");
    a.push_back("twenty one");
    a.push_back("twenty two");
    a.push_back("twenty three");
    a.push_back("twenty four");
    a.push_back("twenty five");
    a.push_back("twenty six");
    a.push_back("twenty seven");
    a.push_back("twenty eight");
    a.push_back("twenty nine");
    a.push_back("half");
    
    
    vector<string> ans;
    
    if (m == 0){
        ans.push_back(a[h - 1]);
        ans.push_back(" o' clock");
    } else {
        if (m <= 30){
            if (m == 15 || m == 30){
                ans.push_back(a[m - 1]);
                ans.push_back(" past ");
                ans.push_back(a[h - 1]);
            } else {    
                if (m < 10){
                    ans.push_back(a[m - 1]);
                    ans.push_back(" minute past ");
                    ans.push_back(a[h - 1]);                     
                } else {
                    ans.push_back(a[m - 1]);
                    ans.push_back(" minutes past ");
                    ans.push_back(a[h - 1]); 
                }  
            }
        } else {
            int tem = 60 - m;
            if (tem == 15){
                ans.push_back(a[tem - 1]);
                ans.push_back(" to ");
                ans.push_back(a[h]);
            } else {
                ans.push_back(a[tem - 1]);
                ans.push_back(" minutes to ");
                ans.push_back(a[h]);                
            }
        }
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < timeInWords(h, m).size(); i++)
        fout << timeInWords(h, m)[i];
    fout << "\n";

    fout.close();

    return 0;
}
