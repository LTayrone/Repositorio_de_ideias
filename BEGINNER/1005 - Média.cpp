#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
    double A, B, MEDIA;

    cin >> A;
    cin >> B;

    MEDIA = ((A * 3.5) + (B * 7.5)) / 11;

    cout << fixed << setprecision(5); // Set precision to 5 decimal places
    cout << "MEDIA = " << MEDIA << "\n";

    return 0;
}
