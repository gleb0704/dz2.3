#include <stdio.h>
#include <locale.h>

void home_task2() {
    int l = 133;
    int n = 2;
    float L = 133;
    float N = 2;
    int k = 2;
    int m = 4;

    printf("����:\n%12d\n%12d\n%18s\n�����:\n%*s%+0*.*f\n",
        n, l, "__________", 8, "",  k + m + 2, m, N / L);
}
void home_task3() {
    float edge_length;
    float volume;
    float surface_area;

    printf("������� ����� ����� ����: ");
    scanf_s("%f", &edge_length);

    volume = edge_length * edge_length * edge_length;
    surface_area = 6 * (edge_length * edge_length);

    printf("����� ���� ����� %.0f\n", volume);
    printf("������� ������� ����������� ���� ����� %.0f\n", surface_area);
}
int main() {
    setlocale(LC_ALL, "RUS");
    home_task2();
    home_task3();
    return 0;
}
