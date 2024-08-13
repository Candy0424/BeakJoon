#include <stdio.h>

int main(void) {
	
	int n = 0, a = 0, b = 0;

	char pr = "Case #: ";
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);

		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
}