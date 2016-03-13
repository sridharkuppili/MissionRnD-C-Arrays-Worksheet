/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
void sort(int *Arr, int len);
int removeArrayDuplicates(int *Arr, int len)
{
	if (Arr == NULL || len < 0)
		return -1;

	sort(Arr, len);
	int i, j, k;
	for (i = 0; i < len - 1; i++)
	{
		if (Arr[i] == Arr[i + 1])
		{
			for (k = i + 1; k < len; k++)
			{
				Arr[k - 1] = Arr[k];
			}
			len--;
		}
	}



	return len;

}

void sort(int *Arr, int len)
{

	int i, j, tmp;

	for (i = 0; i<len; i++)
	{
		for (j = 0; j<len - 1; j++)

		{
			if (Arr[j]>Arr[j + 1])
			{
				tmp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = tmp;
			}
		}
	}



}




