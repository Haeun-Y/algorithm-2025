//숫자 문자열과 영단어
//Lv. 1
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    int answer = 0;
    string answerStr = "";
    vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    for(int i = 0; i<s.length(); i++) {
        if(s[i] >= '0' && s[i] <= '9') 
            answerStr += s[i];
        else {
            for(int j = 0; j<v.size(); j++) {
                int tmpI = i;
                bool flg = true;
                for(char ch : v[j]) {
                    if(ch != s[tmpI]) {
                        flg = false;
                        break;
                    }
                    else tmpI++;
                }
                if(flg) {
                    i = tmpI-1;
                    answerStr += (char)(j + '0');
                    break;
                }
            }
        }
    }
    cout << answerStr;
    answer = stoi(answerStr);
    return answer;
}
