#include <iostream>
#include <string>

using namespace std;

class Node {

private:
  Node* left;
  Node* right;

public:
  Node() {
    this->left = NULL;
    this->right = NULL;
  }

  Node(string input) {
    
    int level = 0;

    for(int i = 0;i < input.length();i++) {

      if(input[i] == '(') level++;

      if(input[i] == ')') level--;

      if(level == 1 && input[i] == ',') {
	
	string leftString = input.substr(1, i-1);
	string rightString = input.substr(i+1, input.length()-i-2);

	if(leftString.length() == 0) {
	  this->left = NULL;
	}
	else {
	  this->left = new Node(leftString);
	}
	
	if(rightString.length() == 0) {
	  this->right = NULL;
	}
	else {
	  this->right = new Node(rightString);
	}

      }
	
    }
      
  }

  string toString() {

    string res = "";

    if(this == NULL) return "";

    res += "(";

    if(this->left != NULL) res += this->left->toString();
    
    res += ",";

    if(this->right != NULL) res += this->right->toString();

    res += ")";

    return res;

  }

  Node* intersection(Node* other) {

    Node* intersect = new Node();
    
    if(this->left != NULL && other->left != NULL) {

      intersect->left = this->left->intersection(other->left);

    }

    if(this->right != NULL && other->right != NULL) {

      intersect->right = this->right->intersection(other->right);

    }

    return intersect;

  }

  Node* union_(Node* other) {

    Node* uni = new Node();

    if(this->left != NULL && other->left != NULL) {

      uni->left = this->left->union_(other->left);

    }

    else {

      uni->left = this->left ? this->left : other->left;

      

    }

    if(this->right != NULL && other->right != NULL) {

      uni->right = this->right->union_(other->right);

    }

    else {

      uni->right = this->right ? this->right : other->right;


    }

    return uni;

  }

};

int main() {

  string op;
  string nodestr, otherstr;

  while(cin >> op >> nodestr >> otherstr) {

    Node* result;
    Node node(nodestr), other(otherstr);

    if(op == "i") {

      result = node.intersection(&other);

    }

    else if(op == "u") {

      result = node.union_(&other);

    }

    cout << result->toString() << endl;


  }

  return 0;

}
