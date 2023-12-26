
#include "../../ft_printf/ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int len;
	int n;
	int *ptr;

	n = 4321;
	ptr = &n;

	printf("Characters\n");
	len = ft_printf("Cust =>\t%cXXX%ca%c", 'a', 'b', '3');
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\t%cXXX%ca%c", 'a', 'b', '3');
	printf("\tlen: %i\n\n", len);

	printf("Characters & numbers combination\n");
	len = ft_printf("Cust =>\t%c%%c%sc%i%d%c", 'x', "string", 1234, 321, 'y');
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\t%c%%c%sc%i%d%c", 'x', "string", 1234, 321, 'y');
	printf("\tlen: %i\n\n", len);

	printf("Numbers, type d & i\n");
	len = ft_printf("Cust =>\t%ia%ib%dc", 123, 456, 789);
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\t%ia%ib%dc", 123, 456, 789);
	printf("\tlen: %i\n\n", len);


	len = ft_printf("Cust =>\t%ia%ib%dc", -1, -10, -99);
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\t%ia%ib%dc", -1, -10, -99);
	printf("\tlen: %i\n\n", len);

	printf("Strings combination\n");
	len = ft_printf("Cust =>\tnon_\"%s\"_non_\"%s\"", "var 1", "var2@ñ");
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\tnon_\"%s\"_non_\"%s\"", "var 1", "var2@ñ");
	printf("\tlen: %i\n\n", len);


	len = ft_printf("Cust =>\t\"%s\"", NULL);
	printf("\tlen: %i\n", len);
	//len = printf("Stad =>\t\"%s\"", NULL);
	//printf("\tlen: %i\n\n", len);

	printf("Unsigned int\n");
	len = ft_printf("Cust =>\t%u", 0);
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\t%lu", 0);
	printf("\tlen: %i\n\n", len);
	len = ft_printf("Cust =>\t%u", 4294967295);
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\t%lu", 4294967295);
	printf("\tlen: %i\n\n", len);

	printf("Hexadecimal base\n");
	len = ft_printf("Cust =>\t%i to hex =>\t\t%x", n, n);
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\t%i to hex =>\t\t%x", n, n);
	printf("\tlen: %i\n\n", len);

	printf("Hexadecimal base(uppercase)\n");
	len = ft_printf("Cust =>\t%i to hex =>\t%X", n, n);
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\t%i to hex =>\t%X", n, n);
	printf("\tlen: %i\n\n", len);

	printf("Pointer address\n");
	len = ft_printf("Cust =>\t%p", ptr);
	printf("\tlen: %i\n", len);
	len = printf("Stad =>\t%p", ptr);
	printf("\tlen: %i\n\n", len);


	len = ft_printf("Cust =>\t%p", __LONG_MAX__);
	printf("\tlen: %i\n", len);
	//len = printf("Stad =>\t%p", __LONG_MAX__);
	//printf("\tlen: %i\n\n", len);

	printf("Error test (return -1)\n");
	ft_printf("Unsigned int => %u", -2);
}