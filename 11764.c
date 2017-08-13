/*-------------------------------------------------------
 * Tarea de Analisis de Algoritmos: 11764 - Jumping Mario
 * Fecha: 15-02-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t, n, i, j, k;
	int low, high;
	int heights[50];

	scanf("%d", &t);

	for (i = 0; i < t; i++) {
		low = 0;
		high = 0;
		scanf("%d", &n);
		for (j = 0; j < n; j++) {
			scanf("%d", &heights[j]);
		}
		for (k = 1; k < n; k++) {
			if (heights[k-1] < heights[k]) {
				high += 1;
			}
			if (heights[k-1] > heights[k]) {
				low += 1;
			}
		}
		printf("Case %d: %d %d\n", i+1, high, low);
	}
	return 0;
}
