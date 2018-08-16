#include <stdio.h>
int dec2bin(int decimal) {
    int binary = 0,  // Output bilangan biner
        bit,         // Sebuah digit biner hasil modulo 2
        exp_10 = 1;  // 10^0, 10^1, 10^2 ...
                     // Pangkat 0, 1, 2, ... sesuai banyaknya digit biner
                     // Dimulai dengan nilai awal 10^0 = 1
    while(decimal > 0) {
        // Modulo 2 dari `decimal` menghasilkan sebuah digit biner
        bit = decimal % 2;
        // Masukkan digit biner `bit` ke dalam `binary`
        binary += exp_10 * bit;
        // Kerjakan `decimal / 2` dan masukkan hasil baginya ke `decimal`
        decimal /= 2;
        // Kalikan 10 untuk menaikkan pangkat dari 10.
        // 1   * 10 = 10^1 = 10
        // 10  * 10 = 10^2 = 100
        // 100 * 10 = 10^3 = 1000
        exp_10 *= 10;
    }
    return binary;
}
int main() {
    int decimal,decimal1, binary,binary1,hasil; 
    scanf("%d%d", &decimal,&decimal1);
    binary = dec2bin(decimal);
    binary1 = dec2bin(decimal1);
    hasil = binary+binary1;
    printf("%d" ,binary);
    printf("%d" ,binary1);
    
    
    return 0;
}
