#include <iostream>
#include <vector>
#include "parkir.cpp"

int main()
{
    int jumlah_kendaraan, kapasitas_parkir;
    std::cin >> jumlah_kendaraan >> kapasitas_parkir;

    Parkir tekkom(kapasitas_parkir);
    for (int i = 0; i < jumlah_kendaraan; i++)
    {
        int waktuDatang, waktuPergi;
        std::cin >> waktuDatang >> waktuPergi;

        if ((waktuDatang >= 24 && waktuPergi <= 1))
        {
            std::cout << "Maintenance" << std::endl;
            return 0;
        }

        tekkom.tambahKendaraan(waktuDatang, waktuPergi);
    }

    std::string hasil = tekkom.cek_slotParkir();
    std::cout << hasil << std::endl;

    return 0;
}
