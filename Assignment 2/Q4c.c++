//DELETE ALL VOWELS FROM THE STRING--->
#include<iostream>

using namespace std;

int main()
{
  char str[100];
  cout<<"Enter a string: ";
  cin.getline(str,100);

  int j=0;

  for(int i=0;str[i] != '\0';i++)
  {
    if(str[i] !='a' && str[i]!= 'e'&&str[i] !='i'&&str[i] !='o'&&str[i] !='u'&&str[i] !='A'&&str[i] !='E'&&str[i] !='I'&&str[i] !='O'&&str[i] !='U'){
      str[j++]=str[i];
    }
  }
  str[j]='\0';

  cout<<"String without vowels: "<<str;
  return 0;
}