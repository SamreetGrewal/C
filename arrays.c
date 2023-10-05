#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "arrays.h"

/* Exercise 1. */

/* Return the average magnitude of the signal represented by
 * the n doubles in x[]. 
 * This function assumes that parameter n is >= 1.
 */
double avg_magnitude(double x[], int n)
{
     double sum;
    for (int i =0; i<n; i++){
        sum += fabs(x[i]);
    }
    return sum/n;
}

/* Exercise 2. */

/* Return the average power of the signal represented by
 * the n doubles in x[].
 * This function assumes that parameter n is >= 1.
 */
double avg_power(double x[], int n)
{
    double sum = 0.0;
	for (int i = 0; i < n; i++)
        {
		sum  += x[i] * x[i];
        }
    return sum/n ;
}

/* Exercise 3. */

/* Return the largest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double maxi(double arr[], int n)
{
    double maxi = arr[0];
	for(int i = 1 ; i< n ; i++)
	{
		if (maxi < arr[i])
			maxi = arr[i];
	}
    return maxi;
}

/* Exercise 4. */

/* Return the smallest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double mini(double arr[], int n)
{
    double mini = arr[0];
	for(int i = 1; i < n; i++)
	{
		if (mini > arr[i])
			mini = arr[i];
	}
    return mini;
}

/* Exercise 5. */

/* Normalize the n doubles in x[]. 
 * This function assumes that parameter n is >= 2, and that at least
 * two of the values in x[] are different.
 */
void normalize(double x[], int n)
{
double maximum = maxi(x, n);
	double minimum = mini(x, n);

	for(int i = 0;  i < n; i++)
	{
		x[i] = (x[i] - minimum) / (maximum - minimum);
	}
}
