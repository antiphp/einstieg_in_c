//#include <stdio.h>
//
//void print_table(float price)
//{
//	int amount;
//
//	printf("%5s",  "Anzahl");
//	printf("  ");
//
//	printf("%12s", "Preis gesamt");
//	printf("\n");
//	for (amount = 1; amount <= 5; ++amount) {
//		printf("%5d", amount);
//		printf("  ");
//		printf("%9.2f EUR", amount * price);
//		printf("\n");
//	}
//	printf("\n");
//}
//
//float average(float price_1, float price_2)
//{
//	float average = (price_1 + price_2) / 2;
//	return average;
//}
//
//int main()
//{
//	float price[3];
//
//	price[0] = 1.45;
//	price[1] = 0.85;
//	price[2] = 0.75;
//
//	print_table(price[0]);
//
//	print_table(price[1]);
//
//	printf("Durchschnittspreis von Apfel und Birne: %.2f EUR\n", average(price[0], price[1]));
//	printf("Durchschnittspreis von Birne und Banane: %.2f EUR\n", average(price[1], price[2]));
//	printf("\n");
//
//
//}
