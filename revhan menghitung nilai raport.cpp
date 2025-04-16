#include <iostream>
int main() }
  float absensi, tugas, pas, uas, nilaiakhir;
  
  printf("\n        MENENTUKAN NILAI SISWA/SISWI");
  printf("\n  -----------------------------------------");
  printf("\n MASUKAN NILAI ABSENSI = ");
  scanf("%f", &absensi);
  printf("   MASUKAN NILAI TUGAS = ");
  scanf("%f", &tugas);
  printf("   MASUKAN NILAI PAS = ");
  scanf("%f", &pas);
  printf("   MASUKAN NILAI UAS = ");
  scanf("%f", &uas);
  
  nilaiakhir = (0.1 * absensi)+(0.2 * tugas)+(0.3 * pas)+(0.4 * uas);
  printf("   -------------------------------------------------");
  printf("\n NILAI AKHIR = %.2f\n", nilaiakhir);
  
  if (nilaiakhir>=99){
        printf("  NILAI HURUF = A+");
  }
  else if (nilaiakhir>=90){
        printf("  NILAI HURUF = A");
  }
  else if (nilaiakhir>=80){
        printf("  NILAI HURUF = B");
  }
  else if (nilaiakhir>=70){
        printf("  NILAI HURUF = C");
  }
  else if (nilaiakhir>=60){
        printf("  NILAI HURUF = D");
  }
  else{
        printf("  NILAI HURUF = E");
  }
  main()
  

}



