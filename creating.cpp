#include "creating.h"

int generavimas(int g, std::string a)
{
  using hrClock = std::chrono::high_resolution_clock;
  std::mt19937 mt(static_cast<long unsigned int>(hrClock::now().time_since_epoch().count()));
  std::uniform_int_distribution<int> dist(1, 10);
  std::vector<int> Vect;
  //srand(time(NULL));
    for (int i = 0; i < g; i++)
    {
        Vect.push_back(i + 1);
    }
    int dydis = Vect.size();
        std::ofstream f(a);
         f << "Vardas" << std::left << std::setw(15)<<" "
       << "Pavarde" <<  std::left << std::setw(15)<<" ";
        for (int k = 1; k<10; k++){
          f<< "ND" <<std::left << std::setw(3)<< k;}
        f << "EGZ" << std::endl;
        std::random_shuffle( Vect.begin(), Vect.end() );
        for (int elem = 0; elem<dydis; elem++){
        f << "Vardas"<<std::left << std::setw(15)<< Vect[elem]
        << "Pavarde"<< std::left << std::setw(15)<<Vect[elem];
        for (int k = 1; k<10; k++){
          f<< std::left << std::setw(5)<<dist(mt);}
        f << dist(mt)<< std::endl;
    }
    f.close();
    return 0;
};

int eilute(std::string a){
  std::ifstream file(a);
  int count = 0;
  string line;
    while (getline(file, line))
        count++;
    return count;
};

bool palyginimas(const duomuo &a, const duomuo &b)
{
    if (a.Vard != b.Vard )
        return a.Vard < b.Vard;
    return a.Pav < b.Pav;
};
bool palyginimas2(const duomuo &a, const duomuo &b)
{
        return a.GP < b.GP;
};
int isvedimas (vector<duomuo> Vekt, int kiek, string failas){
    std:: ofstream G;
    G.open(failas, std::ios::out);
    G<< std::left << std::setw(15)<<"Vardas"
       <<  std::left << std::setw(15)<< "Pavarde";
        for (int k = 1; k<(kiek+1); k++){
          G<< "ND" <<std::left << std::setw(3)<< k;}
        G << std::left<< std::setw(5)<< "EGZ" << "Galutinis"<<endl;
      for (vector<duomuo>::const_iterator it5 = Vekt.begin();
        it5 != Vekt.end(); ++it5){
        G <<std::left << std::setw(15)<< it5->Vard
        <<std::left << std::setw(15)<<it5->Pav;
        for (int k = 0; k<(kiek); k++){
          G<< std::left<<std::setw(5)<<it5->paz[k];}
        G << std::left<< std::setw(5)<< it5->egz << std::setprecision(3)<<it5->GP <<endl; }
    G.close();
    return 0;}
int isvedimas (list<duomuo> Listas, int kiek, string failas){
    std:: ofstream G;
    G.open(failas, std::ios::out);
    G<< std::left << std::setw(15)<<"Vardas"
       <<  std::left << std::setw(15)<< "Pavarde";
        for (int k = 1; k<(kiek+1); k++){
          G<< "ND" <<std::left << std::setw(3)<< k;}
        G << std::left<< std::setw(5)<< "EGZ" << "Galutinis"<<endl;
      for (list<duomuo>::const_iterator it5 = Listas.begin();
        it5 != Listas.end(); ++it5){
        G <<std::left << std::setw(15)<< it5->Vard
        <<std::left << std::setw(15)<<it5->Pav;
        for (int k = 0; k<(kiek); k++){
          G<< std::left<<std::setw(5)<<it5->paz[k];}
        G << std::left<< std::setw(5)<< it5->egz << std::setprecision(3)<<it5->GP <<endl; }
    G.close();
    return 0;}
int vektorius1(vector<duomuo> Eil_vect, int kiek){
std :: ofstream F;
F.open("kietiakiaiV.txt", std::ios::out);
    F<< std::left << std::setw(15)<<"Vardas"
       <<  std::left << std::setw(15)<< "Pavarde";
        for (int k = 1; k<(kiek+1); k++){
          F<< "ND" <<std::left << std::setw(3)<< k;}
        F << std::left<< std::setw(5)<< "EGZ" << "Galutinis"<<endl;
    for (vector<duomuo>::const_iterator it3 = Eil_vect.begin();
        it3 != Eil_vect.end(); ++it3){
      if (it3->GP >= 5){
        F <<std::left << std::setw(15)<< it3->Vard
        <<std::left << std::setw(15)<<it3->Pav;
        for (int k = 0; k<(kiek); k++){
          F<< std::left<<std::setw(5)<<it3->paz[k];}
        F << std::left<< std::setw(5)<< it3->egz << std::setprecision(3)<<it3->GP <<endl; }
    }
    F.close();
    Eil_vect.clear();
    return 0;}
