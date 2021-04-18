/////////////////////////////////////////////////////
// Source.cpp
// головний файл проекту - main

#include"Fraction.h"

int main()
{
    Fraction a, b;
    bool initResult;

    cout << " Enter first number : " << endl << endl; cin >> a;
    cout << endl;

    do
    {
        try
        {
            initResult = true;
            cout << " Enter second number : " << endl << endl; cin >> b;
            cout << endl;
        }
        catch (invalid_argument e)
        {
            initResult = false;
            cout << e.what() << endl;
        }
        catch (bad_exception e)
        {
            initResult = false;
            cout << e.what() << endl;
        }
        catch (MyException& e)
        {
            initResult = false;
            cout << e.what() << endl;
        }
        catch (const char* e)
        {
            initResult = false;
            cerr << e << endl;
        }
    } while (!initResult);

    cout << "++ of first number" << endl << ++a << endl;
    cout << "-- of second number" << endl << --b << endl;

    cout << "Subtraction of first and second number : " << endl << a - b;
    cout << endl;
    cout << "Comparison of first and second number : " << endl;
    a(b);


    return 0;
}