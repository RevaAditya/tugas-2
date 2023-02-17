#include <stdio.h>
#include <math.h>

int a, b;
int panjang, lebar, tinggi, jumlah;
float jumlahBagi, c, d;
int pilihanMenu;
char ulang;
double deg2rad(double derajat) {
    return derajat * acos(-1.0) / 180.0;
}

void pipoLondo (){
	do {
	printf("==========\n");
	printf("PingPoroLanSudo\n");
	printf("==========\n\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Pembagian\n");
	printf("4. Perkalian\n");
	printf("5. Back to Main Menu\n\n");

	printf("Pilih menu \t");
	scanf("%d", &pilihanMenu);
	system("cls");

	do {
        switch (pilihanMenu){
		case 1:
			printf("Masukkan angka pertama \t");
			scanf("%d", &a);
			printf("Masukkan angka kedua \t");
			scanf("%d", &b);
			jumlah = a + b;
			printf("\nHasil penjumlahan dari %d dan %d adalah %d", a, b, jumlah);
			printf("\nApa kamu ingin mengulang penjumlahan? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 2:
			printf("Masukkan angka pertama \t");
			scanf("%d", &a);
			printf("Masukkan angka kedua \t");
			scanf("%d", &b);
			jumlah = a - b;
			printf("\nHasil pengurangan dari %d dan %d adalah %d", a, b, jumlah);
			printf("\nApa kamu ingin mengulang pengurangan? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 3:
			printf("Masukkan angka pertama \t");
			scanf("%f", &c);
			printf("Masukkan angka kedua \t");
			scanf("%f", &d);
			jumlahBagi = c / d;
			printf("\nHasil pemebagian dari %2.f dan %2.f adalah %2.f", c, d, jumlahBagi);
			printf("\nApa kamu ingin mengulang pembagian? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 4:
			printf("Masukkan angka pertama \t");
			scanf("%d", &a);
			printf("Masukkan angka kedua \t");
			scanf("%d", &b);
			jumlah = a * b;
			printf("\nHasil perkalian dari %d dan %d adalah %d", a, b, jumlah);
			printf("\nApa kamu ingin mengulang perkalian? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 5:
			ulang = 5;
			break;
	}
    } while (ulang == 'y' || ulang == 'Y');
} while (ulang == 'n' || ulang == 'N');

}

void hitungSincostan (){
	do {
	printf("==========\n");
	printf("SinCosTan\n");
	printf("==========\n\n");
	printf("1. Sinus\n");
	printf("2. Cosinus\n");
	printf("3. Tangen\n");
	printf("4. Back to Main Menu\n\n");

	printf("Pilih menu \t");
	scanf("%d", &pilihanMenu);
	system("cls");

	double derajat, radian, sinus, cosinus, tangen;
	do {
        switch (pilihanMenu){
		case 1:
			printf("Masukkan angka untuk dihitung \t: ");
    		scanf("%lf", &derajat);
    		radian = deg2rad(derajat);
    		sinus = sin(radian);
    		printf("Hasil perhitungan sinus dari %2.lf: %lf\n", derajat, sinus);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 2:
			printf("Masukkan angka untuk dihitung \t: ");
    		scanf("%lf", &derajat);
    		radian = deg2rad(derajat);
    		cosinus = cos(radian);
    		printf("Hasil perhitungan cosinus dari %2.lf: %lf\n", derajat, cosinus);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 3:
			printf("Masukkan angka untuk dihitung \t: ");
    		scanf("%lf", &derajat);
    		radian = deg2rad(derajat);
    		tangen = tan(radian);
    		printf("Hasil perhitungan tangen dari %2.lf: %lf\n", derajat, tangen);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 4:
			ulang = 4;
			break;
	}
    } while (ulang == 'y' || ulang == 'Y');
} while (ulang == 'n' || ulang == 'N');

}

void kelilingBangundatar(){
	do {
	printf("====================\n");
	printf("Keliling Bangun Datar\n");
	printf("====================\n\n");
	printf("1. Persegi\n");
	printf("2. Trapesium\n");
	printf("3. Layang-layang\n");
	printf("4. Lingkaran\n");
	printf("5. Back to Main Menu\n\n");

	printf("Pilih menu \t");
	scanf("%d", &pilihanMenu);
	system("cls");

	int sisi;
    float sisiAtas, sisiBawah, sisiMiring, sisiSejajar, tinggi, jari_jari, diagonal1, diagonal2;
    float keliling_persegi, keliling_trapesium, keliling_layang_layang, keliling_lingkaran;
	do {
        switch (pilihanMenu){
		case 1:
			printf("Masukkan panjang sisi persegi: ");
			scanf("%d", &sisi);
    		keliling_persegi = 4 * sisi;
			printf("Keliling persegi: %.2f\n", keliling_persegi);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 2:
			printf("Masukkan panjang sisi atas trapesium: ");
    		scanf("%f", &sisiAtas);
    		printf("Masukkan panjang sisi bawah trapesium: ");
    		scanf("%f", &sisiBawah);
    		printf("Masukkan panjang sisi miring trapesium: ");
    		scanf("%f", &sisiMiring);
    		printf("Masukkan panjang sisi sejajar trapesium: ");
    		scanf("%f", &sisiSejajar);
			keliling_trapesium = sisiAtas + sisiBawah + sisiMiring + sisiSejajar;
			printf("Keliling trapesium: %.2f\n", keliling_trapesium);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 3:
			printf("Masukkan panjang diagonal 1 layang-layang: ");
			scanf("%f", &diagonal1);
			printf("Masukkan panjang diagonal 2 layang-layang: ");
			scanf("%f", &diagonal2);
			keliling_layang_layang = 2 * (diagonal1 + diagonal2);
			printf("Keliling layang-layang: %.2f\n", keliling_layang_layang);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 4:
			printf("Masukkan jari-jari lingkaran: ");
    		scanf("%f", &jari_jari);
			keliling_lingkaran = 2 * M_PI * jari_jari;
			printf("Keliling lingkaran: %.2f\n", keliling_lingkaran);;
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 5:
			ulang = 5;
			break;
	}
    } while (ulang == 'y' || ulang == 'Y');
} while (ulang == 'n' || ulang == 'N');

}

void luasBangundatar(){
	do {
	printf("====================\n");
	printf("Luas Bangun Datar\n");
	printf("====================\n\n");
	printf("1. Persegi\n");
	printf("2. Trapesium\n");
	printf("3. Layang-layang\n");
	printf("4. Lingkaran\n");
	printf("5. Back to Main Menu\n\n");

	printf("Pilih menu \t");
	scanf("%d", &pilihanMenu);
	system("cls");

	int sisiPersegi, alasTrapesium, tinggiTrapesium, diagonalSatu, diagonalDua;
    float jariLingkaran;
    float luasPersegi, luasTrapesium, luasLayang, luasLingkaran;
	do {
        switch (pilihanMenu){
		case 1:
			printf("Masukkan sisi persegi: ");
			scanf("%d", &sisiPersegi);
    		luasPersegi = sisiPersegi * sisiPersegi;
			printf("Luas persegi: %.2f\n", luasPersegi);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 2:
			printf("Masukkan alas trapesiumm: ");
    		scanf("%f", &alasTrapesium);
    		printf("Masukkan tinggi Trapesium: ");
    		scanf("%f", &tinggiTrapesium);
			luasTrapesium = 0.5 * alasTrapesium * tinggiTrapesium;
			printf("Luas trapesium: %.2f\n", luasTrapesium);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 3:
			printf("Masukkan diagonal 1: ");
			scanf("%f", &diagonalSatu);
			printf("Masukkan diagonal 2: ");
			scanf("%f", &diagonalDua);
			luasLayang = 0.5 * diagonalSatu * diagonalDua;
			printf("Luas layang-layang: %.2f\n", luasLayang);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 4:
			printf("Masukkan jari-jari lingkaran: ");
    		scanf("%f", &jariLingkaran);
			luasLingkaran =  M_PI * pow(jariLingkaran, 2);
			printf("Luas lingkaran: %.2f\n", luasLingkaran);;
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 5:
			ulang = 5;
			break;
	}
    } while (ulang == 'y' || ulang == 'Y');
} while (ulang == 'n' || ulang == 'N');

}

void volumeBangunruang(){
	do {
	printf("====================\n");
	printf("Volume Bangun Ruang\n");
	printf("====================\n\n");
	printf("1. Kubus\n");
	printf("2. Prisma\n");
	printf("3. Limas\n");
	printf("4. Bola\n");
	printf("5. Back to Main Menu\n\n");

	printf("Pilih menu \t");
	scanf("%d", &pilihanMenu);
	system("cls");

	int sisiKubus, tinggiPrisma, alasPrisma, tinggiLimas, alasLimas;
    float jariBola;
    float volumeKubus, volumePrisma, volumeLimas, volumeBola;
	do {
        switch (pilihanMenu){
		case 1:
			printf("Masukkan sisi kubus: ");
			scanf("%d", &sisiKubus);
    		volumeKubus = sisiKubus * sisiKubus * sisiKubus;
			printf("Volume kubus: %.2f\n", volumeKubus);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 2:
			printf("Masukkan tinggi prisma: ");
  			scanf("%d", &tinggiPrisma);
    		printf("Masukkan panjang alas prisma: ");
    		scanf("%d", &tinggiPrisma);
    		volumePrisma = tinggiPrisma*(0.5*alasPrisma*tinggiPrisma);
			printf("Volume prisma: %.2f\n", volumePrisma);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 3:
			printf("Masukkan tinggi limas: ");
    		scanf("%d", &tinggiLimas);
    		printf("Masukkan panjang alas limas: ");
    		scanf("%d", &alasLimas);
			volumeLimas = 0.33 * alasLimas * tinggiLimas;
			printf("Volume limas %.2f\n", volumeLimas);
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 4:
			printf("Masukkan jari-jari bola: ");
    		scanf("%f", &jariBola);
			volumeBola =  (4.0 / 3.0) * M_PI * pow(jariBola, 3);
			printf("Volume Bola: %.2f\n", volumeBola);;
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
			break;
		case 5:
			ulang = 5;
			break;
	}
    } while (ulang == 'y' || ulang == 'Y');
} while (ulang == 'n' || ulang == 'N');

}

void akarKuadrat() {
    double angka, akar;

    printf("Masukkan angka yang ingin dihitung akar kuadratnya: ");
    scanf("%lf", &angka);

    // Menghitung akar kuadrat
    akar = sqrt(angka);

    printf("Akar kuadrat dari %.2lf = %lf", angka, akar);
}

int main(){
	int menuPilihan;

	mainMenu:
	do {
	printf("==========\n");
	printf("KALKULATOR\n");
	printf("==========\n");
	printf("1. Pipolondo\n");
	printf("2. SinCosTan\n");
	printf("3. Aneka Bangun\n");
	printf("4. Akar Kuadrat\n");
	printf("5. Keluar\n");
	printf("==================\n\n");

	printf("Pilihan anda \t");
	scanf("%d", &menuPilihan);
	system("cls");

	do {
        switch (menuPilihan){
		case 1:
			pipoLondo();
		break;
		case 2:
			hitungSincostan();
		break;
		case 3:
			do {

			printf("==========\n");
			printf("Aneka Bangun\n");
			printf("==========\n");
			printf("1. Keliling\n");
			printf("2. Luas\n");
			printf("3. Volume Bangun Ruang\n");
			printf("4. Back to Main Menu\n");
			printf("==================\n\n");

			printf("Pilihan anda \t");
			scanf("%d", &menuPilihan);
			system("cls");

			do {
				switch(menuPilihan){
					case 1:
						kelilingBangundatar();
        				break;
        			case 2:
        				luasBangundatar();
        				break;
        			case 3:
        				volumeBangunruang();
        				break;
        			case 4:
        				goto mainMenu;
        				break;
				}
			} while (ulang == 'y' || ulang == 'Y');
		} while (ulang == 5);
		case 4:
			akarKuadrat();
			printf("\nApa kamu ingin mengulang? (y/n) ");
        	scanf(" %c", &ulang);
        	system("cls");
		break;
		case 5:
			printf("THANK YOU");
			system("exit");
	}
    } while (ulang == 'y' || ulang == 'Y');
} while (ulang == 'n' || ulang == 'N' || ulang == 5 || ulang == 4);
}
