#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;


stack<double> s;
vector<string> exps;

void calculate(string op) {

  double op1,op2;

  op2=s.top();
  s.pop();

  op1=s.top();
  s.pop();

  if(op=="+") {

    s.push((double)(op1+op2));

  }

  else if(op=="-") {

    s.push((double)(op1-op2));

  }

  else if(op=="*") {

    s.push((double)(op1*op2));

  }

  else if(op=="/") {

    s.push((double)((double)op1/(double)op2));

  }

}

int main() {

  string buf;

  char* tp;


  while(getline(cin,buf)) {

    while(s.empty()==false) s.pop();

    exps.clear();

    tp=strtok((char*)buf.c_str()," ");

    while(tp!=NULL) {

      exps.push_back(tp);

      tp=strtok(NULL," ");

    }

    for(int i=0;i<exps.size();i++) {

      if(exps[i]=="+" || exps[i]=="-" || exps[i]=="*" || exps[i]=="/") calculate(exps[i]);

      else s.push(atof(exps[i].c_str()));

    }

    printf("%6f\n",s.top());

  }


  return 0;

}
