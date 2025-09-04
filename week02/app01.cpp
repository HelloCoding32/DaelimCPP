#include "invoice.h"

int main()
{

	Product product1("Table", 150.00);
	Product product2("Chair", 80.00);

	Invoice invoice(1001);  // aggregation X
	invoice.add(1, product1);  // use-a
	invoice.add(6, product2);  // use-a
	invoice.print();

	return 0;
}