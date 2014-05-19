#include <iostream>

using namespace std;

int main() {

  int b,r,g,c,s,t;

  int medals;


  while(cin >> b >> r >> g >> c >> s >> t) {

    if(b==0 && r==0 && g==0 && c==0 && s==0 && t==0) break;

    medals=100;

    //ビッグボーナス(1回につき計77枚のメダルを得る事ができ、総ゲーム数を6回消費する)
    medals+=77*b;
    t-=6*b;

    //レギュラーボーナス(1回につき計51枚のメダルを得ることができ、総ゲーム数を4回消費する)
    medals+=51*r;
    t-=4*r;

    //通常ゲーム中にブドウが揃う(1回につき計4枚のメダルを得ることができ、総ゲーム数を1回消費する)
    medals+=4*g;
    t-=g;

    //通常ゲーム中にチェリーが揃う(1回につき1枚メダルを取られ、総ゲーム数を1回消費する)
    medals-=c;
    t-=c;

    //スターが揃う(総ゲーム数を1回消費する)
    t-=s;
    
    //残りのゲームは全てスカ
    medals-=3*t;

    cout << medals << endl;

  }

  return 0;

}
    
