/**<
Gearoid Hanrahan
Exercise 9
Sphere Calculations*/

/**< Preprocessor Directives */
#include <iostream>
#define pi 3.14

using namespace std;

/**< 2 functions being used */
int main();
void sphere(double rad,double vol,double sarea, double *pv1, double *psa1);

int main()
{
    double r, v, sa;

    /**< These are pointers to variables v and sa */
    double *pv, *psa;

    /**< pointers 'pv and psa' are initialised as pointing to the memory address of 'v and sa' */
    pv = &v;
    psa = &sa;

    cout << "Sphere calculations\n" << endl;

    cout << "Enter value for r " << endl;
    cin >> r ;

    /**< ensuring that 'r'is greater than '0' */
    while(r <= 0)
    {
        /**< Entering values for r are positive */
        cout << "Enter values for r >= 0" << endl;
        cin >> r ;
    }

    /**< Calling the 'sphere function' */
    sphere(r, v, sa,pv, psa);

    cout << "surface area = " << *psa << endl;
    cout << "volume = " << *pv << endl;

    return 0;
}

/**< A function that will calculate 'v' and 'sa' for calculating the suface area and volume, using 3 regular doubles and 2 pointers */
void sphere(double rad,double vol,double sarea, double *pv1, double *psa1)
{
    *pv1 = 4*pi*(rad*rad);
    *psa1 = 1.33*pi*(rad*rad*rad);


    /**< Prints out the surface area and volume */
    return;
}
