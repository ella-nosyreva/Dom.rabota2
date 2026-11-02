#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    const float WIDTH_CM = 80.0;
    const float CM_TO_METERS = 100.0;

    setlocale(LC_CTYPE, "RUS");

    float price_per_sqm;
    float length_m;

    printf("Ââĺäčňĺ öĺíó ňęŕíč çŕ ęâŕäđŕňíűé ěĺňđ (B đóá): ");
    scanf("%f", &price_per_sqm);

    printf("Ââĺäčňĺ äëčíó ęóńęŕ ňęŕíč (x ěĺňđîâ): ");
    scanf("%f", &length_m);

    float width_m = WIDTH_CM / CM_TO_METERS;
    double area = length_m * width_m;
    double total_cost = area * price_per_sqm;

    printf("\nĐŔŃ×ĹŇ ŃŇÎČĚÎŃŇČ ŇĘŔÍČ\n");
    printf("========================================\n\n");
    printf("ÓŃËÎÂČß:\n");
    printf("-- Öĺíŕ çŕ ęâ. ěĺňđ: %.2f đóá.\n", price_per_sqm);
    printf("-- Äëčíŕ ęóńęŕ: %.2f ě\n", length_m);
    printf("-- Řčđčíŕ ęóńęŕ: %.0f ńě (%.2f ě)\n\n", WIDTH_CM, width_m);

    printf("ĐŔŃ×ĹŇ:\n");
    printf("-- Ďëîůŕäü ęóńęŕ ňęŕíč: %.2f ě * %.2f ě = %.2f ęâ. ě\n",
        length_m, width_m, area);
    printf("-- Ńňîčěîńňü ęóńęŕ: %.2f ęâ. ě * %.2f đóá/ęâ.ě = %.2f đóá.\n",
        area, price_per_sqm, total_cost);
    printf("========================================\n");
    printf("ČŇÎĂÎÂŔß ŃŇÎČĚÎŃŇÜ: %.2f đóá.\n", total_cost);

    return 0;
}
