#include <iostream>
using namespace std;

int main()
{
    int n;
    int ret = 0;
    int k = 1;
    while (k <= 100)
    {
        if ((n + 2 * k) % 5 == 0){
            ret++;
            k++;
        }else if ((n + 5 * k) % 3 == 0){
            if ((n * k) % 4 != 0){
                ret++;
                k++;
            }else{
                k++;
            }
        }else{
            k++;
        }
    }
}
// Jika n = 29 maka nilai akhir  ret adalah …