#include <iostream>
using namespace std;

void Pattern01(int N) {
    cout << "Patter 01: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern02(int N) {
    cout << "Patter 02: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern03(int N) {
    cout << "Patter 03: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern04(int N) {
    cout << "Patter 04: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern05(int N) {
    cout << "Patter 05: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern06(int N) {
    cout << "Patter 06: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern07(int N) {
    cout << "Patter 07: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern08(int N) {
    cout << "Patter 08: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * (N - i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern09(int N) {
    cout << "Patter 09: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * (N - i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern10(int N) {
    cout << "Patter 10: " << endl;
    for (int i = 1; i <= 2 * N - 1; i++) {
        int stars = i;
        if (i > N)
            stars = 2 * N - i;
        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern11(int N) {
    cout << "Patter 11: " << endl;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (i - j + 1) % 2 << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern12(int N) {
    cout << "Patter 12: " << endl;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

void Pattern13(int N) {
    cout << "Patter 13: " << endl;
    int numb = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << numb++ << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

int main() {
    Pattern01(5);
    Pattern02(5);
    Pattern03(5);
    Pattern04(5);
    Pattern05(5);
    Pattern06(5);
    Pattern07(5);
    Pattern08(5);
    Pattern09(5);
    Pattern10(5);
    Pattern11(5);
    Pattern12(4);
    Pattern13(5);
    return 0;
}