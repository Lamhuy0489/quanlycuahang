#include <iostream>
#include <vector>
using namespace std;

struct SanPham{
    string tenSanPham;
    int giaBan;
    int soLuongBan;

};

void NhapMatHang(vector<SanPham> &sp,int soMatHang){
    cin.ignore();
    for(int i = 0; i < soMatHang;++i){
        SanPham sanPhamThem;

        cout << "Nhap ten san pham: ";
        getline(cin,sanPhamThem.tenSanPham);
        cout << "Nhap gia ban: ";
        cin >> sanPhamThem.giaBan;
        cout << "Nhap so luong ban duoc trong M ngay: ";
        cin >> sanPhamThem.soLuongBan;
        cin.ignore();
        sp.push_back(sanPhamThem);
    }
}

int main() {
    cout << "-----------------------Quan ly cua hang-----------------------\n";

    vector<SanPham> sp;
    int choice ;
    do{
        cout << "Nhap lua chon de thuc hien chuc nang\n";
        cout << "   1.Nhap mat hang\n";
        cout << "   2.Xem toan bo\n";
        cout << "   3.Tim kiem thong tin mat hang\n";
        cout << "   4.Xoa thong tin mat hang\n";
        cout << "   5.Thong ke mat hang\n";
        cout << "   0.Thoat chuong trinh\n";
        cin >> choice;

        switch(choice) {
            case 1:
                int soMatHang;
                cout << "Nhap so mat hang :";cin >> soMatHang;
                NhapMatHang(sp,soMatHang);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                break;

        }
    } while (choice==6);
    return 0;
}
