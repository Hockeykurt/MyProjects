//_total=x1+y2**exp
//(id:_total)(assign_opr:=)(id:x1)(arth_opr:+)(id:y2)(arth_opr:**)(id:exp)
//(log_opr:and, or, ==, !=)

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string original = "      /* Hello People */ ABC _to ta l= x1 + y2 **ex p and z3 o r z4 == w1 != 2w2";
    string statement;
    int k = 0;
    int l = 0;

    for (int j = 0; j < original.length(); j++) {
        if (original[j] != ' ') {
            if (original[j] == '/' && original[j + 1] == '*')
            {
                do {
                    j++;
                } while (original[j] != '*' || original[j + 1] != '/');
                j++;
            }
            else {
                statement.insert(l, 1, original[j]);
                l++;
            }
        }
    }

    for (int i = 0; i < statement.length(); i++) {
        if ((statement[i] >= 'a' && statement[i] <= 'z') || (statement[i] >= 'A' && statement[i] <= 'Z') || (statement[i] == '_')) {
            do {
                k++;
            } while(statement[k]!='='&&(statement[k]!='!'||statement[k+1]!='=')&&statement[k]!='+'&&statement[k]!='*'&&statement[k]!='-'&&statement[k]!='/'&&statement[k]!='%'&&(statement[k]!='a'&&statement[k]!='A'||statement[k+1]!='n'&&statement[k+1]!='N'||statement[k+2]!='d'&&statement[k+2]!='D')&&(statement[k]!='o'&&statement[k]!='O'||statement[k+1]!='r'&&statement[k+1]!='R')&&statement[k]!=NULL);
            cout << "(id:";
            for (int w = i; w < k; w++) {
                cout << statement[w];
            }
            cout << ")";
            i = k;
        }
        if (statement[i]=='a' || statement[i]=='A' && statement[i+1] == 'n' || statement[i+1]=='N' && statement[i+2]=='d' || statement[i+2]=='D'){
            cout << "(log_opr:" << statement[i] << statement[i+1] << statement[i+2] << ")";
            i=i+2;
            k=k+2;
        }
        if (statement[i]=='o' || statement[i]=='O' && statement[i+1] == 'r' || statement[i+1]=='R'){
            cout << "(log_opr:" << statement[i] << statement[i + 1] << ")";
            i++;
            k++;
        }
        if (statement[i] == '+' || statement[i] == '-' || statement[i] == '/' || statement[i] == '%') {
            cout << "(arth_opr:" << statement[i] << ")";
        }
        if (statement[i] == '*' && statement[i + 1] != '*') {
            cout << "(arth_opr:" << statement[i] << ")";
        }
        if (statement[i] == '*' && statement[i + 1] == '*') {
            cout << "(arth_opr:" << statement[i] << statement[i + 1] << ")";
            i++;
            k++;
        }
        if (statement[i] == '=' && statement[i + 1] != '=') {
            cout << "(assign_opr:" << statement[i] << ")";
        }
        if ((statement[i] == '!' && statement[i + 1] == '=') || (statement[i] == '=' && statement[i + 1] == '=')) {
            cout << "(log_opr:" << statement[i] << statement[i + 1] << ")";
            i++;
            k++;
        }
        if(statement[i] >= '0' && statement[i] <= '9'){
            cout << endl << "ERROR: Doesn't Follow Identifier Rules";
            break;
        }
    }
        return 0;
}

