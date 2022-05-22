#include <iostream>
using namespace std;

int main()
{
    int n, tamanho, result, cnt;
    string palavra;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>palavra;
        tamanho=palavra.length();
        result=0;
        cnt=0;
        for (int j=0; j<tamanho; ++j)
        {
            if(palavra[j]=='<')
                cnt++;
            if (palavra[j]=='>' && cnt>0){
                result++;
                cnt--;
            }
        }
        cout<<result<<endl;
    }

    return 0;
}
