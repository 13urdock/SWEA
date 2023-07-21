#include <iostream>
#include <vector>
using namespace std;

int main() {
    //2차원 벡터 생성 -> 첫째줄부터 10번째줄까지 적기
    vector < vector <int> >v(10, vector<int>(10, 1));//1로 초기화

    for (int j = 2; j <= 9; j++) {      //셋째줄부터 숫자 지정
        for (int k = 1; k < j; k++) {   //첫번째, 마지막 원소는 1이니까 제외하기
            v[j][k] = v[j - 1][k - 1] + v[j - 1][k]; //오른쪽 위, 왼쪽 위 숫자 더해서 저장
        }
    }

    int T, N;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        cin >> N;
        cout << '#' << i << '\n';

        //N줄만큼 프린트
        for (int j = 0; j < N; j++) {   //0: 1st line
            for (int k = 0; k <= j; k++) {
                cout << v[j][k] << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
