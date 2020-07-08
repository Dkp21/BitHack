#include <iostream>
#include <bitset>
#include <cstdint>

using namespace std;

bool numIsEven(int n)
{
    return (n & 1);
}

bool numIsNegetive(int n)
{
    auto sz = sizeof(n)*8 -1;

    auto mask = 1 << sz;

    return ((n & mask) >> sz);
}

void getAbsOfNumber(int n)
{
    auto sz = sizeof(n)*8;
    auto mask = n >> (sz -1);

    auto abs_v = (n + mask)^mask;

    cout << "abs( " << n << " ) is (  " << abs_v << " )" << endl;
}

uint32_t reverseBits(uint32_t n)
{

    unsigned out = 0;

    for(int i = 0; i < 32; ++i)
    {
        out <<= 1;

        if( n & 1)
        {
            out ^= 1;
        }

        n >>=1;
    }

    return out;
}

int main(int argc, char **argv)
{
    int n;

    cout << "Enter Number(odd/even test) : ";
    cin >> n;

    numIsEven(n)?(cout << "Number is odd" << endl):(cout << "Number is even" << endl);

    cout << "Enter Number(+/- number test) : ";
    cin >> n;

    numIsNegetive(n)?(cout << "Number is negative" << endl):(cout << "Number is positive" << endl);

    cout << "Enter Number(find absolute value) : ";
    cin >> n;

    getAbsOfNumber(n);

    cout << "Enter Number(reverse a bits of a given number) : ";
    cin >> n;

    cout << "Original n(" << n << ") - " << bitset<32>(n) << endl;
    unsigned out = reverseBits(n);
    cout << "Reverse of n(" << out << ")-" << bitset<32>(out) << endl;

    return 0;
}
