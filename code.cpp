#include"iostream"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int first=ar[0];
    for(i=1;i<n;i++)
    {
        first^=ar[i];
    }
    cout<<first<<endl;
}
