#include <stdio.h>

void print_table_row(int p, int amount, double price, double price_total)
{
	printf("%6d  ", p);
	printf("%6d  ", amount);
	printf("%9.2f EUR ", price);
	printf("%9.2f EUR\n", price_total);
}

int main()
{
	int rechnungsposten;

	int amount[5];
	double price[5];

	int r;

	double sum = 0.0;

	do {
		printf("Rechnungsposten (min. 1, max. 5): ");
		scanf("%d", &rechnungsposten);
	} while (rechnungsposten < 1 || 5 < rechnungsposten);

	for (r = 0; r < rechnungsposten; ++r) {
		printf("Artikel %d/%d, Anzahl: ", r + 1, rechnungsposten);
		scanf("%d", &amount[r]);

		printf("Artikel %d/%d, Preis: ", r + 1, rechnungsposten);
		scanf("%lf", &price[r]);

		printf("Artikel %d/%d, Anzahl: %d, Preis: %lf\n", r + 1, rechnungsposten, amount[r], price[r]);
	}

	printf("Posten  Anzahl  Preis einzeln  Preis gesamt\n");
	for (r = 0; r < rechnungsposten; ++r) {
		print_table_row(r + 1, amount[r], price[r], amount[r] * price[r]);

		sum += amount[r] * price[r];
	}
	printf("Summe der Rechnung               %6.2f EUR\n", sum);
	printf("\n");

	return 0;
}
