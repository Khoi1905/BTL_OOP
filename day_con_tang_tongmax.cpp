#include<bits/stdc++.h>
using namespace std;
struct khanh
{
    int N;
    int *a;
    int **b;
public:
    khanh()
    {
        cin>>N;
        a = new int[N]; // cấp phát động mảng 1 chiều
        *b = new int[N];
        for(int j = 0; j < N; j++)
            b[j] = new int [N]; //cap phat dong mang 2 chieu
        for(int i = 0; i < N; i++)
            cin>>a[i];
        for(int i = 0 ; i < N; i++)
        {
            for(int j = 0; j < N; j++)
                b[i][j] = 0;
        }
        b[0][0] = a[0];
    }
    void arr_tang()
    {
        int t = 0;
        int temp = 1;
        for(int i = temp; i < N; i++)
        {
             if(a[i] < a[i-1])
            {
                b[++t][i] = a[i];
                temp = i;
                continue;
            }
            else
            b[t][i] = a[i];
        }
    }
    void so_sanh()
    {
        int c[1001];
        int sum = 0;
        int t = 0,temp = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                sum+= b[i][j];
            }
            c[t] = sum;
            sum = 0;
            t++;
        }
       int dai_nhat = c[0];
        for(int i = 0 ; i < t; i++)
        {
            if(c[i] > dai_nhat)
            {
                dai_nhat = c[i];
                temp = i;
            }
        }
        for(int i = 0; i < N; i++)
        {
            if(b[temp][i] == 0) continue;
            else cout<<b[temp][i]<<" ";
        }
    }
};
int main()
{
    khanh phi;
    phi.arr_tang();
    phi.so_sanh();
}
