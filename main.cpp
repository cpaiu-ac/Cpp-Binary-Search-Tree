#include <iostream>
using namespace std;
typedef int Atom;
struct Nod{
    int data;
    Nod* stg, *drt;
};
Nod* make_nod(int val)
{
    Nod* p = new Nod;
    p -> data = val;
    p -> stg = 0;
    p -> drt = 0;
    return p;
}
void insert(Nod*& r, int a)
{
    if (r == 0) r = make_nod(a);
    else if(a < r -> data) insert(r -> stg, a);
    else if(a > r -> data) insert(r -> drt, a);
}
Nod* search(Nod*& r, int a)
{
    if (r == 0) return NULL;
    else if(a < r -> data) return(search(r -> stg, a));
    else if(a > r -> data) return(search(r -> drt, a));
    else return r;
}
Nod* removeGreatest(Nod*& r)
{
    Nod* p;
    if(r -> drt == 0){
        p = r;
        r = r -> stg;
        return p;
    }
    else return removeGreatest(r -> drt);
}
void deleteRoot(Nod*& rad)
{
    Nod* p = rad;
    if(rad -> stg == 0) rad = rad -> drt;
    else if(rad -> drt == 0) rad = rad -> stg;
    else{
        rad = removeGreatest(rad -> stg);
        rad -> stg = p -> stg;
        rad -> drt = p -> drt;
    }
    delete p;
}
void deletee(Nod*& rad, int a)
{
    if(rad == NULL) cout << "Eroare: Valoarea " << a << " nu este in arbore!";
    else if(a < rad -> data) deletee(rad -> stg, a);
    else if(a > rad -> data) deletee(rad -> drt, a);
    else deleteRoot(rad);
}
void PREORDINE(Nod* p, int tab2){
    if (p!=NULL){
    for(int i = 0; i < tab2; i++) cout << "\t";
    cout << p -> data << endl;
    PREORDINE(p->stg, tab2++);
    PREORDINE(p->drt, tab2++);
    }
    }
    void INORDINE(Nod* p, int tab){
        if (p!=NULL){
        INORDINE(p->stg, tab++);
        for(int i = 0; i < tab; i++) cout << "\t";
        cout << p -> data << endl;
        INORDINE(p->drt, tab++);
        }
        }    
int main(){
    Nod* a = 0;
    int x;
    cin >> x;
    while(x)
    {
        insert(a, x);
        cin >> x;
    }
    PREORDINE(a,0);
    INORDINE(a, 0);
    search(a, 3);
}