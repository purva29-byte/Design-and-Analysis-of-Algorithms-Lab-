#include <stdio.h>

int n, target;
int a[25];
int subset[25];

int ans[1000][25];
int len[1000];
int cnt = 0;

void solve(int idx, int sum, int k)
{
    if(sum == target)
    {
        len[cnt] = k;
        for(int i = 0; i < k; i++)
            ans[cnt][i] = subset[i];
        cnt++;
        return;
    }

    if(idx == n || sum > target)
        return;

    subset[k] = a[idx];
    solve(idx + 1, sum + a[idx], k + 1);

    solve(idx + 1, sum, k);
}

int main()
{
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
