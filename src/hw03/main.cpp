#include <iostream>
#include <iomanip>

using namespace std;


// add your code here
void dump(int dat[], int len, int width=5, int col=5)
{
    int i;
    for(i=0; i<len; i++) {
        cout<<setw(width)<<dat[i];
        if ((i+1)%col==0) cout<<endl;
    }
    if (i%col!=0) cout<<endl;
}

// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    int dat[100];
    int cnt = 0;
    
    while(cin>>dat[cnt++]);
    cnt--;

    dump(dat,cnt);
    cout<<endl;
    dump(dat,cnt,10);
    cout<<endl;
    dump(dat,cnt,10,3);

    return 0;
}
