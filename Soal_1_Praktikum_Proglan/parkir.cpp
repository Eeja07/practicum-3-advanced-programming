#include "include/parkir.hpp"

Parkir::Parkir(int kps)
{
    Kapasitas_parkir = kps; 
    slotParkir.resize(24, 0);
}

void Parkir::tambahKendaraan(int kedatangan, int kepergian)
{
    for (int j = kedatangan; j < kepergian; j++)
    {
        slotParkir[j]++;
    }
}

std::string Parkir::cek_slotParkir()
{
    for (int j = 0; j < 24; j++)
    {
        if (slotParkir[j] > Kapasitas_parkir)
        {
            return "Macet";
        }
    }
    return "Lancar";
}
