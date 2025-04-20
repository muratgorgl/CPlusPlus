#include <iostream>
#include <iomanip>
#include <fstream>
#include <limits>
#include <string>

using namespace std;

// Matris yazdırma fonksiyonu
void printMatrix(int** matrix, int rows, int cols, const string& name) {
    cout << "\n" << name << ":" << endl;
    for(int i = 0; i < rows; i++) {
        cout << "| ";
        for(int j = 0; j < cols; j++) {
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << "|" << endl;
    }
}

// Matris toplama fonksiyonu
int** addMatrices(int** matrix1, int** matrix2, int rows, int cols) {
    int** result = new int*[rows];
    for(int i = 0; i < rows; i++) {
        result[i] = new int[cols];
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

// Matris çarpma fonksiyonu
int** multiplyMatrices(int** matrix1, int rows1, int cols1, int** matrix2, int rows2, int cols2) {
    if(cols1 != rows2) {
        cout << "Hata! Matris çarpımı için birinci matrisin sütun sayısı ikinci matrisin satır sayısına eşit olmalıdır." << endl;
        return nullptr;
    }

    int** result = new int*[rows1];
    for(int i = 0; i < rows1; i++) {
        result[i] = new int[cols2];
        for(int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

// Matris girişi fonksiyonu
int** getMatrixInput(int rows, int cols, const string& matrixName) {
    int** matrix = new int*[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "\nLütfen " << matrixName << " elemanlarını giriniz (" << rows << "x" << cols << "):" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrixName << "[" << i+1 << "][" << j+1 << "]: ";
            
            while(!(cin >> matrix[i][j])) {
                cout << "Hata! Lütfen geçerli bir sayı giriniz: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    return matrix;
}

// Güvenli sayı girişi fonksiyonu
int getIntInput(const string& prompt) {
    int value;
    cout << prompt;
    
    while(!(cin >> value)) {
        cout << "Hata! Lütfen geçerli bir sayı giriniz: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    return value;
}

// Matris dosyaya yazma fonksiyonu
void saveMatrixToFile(int** matrix, int rows, int cols, const string& fileName) {
    ofstream outFile(fileName);
    
    if(!outFile) {
        cout << "Dosya açılamadı!" << endl;
        return;
    }
    
    outFile << rows << " " << cols << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            outFile << matrix[i][j] << " ";
        }
        outFile << endl;
    }
    
    outFile.close();
    cout << "Matris başarıyla '" << fileName << "' dosyasına kaydedildi." << endl;
}

// Matris belleğini temizleme fonksiyonu
void deleteMatrix(int** matrix, int rows) {
    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int choice = -1, rows1 = 0, cols1 = 0, rows2 = 0, cols2 = 0;
    int** matrix1 = nullptr;
    int** matrix2 = nullptr;
    int** result = nullptr;
    string fileName;
    
    // Giriş tamponunu başlangıçta temizlemeye gerek yok
    
    do {
        cout << "\n===== MATRİS İŞLEMLERİ MENÜSÜ =====" << endl;
        cout << "1. Matris Toplama" << endl;
        cout << "2. Matris Çarpma" << endl;
        cout << "3. Matrisi Dosyaya Kaydet" << endl;
        cout << "0. Çıkış" << endl;
        
        choice = getIntInput("Seçiminiz: ");
        
        switch(choice) {
            case 1: // Matris Toplama
                // Temizle
                if(matrix1) deleteMatrix(matrix1, rows1);
                if(matrix2) deleteMatrix(matrix2, rows2);
                if(result) deleteMatrix(result, rows1);
                
                rows1 = getIntInput("Birinci matrisin satır sayısını giriniz: ");
                cols1 = getIntInput("Birinci matrisin sütun sayısını giriniz: ");
                
                matrix1 = getMatrixInput(rows1, cols1, "Birinci Matris");
                
                rows2 = rows1; 
                cols2 = cols1; // Toplama için boyutlar aynı olmalı
                
                matrix2 = getMatrixInput(rows2, cols2, "İkinci Matris");
                
                result = addMatrices(matrix1, matrix2, rows1, cols1);
                
                printMatrix(matrix1, rows1, cols1, "Birinci Matris");
                printMatrix(matrix2, rows2, cols2, "İkinci Matris");
                printMatrix(result, rows1, cols1, "Toplam Matris");
                break;
                
            case 2: // Matris Çarpma
                // Temizle
                if(matrix1) deleteMatrix(matrix1, rows1);
                if(matrix2) deleteMatrix(matrix2, rows2);
                if(result) deleteMatrix(result, rows1);
                
                rows1 = getIntInput("Birinci matrisin satır sayısını giriniz: ");
                cols1 = getIntInput("Birinci matrisin sütun sayısını giriniz: ");
                
                matrix1 = getMatrixInput(rows1, cols1, "Birinci Matris");
                
                rows2 = getIntInput("İkinci matrisin satır sayısını giriniz: ");
                cols2 = getIntInput("İkinci matrisin sütun sayısını giriniz: ");
                
                matrix2 = getMatrixInput(rows2, cols2, "İkinci Matris");
                
                result = multiplyMatrices(matrix1, rows1, cols1, matrix2, rows2, cols2);
                
                if(result) {
                    printMatrix(matrix1, rows1, cols1, "Birinci Matris");
                    printMatrix(matrix2, rows2, cols2, "İkinci Matris");
                    printMatrix(result, rows1, cols2, "Çarpım Matrisi");
                }
                break;
                
            case 3: // Dosyaya Kaydet
                if(result) {
                    cout << "Dosya adını giriniz: ";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Sadece burada temizleyelim
                    getline(cin, fileName);
                    
                    if(fileName.empty()) {
                        fileName = "matrix_output.txt";
                        cout << "Dosya adı boş, varsayılan olarak 'matrix_output.txt' kullanılacak." << endl;
                    }
                    
                    if(rows1 > 0 && cols2 > 0) {
                        saveMatrixToFile(result, rows1, (choice == 1) ? cols1 : cols2, fileName);
                    } else {
                        saveMatrixToFile(result, rows1, cols1, fileName);
                    }
                } else {
                    cout << "Kaydedilecek matris sonucu bulunamadı!" << endl;
                }
                break;
                
            case 0: // Çıkış
                cout << "Program sonlandırılıyor..." << endl;
                break;
                
            default:
                cout << "Geçersiz seçim! Lütfen tekrar deneyin." << endl;
        }
    } while(choice != 0);
    
    // Belleği temizle
    if(matrix1) deleteMatrix(matrix1, rows1);
    if(matrix2) deleteMatrix(matrix2, rows2);
    if(result) deleteMatrix(result, result ? rows1 : 0);
    
    return 0;
}