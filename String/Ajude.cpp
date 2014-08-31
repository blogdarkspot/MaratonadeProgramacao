//https://www.urionlinejudge.com.br/judge/pt/problems/view/1367
#include<iostream>
#include<map>

using namespace std;

int main ()
{
    int n;

    while (cin >> n && n != 0){
       int s=0,p=0;
       map<string,int> tmp;
       while(n--){
            int tempo;
            string problem, judge;
            cin >> problem >> tempo >> judge;
            if( judge == "correct") {
                p += tempo + 20 * tmp[problem];
                s++;
            }
            else
                tmp[problem]+=1;
       }
       cout << s << " " << p << endl;

    }

    return 0;
}
