/* +++++++++++++++++++++++++++ */
/*
 *  Author:			zzz
 *  FileType:		C source code
 *  Environment:	Linux |  Ubuntu
 *  Tool:			Vim | Gcc
 *  Create time:    2019-05-23 17:19
 *  Description:    Automatic Generation
 */
/* +++++++++++++++++++++++++++++ */

#include <stdio.h>

#define LEN 8
int a[LEN] = { 5, 2, 4, 7, 1, 3, 2, 6 };

void merge(int start, int mid, int end)
{
	int n1 = mid - start + 1;
	int n2 = end - mid;
	int left[n1], right[n2];
	int i, j, k;
	for (i = 0; i < n1; i++) /* left holds
								a[start..mid] */
		left[i] = a[start+i];
	for (j = 0; j < n2; j++) /* right holds
								a[mid+1..end] */
		right[j] = a[mid+1+j];
	i = j = 0;

	for (k = start; i < n1 && j < n2; k++) {
		if (left[i] < right[j]) {
			a[k] = left[i];
			i++;
		} else {
			a[k] = right[j];
			j++;
		}
	}
	if (i < n1)
		for (; i<n1; i++){
			a[k] = left[i];
			k++;
		}
	if (j < n2)
		for (; j<n2; j++)
		{
			a[k] = right[j];
			k++;
		}
}
void my_sort(int start, int end)
{
	int mid;
	if (start < end) {
		mid = (start + end) / 2;
		printf("my_sort (%d-%d, %d-%d) %d %d %d %d\t %d %d %d %d\n",
				start, mid, mid+1, end,
				a[0], a[1], a[2], a[3], a[4],
				a[5], a[6], a[7]);
		my_sort(start, mid);
		my_sort(mid + 1, end);
		merge(start, mid, end);
		printf("merge (%d-%d, %d-%d) to %d %d %d %d\t %d %d %d %d\n",
				start, mid, mid+1, end,
				a[0], a[1], a[2], a[3], a[4],
				a[5], a[6], a[7]);
	}
}


int main(int argc, char *argv[])
{
	my_sort(0, LEN-1);
	return 0;
}

