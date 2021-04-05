/*
Kelimelerin buyuk unlu uyumuna uyup uymadiğini bulan program


#include <stdio.h>
int isHarmonic(char array[], int m);
int main(void)
{
	char arr[20];
	int N, control = 0, i = 0;
	printf("Enter N:");
	scanf_s("%d", &N);
	printf("Enter your char array elements:");
	for (i = 0; i < N; i++)
	{
		scanf_s(" %c",&arr[i]);
	}
	control = isHarmonic(arr, N);
	if (control == 1) {
		printf("This char series is a Backness harmony.\n");
	}
	else if(control==0)
		printf("This char series is not a Backness harmony.\n");
}
int isHarmonic(char array[], int size)
{
	int i = 0,control=0,m=0;
	for (i = 0; i < size; i++) {
		if (array[i] == 'a' || array[i] == 'o' || array[i] == 'u') {
			for (m = i; m < size; m++) {                                                 //i'den başlasin ki her seferinde alttaki sayilari saymasin,zaten bulunduğu sayiya gelene kadar bir problem olsa parçadan çikardi.
				if (array[m] == 'e' || array[m] == 'i') {
					control = 1;
				}

			}
		}else if (array[i] == 'A' || array[i] == 'O' || array[i] == 'U') {
			for (m = i; m < size; m++) {
				if (array[m] == 'E' || array[m] == 'I') {
					control = 1;
				}

			}
		}
		else if (array[i] == 'e' || array[i] == 'i' ) {
			for (m =i; m < size; m++) {
				if (array[m] == 'a' || array[m] == 'o' || array[i] == 'u') {
					control = 1;
				}

			}
		}
		else if (array[i] == 'E' || array[i] == 'I') {
			for (m = i; m < size; m++) {
				if (array[m] == 'A' || array[m] == 'O' || array[i] == 'U') {
					control = 1;
				}

			}
		}
	}
	if (control == 1) {
		return (0);
	}
	else if (control==0)
		return(1);
}
*/
