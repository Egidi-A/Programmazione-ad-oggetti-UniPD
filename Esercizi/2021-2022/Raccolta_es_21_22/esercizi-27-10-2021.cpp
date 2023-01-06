/*
Si considerino le seguenti definizioni. Fornire una dichiarazione (non e` richiesta la definizione) dei membri pubblici della classe Z nel minor numero possibile in modo tale che la compilazione del precedente main() non produca errori. Attenzione: ogni dichiarazione in Z non necessaria per la corretta compilazione del main() sara` penalizzata.
 */

class Z {
public:
  // ...
};

template <class T1, class T2=Z>
class C {
public:
  T1 x;
  T2* p;
};

template<class T1,class T2>
void fun(C<T1,T2>* q) {
  ++(q->p);
  if(true == false) cout << ++(q->x); else cout << q->p;
  (q->x)++;
  if(*(q->p) == q->x) *(q->p) = q->x;
  T1* ptr = &(q->x);
  T2 t2 = q->x;
}

int main(){
   C<Z> c1; fun(&c1); C<int> c2; fun(&c2);
}

// SOLUZIONE
class Z {
public:
  int operator++();
  int operator++(int);
  bool operator==(const Z&) const;
  Z(int =8); // conversione int => Z e c.default 
};
