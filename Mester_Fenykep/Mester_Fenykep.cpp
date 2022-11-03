#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> lista(N, vector<int>(3));

    for (int i = 0; i < N; i++)
    {
        lista[i][0] = i;
        cin >> lista[i][1] >> lista[i][2];
    }

    cerr << "rendezes elott:\n";
    for (auto& triplet : lista)
        cout << triplet[0] << ". " << triplet[1] << " - " << triplet[2] << endl;

    sort(lista.begin(), lista.end(), [](vector<int> tr1, vector<int> tr2) {return tr1[2] < tr2[2]; });

    cerr << "rendezes utan:\n";
    for (auto& triplet : lista)
        cout << triplet[0] << ". " << triplet[1] << " - " << triplet[2] << endl;

    cerr << "A fenykepezes idopontjai:\n";
    int elozovege = 0;
    int sum = 0;
    string ora = "";
    for (auto& triplet : lista)
    {

        if (elozovege <= triplet[1])
        {
            sum++;
            cerr<< triplet[2]<<endl;
        
            elozovege = triplet[2];
        }
    }
    cerr << sum;
    

}