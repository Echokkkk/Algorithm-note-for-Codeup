#include "cstdio"
int main()
{
    int m, n;
    while (scanf("%d", &n) != EOF)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        scanf("%d", &m);
        int b[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < m; i++)
        {
            int j;
            for (j = 0; j < n; j++)
            {
                if (b[i] == a[j])
                {
                    printf("YES\n");
                    break;
                }
            }
            if (j == n)
                printf("NO\n");
        }
    }
    return 0;
}
