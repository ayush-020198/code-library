#include <bits/stdc++.h>
#include <cstdlib> 
using namespace std;

int main() {
	//code
	    int t,i,len,divide,r,count;
	    string input;
		cin>>t;
		while(t>0){
	    cin>>input;
	    len = input.length();
	    r=0;
	    count=0;
	    for(i=len-1; i>=0; i--)
	    {   
	        if(input[i]>='0' && input[i]<='9')
	        {
	           count++;
	           divide = input[i]-'0';
	           r=r/10;
	           r=r+divide*10;
	        }
	        else 
	        {
	            break;
	        }
	    }    
	           if(count == 1)
	           {
	               r = r/10;
	           }
	        if((len-count)==r)
	        cout<<1<<endl;
	        else
	        cout<<0<<endl;
		    t--;
		}
	return 0;
}