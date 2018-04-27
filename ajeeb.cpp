#include<iostream>
#include<cstring>
#include<sstream>
#include<vector>

using namespace std;

string str;
int len;

string NextWord(int &s,int &e)
{
int st = s;
//trimming the spaces
for (int i = s; i < len; i++)
{
if (str[i] != ' ' && str[i] != '.')
{
st = i;
break;
}
}
for (int i = st; i < len; i++)
{
//checking for the delimiters
if (str[i] == ' ' || str[i]=='.')
{
e = i;
break;
}
}
return str.substr(st, e - st);
}

void ReverseAndPrint(string &word)
{
int wLen = (int)word.length();
for (int i = wLen - 1; i >= 0; i--)//from end to beginning
{
cout << word[i];
}
}

void JustPrint(string &word)
{
int wLen = (int)word.length();
for (int i = 0; i < wLen; i++)
{
cout << word[i];
}
}

int main()
{
getline(cin, str);//input from the STDIN
len = (int)str.length();
vector<string> wList;//to store the split the words
int c = 1;
int s = 0, e = 0;
string word;
while (e < len)
{
word = NextWord(s, e);//to find the individual words
if (word.length() == 0)
break;
else
{
wList.push_back(word);//storing the individual words
}
s = e + 1;
e = s;
}

int wSize = (int)wList.size();
int i = 1;
for (; i <= wSize - 1; i++)
{
if (i % 2)//odd word
{
ReverseAndPrint(wList[i - 1]);//Reverse and print to the STDOUT
cout << " ";
}
else//even word
{
JustPrint(wList[i - 1]);//just print to the STDOUT
cout << " ";
}
}
//print the last word
if (wSize % 2)
{
ReverseAndPrint(wList[wSize - 1]);
cout << ".";
}
else
{
JustPrint(wList[wSize - 1]);
cout << ".";
}
}

