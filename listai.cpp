#include "laikas.h"
#include "creating.h"

double listai (string name){
Timer t;
std::ifstream read;
  read.open(name);
  do{
    try{
    if (!read.is_open()){
        throw std::runtime_error("Tokio failo nera projekto deriktorijoje \n");
    }
    }
     catch (const std::runtime_error& e) {
      std::cout << e.what();
      cout<<"Iveskite reikiamo failo pavadinima: ";
      cin>>name;
      read.open(name);}
  }while (!read.is_open()== true);
  int eilutes;
  eilutes = eilute(name)-1;
    srand(time(NULL));
    list <duomuo> sarasas;
    string vardas, pavarde;
    int integer;
    int pazym;
    read>>vardas>>pavarde;
    int kiek=0;
    while(vardas!="EGZ")
    {
      read>>vardas;
      kiek++;
    }
    kiek-=1;

    for(int i=0;i<eilutes;i++)
    {
        sarasas.push_back(duomuo());
        read>>vardas;
        read>>pavarde;
        auto it = std::next(sarasas.begin(), i);
        it->Vard = vardas;
        it->Pav = pavarde;
        for(int j=0;j<(kiek);j++)
        {
          read>>pazym;
          if (pazym >=1 && pazym <=10){
          it->paz.push_back(pazym);
          it->GP+=it->paz[j];
          it->mediana.push_back(pazym);
          }
          else {
            printf("Faile yra netinkamo formato pazymys");
            return 0;}
        }
          read>>integer;
          if (integer >=1 && integer <=10){
          it->egz=integer;
          it->mediana.push_back(integer);
          }
          else {
            printf("Faile yra netinkamo formato pazymys");
            return 0;}
        }
    double pabaiga2 = t.elapsed();
    std::cout << "Duomenu nuskaitymas is failo ir ikelimas i list'a uztruko: " << pabaiga2 << " s\n";
      for(int i=0;i<eilutes;i++){
        auto it2 = std::next(sarasas.begin(), i);
        if (it2->GP != 0){
        it2->GP = it2->GP / (kiek)/1.0;}
        it2->GP = it2->GP * 0.4 + 0.6 * it2->egz;
        //medianai skaiciuot
        std::sort(it2->mediana.begin(), it2->mediana.end());
        if ((kiek+1) % 2 != 0)
        it2->medianai = it2->mediana[(kiek) / 2];
        else it2->medianai = (it2->mediana[(kiek+1) / 2] + it2->mediana[ (kiek+1) / 2 - 1]) / 2.0;
    };
    sarasas.sort( []( const duomuo &a, const duomuo &b)
        {return a.GP < b.GP;});
    std::cout << "Atskirimas nenaudojant nauju sarasu (ciklai if) :"<<endl;
    t.reset();

    listas1(sarasas, kiek);

    double pabaiga3 = t.elapsed();
    std::cout << "    *Kietiaku atskirimas nuo visu studentu ir kartu surasymas i faila uztruko: " << pabaiga3 << " s\n";
    t.reset();

    listas2(sarasas, kiek);

    double pabaiga4 = t.elapsed();
    std::cout << "    *Vargsiuku atskirimas nuo visu studentu ir kartu surasymas i faila uztruko: " << pabaiga4 << " s\n";
    std::cout << "Tai yra bendras laikas atskiriant ir surasant studentus i failus lygus:  "<< pabaiga3 + pabaiga4 <<" s\n";
    t.reset();

    listas3(sarasas, kiek);

    double pabaiga5 = t.elapsed();
    std::cout << "Kietiaku atskirimas nuo vargsiuku naudojant 2 naujus sarasus uztruko: " << pabaiga5<< " s\n";
    t.reset();

    listas4(sarasas, kiek);

    double pabaiga6 = t.elapsed();
    std::cout << "Vargsiuku atskirimas nuo visu studentu ir pasalinimas is pirmo saraso uztruko: " << pabaiga6 << " s\n";
    sarasas.clear();
    read.close();
    return 0;
}
