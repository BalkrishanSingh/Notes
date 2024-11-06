#include <iostream>
using namespace std;
int main()
{
    cout << "Balkrishan\n2302492\n";
    string a = "Hello", b = "World";

    // 1. Length
    cout << "1. Length of String a: " << a.length() << endl;

    // 2. Concatenation
    cout << "2. Concatenated str: " << a + " " + b << endl;

    // 3. Find
    int pos = a.find('l');
    cout << "3. Find 'l' in String a: " << pos << endl;

    // 4. Substring
    cout << "4. Substring of String a: " << a.substr(1, 3) << endl;

    // 5. Compare
    cout << "5. Comparison (String a vs String b): " << (a == b ? "Equal" : "Not equal") << endl;

    // 6. Insert
    a.insert(5, "!");
    cout << "6. After insert in String a: " << a << endl;

    // 7. Erase
    a.erase(5);
    cout << "7. After erase in String a: " << a << endl;

    // 8. Replace
    a.replace(1, 2, "i");
    cout << "8. After replace in String a: " << a << endl;

    // 9. Swap
    a.swap(b);
    cout << "9. After swap (String a, String b): " << a << ", " << b << endl;

    // 10. Clear
    b.clear();
    cout << "10. String b after clear: '" << b << "'" << endl;

    return 0;
}