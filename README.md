# Project1.0

Rezultatai pateikti atskirame aplanke [duomenys](https://github.com/Snezana01/Project1.0/tree/v1.0/Duomenys), matome, kad nedaug, bet visgi skiriasi laikai naudojant 2 papildomus vektorius, bei metodas be vektorių, kuris yra optimaliausias. Naudojant 1 papildomą vektorių, programa neduoda atsakymo esant 1000000 duomenų, tai gali būti dėl to, kad metodas erase veikia daug ilgiau su didesniu duomenų skaičiumi.
Po 1000000 duomenų taip pat nera rezultatų su list struktūra, dėl to, kad nuskaitymo iš failo metodas nėra produktyvus list'ams (nors vector struktūrai sparčiai veikia). Tačiau remiantis mažiausiu duomenų kiekiu, laikai panašūs, pradžioe net realizacijos su list'ais veikia sparčiau, bet paskui lėtėja.
Taigi, su didesniais duomenimis vector struktūra yra optimaliausia ( + nebūtina naudoti rodyklių, kaip list atvėju).
![1000 studentų generavimas](https://github.com/Snezana01/Project1.0/blob/v1.0/Duomenys/1000.PNG)
![10000 studentų generavimas](https://github.com/Snezana01/Project1.0/blob/v1.0/Duomenys/10000.PNG)
![100000 studentų generavimas](https://github.com/Snezana01/Project1.0/blob/v1.0/Duomenys/100000.PNG)
![1000000 studentų generavimas](https://github.com/Snezana01/Project1.0/blob/v1.0/Duomenys/1000000.PNG)


## Naudojimosi instrukcija.
 Paleidžiant programą, ji generuoja pasirinktą studentų skaičių, todėl vartotojui tereikia tik įvesti norimą studentų skaičių ir programa, sugeneravus jį, apskaičiuos rūšiavimo į dvi kategorijas laiką.
 Norint panaudoti savo failą, vietoje "name" vektorių ar list'ų faile reikia įrašyti failo pavadinimą "pavadinimas.txt" formatu. (Jis turi būti projekto aplankale).
 
 ## Kas dar buvo pakeista.
 Sukurti keli metodai, vietos taupymui (irasymas i faila)
 Vektorių bei list'ų faile pridėti 2 nauji studentų rūšiavimo į dvi dalis būdai. 


Ankstesti pertvarkymai:
## [Project0.1](https://github.com/Snezana01/Project0.1)
1. Programa skaičiuoja iš studento gautų pažymių jo rezultatą arba medianą
2. Duomenis galima įvesti ranka, galima atsitiktinai sugeneruoti
3. Pažymiai saugomi masyve versijoje 0.1, vektoriuje versijoje 0.1.2
4. Pateikiami duomenys yra studento vardas ir pavardė, jo egzamino rezultatas bei pažymiai
5. Pažymių galima įvesti tiek, kiek nori vartotojas.

## [Project0.2](https://github.com/Snezana01/Project0.2)
1. Versija 0.2 yra sutrumpinta, norint neperkrauti programos, bei nesusipainioti kode, cia nera atsitiktinų pažymių generavimo, bei pažymių surinkimo ranka. Tačiau esant būtinybei įmanoma apjungti viską kartu.
2. Programa nuskaito iš failo duomenis apie studentus, ir, jeigu elementai atitinka reikalavimams, spausdina lentelę su studentų vardais, pavardėmis ir rezultatu, mediana.

## [Project0.3](https://github.com/Snezana01/Project0.3)
1. Dirbant su 0.2 versija, funkcijos ir struktūros patalpintos į atskirus h ir cpp failus.
2. Try/ catch metodas failo atidarymui.

## [Project0.4](https://github.com/Snezana01/Project0.4)
1. Sukurtas metodas failų generavimui.
2. Programa prašo naudotoją įvesti kiek studentų turi būti sugeneruota.
3. Testavimas su programos vykdymo laiku yra "Testavimas" aplanke.

## [Project0.5](https://github.com/Snezana01/Project0.5)
1. Pridėta ta pati užduotis su list'ais
2. Panaudoti iteratoriai
3. Greičio matavimo rezultatai: Esant mažam studentų kiekiui, laikai nesiskiria. Tačiau nuo 100000 studentų, su list'u užima labai daug laiko. Greičiausiai taip neturi būti, bet gali būti dėl mažų programavimo įgūdžių. T.y. programą galima buvo realizuoti kitu būdu arba yra klaidų. Dar toliau rezultatų nėra, nes programa veikia labai ilgą laiką. Laiko matavimai pateikti atskirame aplanke.
4. Kompiuterio savybės : Intel(R) Core(TM) i5-8265U CPU @1.6GHz 1.80GHz RAM 8GB SSD
