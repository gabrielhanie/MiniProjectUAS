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
    // Copas DISINI Fungsinya.
};
// == end Function Created by Eva Astria (Create Data)

// == Begin Function Created by Virnanda Dwita (Find DATA)
char MenuCari;

int CariData(){
    // Copas DISINI Fungsinya.
// == end Function Created by Virnanda dwita (Find DATA)

// == BEGIN Function Created by Gabriella Stefanni (UPDATE dan DELETE)
                     cin >> MenuCari;
                switch(MenuCari){
                    case '1':
                        // Copas DISINI Fungsinya.
                        break;
                    case '2':
                            // Copas DISINI Fungsinya.
                        break;
// == END Function Created by Gabriella Stefany (UPDATE dan DELETE)

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
                
                break;
            case '2':
                
                break;
            case '3':
                
                break;
            case 'E'||'e':
                return 0;
        }
    }while (Menu!='E');
}
