#include <iostream>
#include <iomanip>
using namespace std;

const int LIMIT = 999;

void divider(const int limit)
{
  for (int loop = 0; loop < limit; loop++)
  {
    cout << "=";
  }

  cout << "\n";
}

string pad(const int value, const unsigned precision)
{
  ostringstream oss;
  oss << setw(precision) << setfill('0') << value;

  return oss.str();
}

typedef struct
{
  int number;
  string name, address, position, religion, dob, workstart, workunit;
} Biodata;

typedef struct
{
  string street, city;
  int postal;
} Address;

typedef struct
{
  int date, month, year;
} Date;

int main()
{
  Biodata biodata[LIMIT];
  Address address[LIMIT];
  Date dob[LIMIT], workstart[LIMIT];
  int total, loop = 0;

  cout << "Masukkan jumlah data : ";
  cin >> total;

  divider(55);
  for (loop; loop < total; loop++)
  {
    cout << "Masukkan NIP\t\t\t: ";
    cin >> biodata[loop].number;

    cin.ignore(1, '\n');
    cout << "Masukkan Nama\t\t\t: ";
    getline(cin, biodata[loop].name);

    cout << "Masukkan Alamat\t\t\t:\n";

    cout << ">> Masukkan Jalan\t\t: ";
    getline(cin, address[loop].street);

    cout << ">> Masukan Kode Pos\t\t: ";
    cin >> address[loop].postal;

    cout << ">> Masukan Kota\t\t\t: ";
    cin >> address[loop].city;

    biodata[loop].address = address[loop].street;
    biodata[loop].address += ", ";
    biodata[loop].address += pad(address[loop].postal, 5);
    biodata[loop].address += " ";
    biodata[loop].address += address[loop].city;

    cin.ignore(1, '\n');
    cout << "Masukan Jabatan\t\t\t: ";
    getline(cin, biodata[loop].position);

    cout << "Masukan Agama\t\t\t: ";
    cin >> biodata[loop].religion;

    cout << "Masukan Tanggal Lahir\t\t:\n";

    cout << ">> Masukan Tanggal\t\t: ";
    cin >> dob[loop].date;

    cout << ">> Masukan Bulan (1-12)\t\t: ";
    cin >> dob[loop].month;

    cout << ">> Masukan Tahun\t\t: ";
    cin >> dob[loop].year;

    biodata[loop].dob = pad(dob[loop].date, 2);
    biodata[loop].dob += "-";
    biodata[loop].dob += pad(dob[loop].month, 2);
    biodata[loop].dob += "-";
    biodata[loop].dob += pad(dob[loop].year, 4);

    cout << "Masukan Tanggal Mulai Kerja\t:\n";

    cout << ">> Masukan Tanggal\t\t: ";
    cin >> workstart[loop].date;

    cout << ">> Masukan Bulan (1-12)\t\t: ";
    cin >> workstart[loop].month;

    cout << ">> Masukan Tahun\t\t: ";
    cin >> workstart[loop].year;

    biodata[loop].workstart = pad(workstart[loop].date, 2);
    biodata[loop].workstart += "-";
    biodata[loop].workstart += pad(workstart[loop].month, 2);
    biodata[loop].workstart += "-";
    biodata[loop].workstart += pad(workstart[loop].year, 4);

    cin.ignore(1, '\n');
    cout << "Masukan Unit Kerja\t\t: ";
    getline(cin, biodata[loop].workunit);

    divider(55);
  }

  divider(159);
  cout << "| No |";
  cout << "     NIP     ";
  cout << "|          Nama          |";
  cout << "              Alamat              ";
  cout << "|  Jabatan  |";
  cout << "  Agama  ";
  cout << "| Tanggal Lahir |";
  cout << " Tanggal Mulai Kerja ";
  cout << "|    Unit Kerja    |\n";
  divider(159);

  cout << "\n\n";

  for (loop = 0; loop < total; loop++)
  {
    cout << "| " << setiosflags(ios::left) << setw(3) << loop + 1 << "|";
    cout << " " << setiosflags(ios::left) << setw(12) << biodata[loop].number << "|";
    cout << " " << setiosflags(ios::left) << setw(23) << biodata[loop].name << "| ";
    cout << " " << setiosflags(ios::left) << setw(32) << biodata[loop].address << "|";
    cout << " " << setiosflags(ios::left) << setw(10) << biodata[loop].position << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << biodata[loop].religion << "|";
    cout << " " << setiosflags(ios::left) << setw(14) << biodata[loop].dob << "|";
    cout << " " << setiosflags(ios::left) << setw(20) << biodata[loop].workstart << "|";
    cout << " " << setiosflags(ios::left) << setw(17) << biodata[loop].workunit << "|\n";
  }

  divider(159);
  return 0;
}
