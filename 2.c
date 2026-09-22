#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
    const float WIDTH_CM = 80.0;
    const float CM_TO_METERS = 100.0;

    setlocale(LC_CTYPE, "RUS");

    float price_per_sqm;
    float length_m;

    printf("Введите цену ткани за квадратный метр (B руб): ");
    scanf("%f", &price_per_sqm);

    printf("Введите длину куска ткани (x метров): ");
    scanf("%f", &length_m);

    float width_m = WIDTH_CM / CM_TO_METERS; // Вычисляем ширину в метрах (80 см = 0.8 м)
    double area = length_m * width_m; // Вычисляем площадь куска ткани в кв. метрах
    double total_cost = area * price_per_sqm; // Вычисляем итоговую стоимость

    printf("\nРАСЧЕТ СТОИМОСТИ ТКАНИ\n");
    printf("========================================\n\n");
    printf("УСЛОВИЯ:\n");
    printf("-- Цена за кв. метр: %.2f руб.\n", price_per_sqm);
    printf("-- Длина куска: %.2f м\n", length_m);
    printf("-- Ширина куска: %.0f см (%.2f м)\n\n", WIDTH_CM, width_m);

    printf("РАСЧЕТ:\n");
    printf("-- Площадь куска ткани: %.2f м * %.2f м = %.2f кв. м\n",
        length_m, width_m, area);
    printf("-- Стоимость куска: %.2f кв. м * %.2f руб/кв.м = %.2f руб.\n",
        area, price_per_sqm, total_cost);
    printf("========================================\n");
    printf("ИТОГОВАЯ СТОИМОСТЬ: %.2f руб.\n", total_cost);

    return 0;
}