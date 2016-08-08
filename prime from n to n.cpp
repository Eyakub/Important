#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int f, l, arr[100], i, j, z = 0, p;
    scanf("%d %d", &f, &l);
    for(i = f; i <= l; i++){ ///this loop for first number to last number.
        p = 0;
        if(i == 1){ ///this condition cause 1 is not a prime number.
            p == 1;
        }
        else{
            for(j = 2; j < i; j++){
                if(i % j == 0){ ///the value of i's  will be check here for prime or not
                    p = 1;
                    break;
                }
            }
        }
        if(p == 0){
            arr[z++] = i; ///storing prime number's
        }
    }
    for(i = 0; i < z-1; i++){
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[z-1]);

    return 0;
}
