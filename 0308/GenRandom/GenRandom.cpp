#include <iostream>

void print_array(const char* str, const int* list, int n)
{
    printf("%s = (", str);
    for (int i = 0; i < n; i++)
        printf(" %6d%s", list[i], (i < n - 1) ? "," : ")\n");
}

int main()
{
    srand((unsigned)time(NULL));

    int n = 10;
    int* list = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        list[i] = rand();
    print_array("랜덤 생성된 수", list, n);

    free(list);
}