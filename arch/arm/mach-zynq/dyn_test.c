#include<common.h>

static int g_test = 10;

static void test_func(void)
{
	printf("hello world");
}

static void (*p_func)(void) = NULL;

int dyn_test(void)
{

	g_test = 20;
	p_func = test_func;
	p_func();

	printf("%p",p_func);
	printf("%d\n", g_test);
	return 0;
}
