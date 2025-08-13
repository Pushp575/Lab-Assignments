//Uppercase to Lower case and Lower case to Uppercase--->
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter string";
    getline(cin,name);
int n=name.length();
   for(int i=0;i<n;i++)
  { if(name[i]>=65 && name[i]<=90)
      { 
	   name[i] = name[i] + 32;  

    } 
   
    else if(name[i]==32)
    {
    	name[i]=name[i];
	}
	 else  
	{
        name[i]=name[i]-32;
    }
}

cout<<name;

    return 0;
}