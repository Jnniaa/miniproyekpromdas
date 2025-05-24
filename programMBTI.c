#include <stdio.h>

int main() {
    int E = 0, I = 0;
    int S = 0, N = 0;
    int T = 0, F = 0;
    int J = 0, P = 0;

    char jawaban;
    int i;

    const char *pertanyaan[8] = {
        "Anda lebih suka bekerja:\nA) Dalam tim\nB) Sendirian\nJawaban Anda: ",      //I/E
        "Di sebuah kegiatan, Anda:\nA) Berinteraksi dengan banyak orang, termasuk orang asing\nB) Berinteraksi dengan beberapa teman dekat\nJawaban Anda: " ,  //I/E
        "Anda percayakan:\nA) Pengalaman\nB) Insting\nJawaban Anda:",            // S/N
        "Saat belajar, Anda lebih memilih:\nA) Contoh praktis\nB) Teori dan konsep\nJawaban Anda: ", // S/N
        "Anda membuat keputusan berdasarkan:\nA) Logika\nB) Perasaan\nJawaban Anda:", // T/F
        "Dalam suatu perselisihan Anda:\nA) Berpegang pada fakta\nB) Mempertimbangkan perasaan orang lain\nJawaban Anda: ", // T/F
        "Jadwal harian Anda adalah:\nA) Terencana dan terorganisir\nB) Fleksibel dan spontan\nJawaban Anda: ", // J/P
        "Anda lebih suka:\nA) Menyelesaikan tugas lebih awal\nB) Tetap membuka pilihan\nJawaban Anda: " // J/P
    };

   // Kategori yang sesuai dengan pertanyaan: // 0 = E/I, 1 = S/N, 2 = T/F, 3 = J/P
    int kategori[8] = {0, 0, 1, 1, 2, 2, 3, 3};

    for (i = 0; i < 8; i++) {
        do {
            printf("%s", pertanyaan[i]);
            scanf(" %c", &jawaban);
            if (jawaban != 'A' && jawaban != 'B' && jawaban != 'a' && jawaban != 'b') {
                printf("Pilih salah satu jawaban!\n");
            }
        } while (jawaban != 'A' && jawaban != 'B' && jawaban != 'a' && jawaban != 'b');

        if (jawaban >= 'a') {
            jawaban -= 32;
        }

        switch (kategori[i]) {
            case 0: // E/I
                if (jawaban == 'A') E++;
                else I++;
                break;
            case 1: // S/N
                if (jawaban == 'A') S++;
                else N++;
                break;
            case 2: // T/F
                if (jawaban == 'A') T++;
                else F++;
                break;
            case 3: // J/P
                if (jawaban == 'A') J++;
                else P++;
                break;
        }
    }

    printf("\nTipe MBTI kamu adalah: ");
    printf("%c", (E >= I) ? 'E' : 'I');
    printf("%c", (S >= N) ? 'S' : 'N');
    printf("%c", (T >= F) ? 'T' : 'F');
    printf("%c\n", (J >= P) ? 'J' : 'P');

    return 0;
}

