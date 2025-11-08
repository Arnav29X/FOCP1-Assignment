#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {

        int green_cost, purple_cost;
        int p;

        scanf("%d %d", &green_cost, &purple_cost);
        scanf("%d", &p);

        int s1 = 0;
        int s2 = 0;

        for (int i = 0; i < p; i++) {
            int a, b;
            scanf("%d %d", &a, &b);

            if (a == 1) s1++;
            if (b == 1) s2++;
        }

        int co1 = s1 * green_cost + s2 * purple_cost;

        int co2 = s1 * purple_cost + s2 * green_cost;

        if (co1 < co2) printf("%d\n", co1);
        else printf("%d\n", co2);
    }

    return 0;
}
