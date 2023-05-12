#include <iostream>
using namespace std;

const int a = 6 + 3 + 12 + 20 - 4 * 5 + 10 + 5 + 2 + 3;
int dimas[a];  
int n;          

void input() {
    while (true) {
        cout << "\n------------------------------------------\n";
        cout << "\tMasukkan jumlah element array: ";
        cout << "\n------------------------------------------\n";
        cin >> n;
        if ((n > 0) && (n <= a))
            break;
        else
            cout << "\nArray harus bernilai minimum 1 dan maksimum " << a << "\n" <<endl;
    }

    // Menerima elemen-elemen array
    cout << "\n------------------------------------------\n";
    cout << "\tMasukkan element array \n";
    cout << "------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> dimas[i];
    }
}

void BinarySearch() {
    int awal = 0;             //2
    int akhir = n - 1;         //3
    int mid;                        
    bool found = false;             
    int item;
    cout << "\n------------------------------------------";
    cout << "\nMasukkan Element yang ingin di cari: "; //1
    cout << "\n------------------------------------------\n";
    cin >> item;

    while (awal <= akhir) {
        mid = (awal + akhir) / 2;    //4

        if (dimas[mid] == item) { //5  
            found = true;
            break;
        }
        else if (item < dimas[mid]) {   //6
            akhir = mid - 1;         
        }
        else {                //8           
            awal = mid + 1;         
        }
    }
    if (found) {
        cout << "\n==========================================\n";
        cout << "\t>>>>>>> "<<item << " Found <<<<<<<" << endl;
        cout << "==========================================";
    }
    else {
        cout << "\n==========================================\n";
        cout << "\t>>>>>>> " << item << " Not Found <<<<<<<<" << endl;
        cout << "==========================================";
    }
}

int main() {
    input();
    BinarySearch();

    return 0;
}
