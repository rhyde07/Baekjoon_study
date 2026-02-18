#include <cstdio>
#include <algorithm>

int main() {
    int n, m;
    int a[500001];

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    std::sort(a, a + n);


    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);

        int* lb = std::lower_bound(a, a + n, x); //이상 
        int* ub = std::upper_bound(a, a + n, x); //초과 
        int cnt = ub - lb; // 그냥 빼기 
        printf("%d ", cnt);
    }

    return 0;
}
