#include <iostream>
#include <sstream>
#include <windows.h>
#include <string>
#include <iomanip>

using namespace std;

int NoID=1, gridRow=7;
string MasterData[10][7]={"Nomer","Nomer Ticket","Atas Nama","Asal","Tujuan","Keberangkatan","Jenis",
                         "1","19281928","Jhony Nitro","Surabaya","Gresik","23 Mei 2016 18:30","Bus",
                         " "," "," "," "," "," "," ",};
string findData;
string PilihanUser;
char Atasnama[20], AtasnamaTemp[20], keberangkatan[100], keberangkatanTEMP[100], Menu;
int Nomer;
string Ticket, Asal, Tujuan, jenis;

//== BEGIN Function Created by Moch. Fiqih B (Traverse, Menu, Tampilan Awal)
int ShowData(){
// Copas DISINI Fungsinya.
}

int tampilanAwal(){

}
//== END Function Created by Moch. Fiqih B (Traverse, Menu, Tampilan Awal)

// == BEGIN Function Created by Eva Astria (Create Data)  
int InsertData(){
    system("CLS");
    cin.ignore();
    cout << "Masukkan Atas Nama : "<< endl;
    cin.getline(Atasnama,20);
    cout << "Masukkan Keberangkatan :" << endl;
    cin.getline(keberangkatan,100);
    cout << "Masukkan Nomer Ticket : "<< endl;
    cin >> Ticket;
    cout << "Masukkan Asal :"<< endl;
    cin >> Asal;
    cout << "Masukkan Tujuan :" <<endl;
    cin >> Tujuan;
    cout << "Masukkan Jenis Kendaraan :"<< endl;
    cin >> jenis;
    cout << endl << endl;
    cout << "Detail data" << endl
         << "==================" << endl;
    cout << "Nomer Ticket : " << Ticket << endl
         << "Atas Nama : " <<Atasnama << endl
         << "Asal : " <<Asal << endl
         << "Tujuan : " <<Tujuan << endl
         << "Keberangkatan : " <<keberangkatan << endl
         << "Jenis " <<jenis << endl;
    cout << "Apakah anda yakin ingin menyimpan data? Y/N : ";
    cin >> PilihanUser;
    if ((PilihanUser=="Y")||(PilihanUser=="y")){
            Nomer= NoID+1;
            NoID++;
            stringstream ss;
            ss << Nomer;
            string number = ss.str();
            MasterData[NoID][0]=number;
            MasterData[NoID][1]=Ticket;
            MasterData[NoID][2]=string(Atasnama);
            MasterData[NoID][3]=Asal;
            MasterData[NoID][4]=Tujuan;
            MasterData[NoID][5]=string(keberangkatan);
            MasterData[NoID][6]=jenis;
    }else if((PilihanUser=="N")||(PilihanUser=="n")){
    system("CLS");
    }
};
// == end Function Created by Eva Astria (Create Data)

// == Begin Function Created by Virnanda Dwita 16053017(Find DATA)
char MenuCari;

int CariData(){
      cout << "Masukkan Kode Ticket : ";
    cin >> findData;
        for(int x=0; x<=NoID; x++){
            if(findData==MasterData[x][1]){
                Nomer = atoi(MasterData[x][0].c_str());
                Ticket= MasterData[x][1];
                string AtasNamaAja = MasterData[x][2];
                char *Atasnamabaru = new char[AtasNamaAja.length()+1];
                strcpy(Atasnamabaru, AtasNamaAja.c_str());
                strcpy(Atasnama, Atasnamabaru);
                Asal= MasterData[x][3];
                Tujuan=MasterData[x][4];
                string keberangkatanAja = MasterData[x][5];
                char *keberangkatanbaru = new char[keberangkatanAja.length()+1];
                strcpy(keberangkatanbaru, keberangkatanAja.c_str());
                strcpy(keberangkatan, keberangkatanbaru);
                jenis= MasterData[x][6];
                cout << "Data ditemukan." << endl
                     << "Apa yang ingin anda operasikan ?" << endl
                     << "1. Edit" << endl
                     << "2. Hapus" << endl
                     << "Masukkan Q untuk kembali kemenu awal." << endl << endl
                     << "Masukkan kode menu : ";
// == end Function Created by Virnanda dwita (Find DATA)
  

// == BEGIN Function Created by Gabriella Stephanie (UPDATE dan DELETE)
                     cin >> MenuCari;
                switch(MenuCari){
                    case '1':
                                            cin.ignore();
                        cout << "Masukkan Atas Nama : "<< endl;
                        cin.getline(Atasnama,20);
                        cout << "Masukkan Keberangkatan :" << endl;
                        cin.getline(keberangkatan,100);
                        cout << "Masukkan Nomer Ticket : "<< endl;
                        cin >> Ticket;
                        cout << "Masukkan Asal :"<< endl;
                        cin >> Asal;
                        cout << "Masukkan Tujuan :" <<endl;
                        cin >> Tujuan;
                        cout << "Masukkan Jenis Kendaraan :"<< endl;
                        cin >> jenis;
                        cout << endl << endl;
                        cout << "Detail data" << endl
                             << "==================" << endl;
                        cout << "Nomer Ticket : " << Ticket << endl
                             << "Atas Nama : " <<Atasnama << endl
                             << "Asal : " <<Asal << endl
                             << "Tujuan : " <<Tujuan << endl
                             << "Keberangkatan : " <<keberangkatan << endl
                             << "Jenis " <<jenis << endl;
                        cout << "Apakah anda yakin ingin menyimpan data? Y/N : ";
                        cin >> PilihanUser;
                        if ((PilihanUser=="Y")||(PilihanUser=="y")){
                                MasterData[x][1]=Ticket;
                                MasterData[x][2]=string(Atasnama);
                                MasterData[x][3]=Asal;
                                MasterData[x][4]=Tujuan;
                                MasterData[x][5]=string(keberangkatan);
                                MasterData[x][6]=jenis;
                                system("CLS");
                                cout << "Data Berhasil diupdate."; system("pause");
                                tampilanAwal();
                        }else if((PilihanUser=="N")||(PilihanUser=="n")){
                        tampilanAwal();
                        break;
                    case '2':
                       if (NoID==0){
                                NoID=NoID-1;
                                system("CLS");
                                cout << "Data Berhasil Dihapus";
                                system("pause");
                                tampilanAwal();
                            }else{
                                for (int y=x; y<=NoID; y++){
                                        int noNomer= y;
                                        stringstream sss;
                                        sss << noNomer;
                                        string nonumber = sss.str();
                                    MasterData[y][1]=MasterData[y+1][1];
                                    MasterData[y][2]=MasterData[y+1][2];
                                    MasterData[y][3]=MasterData[y+1][3];
                                    MasterData[y][4]=MasterData[y+1][4];
                                    MasterData[y][5]=MasterData[y+1][5];
                                    MasterData[y][6]=MasterData[y+1][6];
                                    MasterData[y][0]=nonumber;
                                }NoID=NoID-1;system("CLS");cout << "Data Berhasil Dihapus";system("pause");tampilanAwal();
                            }
                        break;
// == END Function Created by Gabriella Stephanie (UPDATE dan DELETE)

                    case 'Q'||'q':
                        tampilanAwal();
                        break;
                }
}

int main()
{
    do{
        tampilanAwal();
        cin >> Menu;
        switch(Menu){
            case '1':
  InsertData();
                break;
            case '2':
               CariData();
                break;
            case '3':
                 ShowData();
                break;
            case 'E'||'e':
                return 0;
        }
    }while (Menu!='E');
}
