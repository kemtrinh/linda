#include <bits/stdc++.h>
#define ll long long
using namespace std;

void deleteSpace(string &s){
    string res = "";
    string word;
    stringstream ss(s);
    while(ss >> word){
        res += word;
        res += " ";
    }
    res.pop_back();
    s = res;
}

class monhoc{
    public:
    string ma, ten;
    ll sotin;
    public:
    friend istream& operator >> (istream&in, monhoc&a){
        in >> a.ma;
        getline(in >> ws, a.ten);
        in >> a.sotin;
        deleteSpace(a.ten);
        return in;
    }
    void output(){
        cout << ma << " " << ten << " " << sotin << endl;
    }
};

bool cmp(monhoc a, monhoc b){
    return a.ten < b.ten;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream in("MONHOC.in");
    if(in.is_open()){
        int n; in >> n;
        vector<monhoc> tmp;
        while(n--)
        {
            monhoc x; in >> x;
            tmp.push_back(x);
        }
        sort(tmp.begin(), tmp.end(), cmp);
        for(monhoc x: tmp) x.output();
        in.close();
    }
    return 0;
}