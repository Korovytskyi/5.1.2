#include <iostream>
#include "Vector3D.h"
#include "Exception.h"

int main()
{
    Vector3D A;

    bool initResult;

    do
    {
        try
        {
            initResult = true;
            cin >> A;
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
        catch (Exception& e)
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

    cout << A;
    cout << A;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;
    cout << "A++" << endl; cout << A-- << endl;
    cout << "A--" << endl; cout << A++ << endl;

    A.Distance();
    A.scalar();
    A.isEqual();
    A.isEqual2();
    return 0;
}