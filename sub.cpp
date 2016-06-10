# codeon
#include <iostream>
using namespace std;
int a[100];
int b[100];
int main() {
	int i,j,l,c,t,m,n;
	cin>>t;
	cin>>n;
	a[0]=0;
	b[0]=0;
	while(t--)
	{
	    for(i=1;i<=n;i++)
	    {
	        cin>>a[i];
	        b[i]=a[i];
	    }
	    m=i;
	    
	    for(i=1;i<n;i++)
	    {
	        
	        
	        l=n;
	        j=i+1;
	        label:
	        
	            while(j<=l)
	            {
	                a[i]=a[i]+a[j];
	                j++;
	            }
	            b[m]=a[i];
	            m++;
	            l--;
	            for(c=1;c<=n;c++)
	             a[c]=b[c];
	             
	            if(l>2)
	            {
	               j=i+1; 
	            goto label;
	            }
	        
	    }
	    for(i=1;i<=(n*(n+1)/2);i++)
	    cout<<b[i]<<endl;
	}
}
