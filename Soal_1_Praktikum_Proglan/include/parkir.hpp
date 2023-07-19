#ifndef PARKIR_HPP
#define PARKIR_HPP

#include <vector>
#include <string>

class Parkir
{
private:
    std::vector<int> slotParkir;
    int Kapasitas_parkir;

public:
    Parkir(int kps);
    void tambahKendaraan(int kedatangan, int kepergian);
    std::string cek_slotParkir();
};

#endif
