#include <iostream>
#include <map>
using namespace std;
int main(void){

    int boyut = 6;
    int N;
    int matrix[100][100] = { 0 };

    for (int i = 0; i < boyut; i++)
        for (int j = 0; j < boyut; j++)
        {
            matrix[i][j] = rand() % 2;
        }

    int i, j;
    for (i = 0; i < boyut; i++)
        for (j = 0; j < boyut; j++)
            if (matrix[i][j] != matrix[j][i]) {
                matrix[i][j] = 1;
                matrix[j][i] = 1;

            }
    for (i = 0; i < boyut; i++)
        for (j = 0; j < boyut; j++)
            if (i == j) {
                matrix[i][j] = 0;

            }

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int  flag = 0;
    for (i = 0; i < boyut; i++)
        for (j = 0; j < boyut; j++)
            if (matrix[i][j] != matrix[j][i]) {
                flag = 1;
                break;
            }
    if (!flag)
        printf("Matris Simetriktir\n");
    else
        printf("Matris Simetrik Degildir\n");


    int dizi[100], a = 0;
    int satir1 = 0;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            if (matrix[i][j] == 1)
                satir1++;
        }
        //cout << satir1;

        dizi[a++] = satir1;

        satir1 = 0;

    }
    cout << endl << "Dizi:";
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";

    cout << endl << endl;
    float degree;

    std::map<int, int> bar;
    /* for (auto const& f : dizi)
        bar[f]++;

    for (auto const& b : bar) {
    std::cout << b.first << " degree is " << b.second * 1.0 / boyut << endl;
    }
    */
    int tekrar = 0;
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {

            if (dizi[i] == dizi[j])
                tekrar++;
        }
        cout << dizi[i] << " degree is: " << tekrar * 1.0 / boyut << endl;
        tekrar = 0;
    }


    //--------------------1. yeni gelen nodes

    int max = dizi[0], index = 0;

    for (i = 1; i < boyut; ++i)
    {
        if (dizi[i] > max) {
            max = dizi[i];
            index = i;
        }
    }
    boyut++;
    cout << endl << "1.iterasyondan sonra matris: " << endl;

    for (int i = 0; i < boyut; i++) {

        matrix[i][boyut - 1] = rand() % 2;
    }
    for (int j = 0; j < boyut; j++) {

        matrix[boyut - 1][j] = rand() % 2;

    }

    matrix[index][boyut - 1] = 1;
    cout << endl;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    dizi[99], a = 0, satir1 = 0;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            if (matrix[i][j] == 1)
                satir1++;
        }
        //cout << satir1;

        dizi[a++] = satir1;

        satir1 = 0;

    }
    cout << endl << "Dizi:";
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";

    cout << endl << endl;
    tekrar = 0;
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {

            if (dizi[i] == dizi[j])
                tekrar++;
        }
        cout << dizi[i] << " degree is: " << tekrar * 1.0 / boyut << endl;
        tekrar = 0;
    }
    //--------------------2. yeni gelen nodes
    max = dizi[0], index = 0;

    for (i = 1; i < boyut; ++i)
    {
        if (dizi[i] > max) {
            max = dizi[i];
            index = i;
        }
    }
    boyut++;
    cout << endl << "2.iterasyondan sonra matris: " << endl;

    for (int i = 0; i < boyut; i++) {

        matrix[i][boyut - 1] = rand() % 2;
    }
    for (int j = 0; j < boyut; j++) {

        matrix[boyut - 1][j] = rand() % 2;

    }

    matrix[index][boyut - 1] = 1;
    cout << endl;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    dizi[99], a = 0, satir1 = 0;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            if (matrix[i][j] == 1)
                satir1++;
        }
        //cout << satir1;

        dizi[a++] = satir1;

        satir1 = 0;

    }
    cout << endl << "Dizi:";
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";

    cout << endl << endl;
    tekrar = 0;
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {

            if (dizi[i] == dizi[j])
                tekrar++;
        }
        cout << dizi[i] << " degree is: " << tekrar * 1.0 / boyut << endl;
        tekrar = 0;
    }

    //--------------------3. yeni gelen nodes
    max = dizi[0], index = 0;

    for (i = 1; i < boyut; ++i)
    {
        if (dizi[i] > max) {
            max = dizi[i];
            index = i;
        }
    }
    boyut++;
    cout << endl << "3.iterasyondan sonra matris: " << endl;

    for (int i = 0; i < boyut; i++) {

        matrix[i][boyut - 1] = rand() % 2;
    }
    for (int j = 0; j < boyut; j++) {

        matrix[boyut - 1][j] = rand() % 2;

    }

    matrix[index][boyut - 1] = 1;
    cout << endl;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    dizi[99], a = 0, satir1 = 0;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            if (matrix[i][j] == 1)
                satir1++;
        }
        //cout << satir1;

        dizi[a++] = satir1;

        satir1 = 0;

    }
    cout << endl << "Dizi:";
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";

    cout << endl << endl;
    tekrar = 0;
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {

            if (dizi[i] == dizi[j])
                tekrar++;
        }
        cout << dizi[i] << " degree is: " << tekrar * 1.0 / boyut << endl;
        tekrar = 0;
    }

    //--------------------4. yeni gelen nodes
    max = dizi[0], index = 0;

    for (i = 1; i < boyut; ++i)
    {
        if (dizi[i] > max) {
            max = dizi[i];
            index = i;
        }
    }
    boyut++;
    cout << endl << "4.iterasyondan sonra matris: " << endl;

    for (int i = 0; i < boyut; i++) {

        matrix[i][boyut - 1] = rand() % 2;
    }
    for (int j = 0; j < boyut; j++) {

        matrix[boyut - 1][j] = rand() % 2;

    }

    matrix[index][boyut - 1] = 1;
    cout << endl;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    dizi[99], a = 0, satir1 = 0;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            if (matrix[i][j] == 1)
                satir1++;
        }
        //cout << satir1;

        dizi[a++] = satir1;

        satir1 = 0;

    }
    cout << endl << "Dizi:";
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";

    cout << endl << endl;
    tekrar = 0;
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {

            if (dizi[i] == dizi[j])
                tekrar++;
        }
        cout << dizi[i] << " degree is: " << tekrar * 1.0 / boyut << endl;
        tekrar = 0;
    }

    //--------------------5. yeni gelen nodes
    max = dizi[0], index = 0;

    for (i = 1; i < boyut; ++i)
    {
        if (dizi[i] > max) {
            max = dizi[i];
            index = i;
        }
    }
    boyut++;
    cout << endl << "5.iterasyondan sonra matris: " << endl;

    for (int i = 0; i < boyut; i++) {

        matrix[i][boyut - 1] = rand() % 2;
    }
    for (int j = 0; j < boyut; j++) {

        matrix[boyut - 1][j] = rand() % 2;

    }

    matrix[index][boyut - 1] = 1;
    cout << endl;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    dizi[99], a = 0, satir1 = 0;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            if (matrix[i][j] == 1)
                satir1++;
        }
        //cout << satir1;

        dizi[a++] = satir1;

        satir1 = 0;

    }
    cout << endl << "Dizi:";
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";

    cout << endl << endl;
    tekrar = 0;
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {

            if (dizi[i] == dizi[j])
                tekrar++;
        }
        cout << dizi[i] << " degree is: " << tekrar * 1.0 / boyut << endl;
        tekrar = 0;
    }

    //--------------------6. yeni gelen nodes
    max = dizi[0], index = 0;

    for (i = 1; i < boyut; ++i)
    {
        if (dizi[i] > max) {
            max = dizi[i];
            index = i;
        }
    }
    boyut++;
    cout << endl << "6.iterasyondan sonra matris: " << endl;

    for (int i = 0; i < boyut; i++) {

        matrix[i][boyut - 1] = rand() % 2;
    }
    for (int j = 0; j < boyut; j++) {

        matrix[boyut - 1][j] = rand() % 2;

    }

    matrix[index][boyut - 1] = 1;
    cout << endl;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    dizi[99], a = 0, satir1 = 0;

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++)
        {
            if (matrix[i][j] == 1)
                satir1++;
        }
        //cout << satir1;

        dizi[a++] = satir1;

        satir1 = 0;

    }
    cout << endl << "Dizi:";
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";

    cout << endl << endl;
    tekrar = 0;
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {

            if (dizi[i] == dizi[j])
                tekrar++;
        }
        cout << dizi[i] << " degree is: " << tekrar * 1.0 / boyut << endl;
        tekrar = 0;
    }


    int x;
    cin >> x;

}
