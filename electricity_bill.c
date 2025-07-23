#include <stdio.h>

int main() {
    long long int phone_number, service_number;
    float pres_read, prev_read, units, c_gst, s_gst, total;

    printf("Enter the service number: ");
    scanf("%lld", &service_number);

    printf("Enter your phone number: ");
    scanf("%lld", &phone_number);

    printf("Enter the present reading: ");
    scanf("%f", &pres_read);

    printf("Enter the previous reading: ");
    scanf("%f", &prev_read);

    units = pres_read - prev_read;
    c_gst = 0.05 * units;
    s_gst = 0.05 * units;
    total = units + c_gst + s_gst;

    printf("The Service number is %lld", service_number);
    printf("\nThe Phone number is %lld", phone_number);
    printf("\nThe electricity bill is %f", total);

    return 0;
}
