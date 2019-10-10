#include <stdio.h>

int gcd(int a, int b) {
    if (b==0){
        return a;
    }
    return gcd(b, a%b);
}


int main() {
    int T, N, lcm;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        lcm = 1;
        for (int j = 2; j <= N; j++)
        {
            lcm = ((j * lcm) / gcd(j, lcm));
        }
        printf("%d \n", lcm);
    }
    

    return 0;
}