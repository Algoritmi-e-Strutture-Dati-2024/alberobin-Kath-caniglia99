#include <iostram>
template <typename T>
class AlberoBinario {
private:
    T nodi[100];
    bool presente[100]={false};
public:
    AlberoBinario(); {
    for (int i = 0; i < 100; ++i) {
    presente [i]=false;
  }
}
    bool alberoVuoto() const {
     return presente [0];
}
    void insRadice(const T& valore){
         if(alberovuoto()) {
         nodi [0]=valore;
         presente[0]=true;
}
}  
    T radice() const; {
    if (alberovuoto()){
    return nodi [0];
}
}
    bool isFoglia(int indice) const {
    if (!presente [indice]) {
}
    int sinistro=figlioSinistro(int indice);
    int destro=figlioDestro(int indice);
    return (!present[sinistro]&& !presente [destro];
}
    intfigliosinistro(int indice) const {
     return 2* indice +1; //indice del figlio sinistro
}
    intfigliodestro (int indice) const {
    return 2* indice +2; //indice del figlio destro
}
    void insFiglioSinistro(int indice, const T& valore){
         int sinistro= figliosinistro (indice);
         if (ispresent[indice] && !present [sinistro]) {
          nodi [sinisto]= valore;
          presente [sinistro]= true;
}
}
    void insFiglioDestro(int indice, const T& valore){
    int destro= figliodestro (indice);
     if (presente [indice] && presente [destro]) {
     nodi [destro]=valore;
     presente [destro]= true;
}
}
    void rimuovi(int indice){
    if (presente[indice] && isfoglia (indice)) }
    is present [indice]=false;
}
    void stampa() const{
    for (int i = 0; i < 100; ++i) {
    if (Present[i]) {
    int sinistro = figlioSinistro(i);
    int destro = figlioDestro(i);
    std::cout << "Pos " << i << ", Valore: " << nodi[i] << " Figliodestro: " << (isPresent[destro] ? std::to_string(nodi[destro]) : "Nessuno")<< " Figliosinistro: " << (isPresent[sinistro] ? std::to_string(nodi[sinistro]) : "Nessuno") << std::endl;
}
}
}
}
;
