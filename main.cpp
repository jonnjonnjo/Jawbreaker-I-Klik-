#include <bits/stdc++.h>
using namespace std;
int n,m,b,k;
int total = 0;
int dicari;

int arr[27][27] = {0};
int visited[27][27] = {0};

void cari(int k,int j,int i)            // Flood-Fill Algorithm 
{

    if(arr[j][i] == k){
    if(visited[j][i] == 0)
    {
        total +=1;                      // Visit a node first, and then visit nearby nodes
        visited[j][i] = 1;
        cari(k,j,i+1);
        cari(k,j+1,i);
        cari(k,j,i-1);
        cari(k,j-1,i);

    }

    }
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for(int y = 0;y <n;y++)
    {
        for(int x = 0;x < m;x++) cin >> arr[y][x];
    }

    cin >> b >> k;

    dicari = arr[b][k];

    cari(dicari,b,k);

    cout << total*(total-1);

}