int vektorius2(vector<duomuo> Eil_vect, int kiek){
    std:: ofstream G;
    G.open("vargsiukaiV.txt", std::ios::out);
    G<< std::left << std::setw(15)<<"Vardas"
       <<  std::left << std::setw(15)<< "Pavarde";
        for (int k = 1; k<(kiek+1); k++){
          G<< "ND" <<std::left << std::setw(3)<< k;}
        G << std::left<< std::setw(5)<< "EGZ" << "Galutinis"<<endl;

      for (vector<duomuo>::const_iterator it3 = Eil_vect.begin();
        it3 != Eil_vect.end(); ++it3){
      if (it3->GP < 5){
        G <<std::left << std::setw(15)<< it3->Vard
        <<std::left << std::setw(15)<<it3->Pav;
        for (int k = 0; k<(kiek); k++){
          G<< std::left<<std::setw(5)<<it3->paz[k];}
        G << std::left<< std::setw(5)<< it3->egz << std::setprecision(3)<<it3->GP <<endl; }
    }
    G.close();
    Eil_vect.clear();
    return 0;};

int vektorius3(vector<duomuo> Eil_vect, int kiek){
vector<duomuo> kietiakiai, vargsiukai;
    for (vector<duomuo>::const_iterator it3 = Eil_vect.begin();
    it3 != Eil_vect.end(); ++it3) {
       if (it3->GP < 5){
        vargsiukai.push_back(*it3);}
      else{
        kietiakiai.push_back(*it3);}
       }
        Eil_vect = kietiakiai;
    isvedimas(Eil_vect, kiek, "kietiakiaiV1.txt");
    isvedimas(vargsiukai, kiek, "vargsiukaiV1.txt");
    Eil_vect.clear();
    kietiakiai.clear();
    vargsiukai.clear();
    return 0;}
int vektorius4(vector<duomuo> Eil_vect, int kiek){
 vector<duomuo> vargsiukai;
    vector<duomuo>::iterator it = Eil_vect.begin();
    while (it != Eil_vect.end()) {
    if (it->GP < 5){
    vargsiukai.push_back(*it);
    it = Eil_vect.erase(it);
    }
    ++it;}
    isvedimas(Eil_vect, kiek, "kietiakiaiV2.txt");
    isvedimas(vargsiukai, kiek, "vargsiukaiV2.txt");
    Eil_vect.clear();
    vargsiukai.clear();
    return 0;}

 int listas1(list<duomuo> sarasas, int kiek){
     std :: ofstream F;
    F.open("kietiakiaiL.txt", std::ios::out);
    F<< std::left << std::setw(15)<<"Vardas"
       <<  std::left << std::setw(15)<< "Pavarde";
        for (int k = 1; k<(kiek+1); k++){
          F<< "ND" <<std::left << std::setw(3)<< k;}
        F << std::left<< std::setw(5)<< "EGZ" << "Galutinis"<<endl;
    for (list<duomuo>::const_iterator it3 = sarasas.begin();
        it3 != sarasas.end(); ++it3){
        if (it3->GP >= 5){
        F <<std::left << std::setw(15)<< it3->Vard
        <<std::left << std::setw(15)<<it3->Pav;
        for (int k = 0; k<(kiek); k++){
          F<< std::left<<std::setw(5)<<it3->paz[k];}
        F << std::left<< std::setw(5)<< it3->egz << std::setprecision(3)<<it3->GP <<endl; }
    }
    F.close();
    sarasas.clear();
    return 0;
 }
 int listas2(list<duomuo> sarasas, int kiek){
     std :: ofstream G;
     G.open("vargsiukaiL.txt", std::ios::out);
    G<< std::left << std::setw(15)<<"Vardas"
       <<  std::left << std::setw(15)<< "Pavarde";
        for (int k = 1; k<(kiek+1); k++){
          G<< "ND" <<std::left << std::setw(3)<< k;}
        G << std::left<< std::setw(5)<< "EGZ" << "Galutinis"<<endl;
    for (list<duomuo>::const_iterator it3 = sarasas.begin();
        it3 != sarasas.end(); ++it3){
        if (it3->GP < 5){
        G <<std::left << std::setw(15)<< it3->Vard
        <<std::left << std::setw(15)<<it3->Pav;
        for (int k = 0; k<(kiek); k++){
          G << std::left<<std::setw(5)<<it3->paz[k];}
        G << std::left<< std::setw(5)<< it3->egz << std::setprecision(3)<<it3->GP <<endl; }
    }
    G.close();
    sarasas.clear();
    return 0;
 }
 int listas3(list<duomuo> sarasas, int kiek){
    list<duomuo> kietiakiai, vargsiukai;
    for (list<duomuo>::const_iterator it3 = sarasas.begin();
    it3 != sarasas.end(); ++it3) {
       if (it3->GP < 5){
        vargsiukai.push_back(*it3);}
      else{
        kietiakiai.push_back(*it3);}
       }
        sarasas = kietiakiai;
    isvedimas(sarasas, kiek, "kietiakiaiL1.txt");
    isvedimas(vargsiukai, kiek, "vargsiukaiL1.txt");
    sarasas.clear();
    kietiakiai.clear();
    vargsiukai.clear();
    return 0;}
int listas4(list<duomuo> sarasas, int kiek){
 list<duomuo> vargsiukai;
    list<duomuo>::iterator it = sarasas.begin();
    while (it != sarasas.end()) {
    while (it->GP < 5){
    vargsiukai.push_back(*it);
    it = sarasas.erase(it);
    }
    ++it;}
    isvedimas(sarasas, kiek, "kietiakiaiL2.txt");
    isvedimas(vargsiukai, kiek, "vargsiukaiL2.txt");
    sarasas.clear();
    vargsiukai.clear();
    return 0;}
