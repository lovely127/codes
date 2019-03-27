#include<bits/stdc++.h>
using namespace std;
bool is_permutation(char *s1,char *s2)
{
 int i;
 int l1 = strlen(s1);
 int l2 = strlen(s2);
 if(l1!=l2)
 {
  return false;
 }
 //otherwise check for freqcies
 int freq[26] = {0};
 for(i=0;i<l1;i++)
 {
  freq[s1[i]-'a']++;
 }
 for(i=0;i<l2;i++)
 {
  freq[s2[i]-'a']--;
 }
 for(i=0;i<26;i++)
 {
  if(freq[i]!=0)
  return false;
 }
 return true;
}
int main()
{
 char s1[100],s2[100];
 cin>>s1>>s2;
 if(is_permutation(s1,s2))
 cout<<"is permutation"<<endl;
 else
 cout<<"not permutaton"<<endl;
 return 0;
 }
 
 
 
 
 
 
 
