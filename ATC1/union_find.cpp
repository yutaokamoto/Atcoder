#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < int(n); i++)

// https://atcoder.jp/contests/atc001/tasks/unionfind_a の問題
// 未完成

/*struct node{
	int value;
	node *root = NULL;
	node *left_child = NULL;
	node *right_child = NULL;
};*/

/*struct UnionFind{
	vector<node> roots;
	UnionFind(int N){
		roots.resize(N);
		//iota(roots.begin(), roots.end(), 0);
		for(int i=0; i<N; i++){
			roots.at(i).value = i;
			roots.at(i).root = &roots.at(i);
		}
		//for(auto n : roots){cout << n.value << endl;}
	}
	/*bool dfs(node n, int x){
		stack<node*> Stack;
		Stack.push(n.right_child);
		Stack.push(n.left_child);
		Stack.push(&n);
		while(!Stack.empty()){
			node *n = Stack.top();
			Stack.pop();
			if(n==NULL){continue;}
			if(n->value==x){return true;}
			Stack.push(n->right_child);
			Stack.push(n->left_child);
		}
		return false;
	}
	bool dfs(node n, int x){
		if(n.value==x){return true;}
		if(n.right_child!=NULL){dfs(*n.right_child, x);}
		if(n.left_child!=NULL){dfs(*n.left_child, x);}
		return false;
	}
	node* find(int x){
		//cout << "find()" << endl;
		// 各木を深さ優先探索で探索し、xを含むものを見つける
		for(auto &i : roots){
			//cout << "\t根 : " << i.value << endl;
			// 木iにxが含まれるかどうか判定
			if(dfs(i, x)){return &i;}
		}
		node *n_null;
		return n_null;
	}
	node* find_vacant(node *n){
		if(n->left_child==NULL || n->right_child==NULL){return n;}
		find_vacant(n->left_child);
		find_vacant(n->right_child);
		node *n_null;
		return n_null;
	}
	void change_root(node *n, node *new_root){
		if(n==NULL){return;}
		n->root = new_root;
		if(n->left_child!=NULL){change_root(n->left_child, new_root);}
		if(n->right_child!=NULL){change_root(n->right_child, new_root);}
	}
	void union_trees(int x, int y){
		// 木(根)を1つずつ見てx, yが含まれる木の根をそれぞれ見つける
		node *tree_x = find(x);
		node *tree_y = find(y);
		// xを含む木とyを含む木を併合する
		if(tree_x==tree_y){return;}
		//// xを含む木の中で子を1つしか持たない or 子を持たないノードのうち最も高さの低いものにyを含む木を繋げる(right_child or left_child)
		node *vacant = find_vacant(tree_x);
		//cout << vacant->value << endl;
		if(vacant->left_child==NULL){vacant->left_child=tree_y;}
		else{vacant->right_child=tree_y;}
		//// yを含む木すべてのノードに対し、xを含む木の根を新たな根とする
		change_root(tree_y, tree_x);
		//// rootsからtree_yの削除
		int i = 0;
		for(auto n : roots){
			if(n.value<tree_y->value){i++;}
			else if(n.value==tree_y->value){break;}
		}
		roots.erase(roots.begin()+i);
		//for(auto n : roots){cout << n.value << endl;}
	}
	bool judge(int x, int y){
		node *tree_x = find(x);
		node *tree_y = find(y);
		if(tree_x==tree_y){return true;}
		return false;
	}
};*/

// 参考 : https://dai1741.github.io/maximum-algo-2012/docs/minimum-spanning-tree/

// 素集合データ構造
struct UnionFind
{
  // par[i]：データiが属する木の親の番号。i == par[i]のとき、データiは木の根ノードである
  vector<int> par;
  // sizes[i]：根ノードiの木に含まれるデータの数。iが根ノードでない場合は無意味な値となる
  vector<int> sizes;

  UnionFind(int n) : par(n), sizes(n, 1) {
    // 最初は全てのデータiがグループiに存在するものとして初期化
    rep(i,n) par[i] = i;
  }

  // データxが属する木の根を得る
  int find(int x) {
    if (x == par[x]) return x;
    return par[x] = find(par[x]);  // 根を張り替えながら再帰的に根ノードを探す
  }

  // 2つのデータx, yが属する木をマージする
  void unite(int x, int y) {
    // データの根ノードを得る
    x = find(x);
    y = find(y);

    // 既に同じ木に属しているならマージしない
    if (x == y) return;

    // xの木がyの木より大きくなるようにする
    if (sizes[x] < sizes[y]) swap(x, y);

    // xがyの親になるように連結する
    par[y] = x;
    sizes[x] += sizes[y];
    // sizes[y] = 0;  // sizes[y]は無意味な値となるので0を入れておいてもよい
  }

  // 2つのデータx, yが属する木が同じならtrueを返す
  bool same(int x, int y) {
    return find(x) == find(y);
  }

  // データxが含まれる木の大きさを返す
  int size(int x) {
    return sizes[find(x)];
  }
};

int main(){
	int n, q;
	cin >> n >> q;
	UnionFind uf(n);
	//cout << uf.find(1)->value << endl;
	//uf.union_trees(0,1);
	int p, a, b;
	for(int i=0; i<q; i++){
		cin >> p >> a >> b;
		if(p==0){
			// 連結クエリ
			//uf.union_trees(a, b);
			uf.unite(a, b);
		}
		else if(p==1){
			// 判定クエリ
			//// 連結である
			//if(uf.judge(a, b)){cout << "Yes" << endl;}
			if(uf.same(a, b)){cout << "Yes" << endl;}
			//// 連結でない
			else{cout << "No" << endl;}
		}
	}
	return 0;
}
