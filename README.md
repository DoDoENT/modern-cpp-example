Primjeri koda uz prezentaciju _Moderni C++ - sumrak OOP-a_
===========================================

Ovaj repozitorij sadrži kod uz prezentaciju _Moderni C++ - sumrak OOP-a_. `OldWay` program prikazuje implementaciju zadatka iz prezentacije na stari način pomoću OOP paradigme, dok `NewWay` program prikazuje implementaciju istog zadatka na način preporučen u prezentaciji.

# Buildanje koda

Za buildanje projekta potreban vam je [CMake](https://cmake.org). Nakon što ga instalirate, napravite prazan direktorij, pozicionirajte se u njega i pokrenite sljedeću naredbu:

- na windowsima:

```
cmake -G "Visual Studio 15 2017 Win64" ..\putanja\do\direktorija\sa\source\codeom
```

- na linuxu ili macosu:

```
cmake ../putanja/do/direktorija/sa/source/codeom
```

CMake će izgenerirati projekt koji možete buildati. Na windowsima će to biti Visual Studio solution, a na linuxu i macosu će to biti makefile projekt. Za buildanje na windowsima, otvorite izgenerirani Visual Studio projekt, prebacite build type u "Release" i pokrenite željenu aplikaciju (`OldWay` ili `NewWay`).

Za buildanje na linuxu/macosu, jednostavno pozovite `make` te ručno pokrenite željenu aplikaciju.

# Dodatni materijali

## Video prezentacije

- [Sean Parent: Value Semantics and Concepts-based Polymorphism](https://www.youtube.com/watch?v=_BpMYeUFXv8)
- [The next big Thing - Andrei Alexandrescu](https://www.youtube.com/watch?v=tcyb1lpEHm0)
- [Klaus Iglberger: “Free Your Functions!”](https://www.youtube.com/watch?v=WLDT1lDOsb4)
- [Ben Deane & Jason Turner “constexpr ALL the Things!”](https://www.youtube.com/watch?v=PJwd4JLYJJY)
- [Michael Caisse: Modern C++ in Embedded Systems](https://www.youtube.com/watch?v=c9Xt6Me3mJ4&index=1&list=WL)
- [Chandler Carruth: Efficiency with Algorithms, Performance with Data Structures](https://www.youtube.com/watch?v=fHNmRkzxHWs)

## Članci, knjige, ...

- [Policy based design - Wikpedia](https://en.wikipedia.org/wiki/Modern_C%2B%2B_Design#Policy-based_design)
- [Data oriented design - Github repozitorij s materijalima](https://github.com/dbartolini/data-oriented-design)
- [Scott Meyers: Effective Modern C++](https://www.amazon.com/Effective-Modern-Specific-Ways-Improve/dp/1491903996)
- [Andrei Alexandrescu: Modern C++ Design: Generic Programming and Design Patterns Applied](https://www.amazon.com/Modern-Design-Generic-Programming-Patterns/dp/0201704315)

## Youtube kanali i korisnici

- [Jason Turner: C++ Weekly](https://www.youtube.com/channel/UCxHAlbZQNFU2LgEtiqd2Maw)
- [CppCon](https://www.youtube.com/user/CppCon)
- [Meeting C++](https://www.youtube.com/channel/UCJpMLydEYA08vusDkq3FmjQ)
- [BoostCon](https://www.youtube.com/user/BoostCon)
- [ACCU Conference](https://www.youtube.com/channel/UCJhay24LTpO1s4bIZxuIqKw)
- [CPPCast - the first podcast for C++ developers by C++ developers](http://cppcast.com/)
- [CppLang Slack channel](https://cpplang.now.sh)

## Blogovi

- [Arthur O’Dwyer - Stuff mostly about C++](https://quuxplusone.github.io/blog/)
- [Eric Niebler](http://ericniebler.com)
- [Sticky Bits](http://blog.feabhas.com)
- [Sutter's Mill](https://herbsutter.com)
- [Functional C++](https://functionalcpp.wordpress.com)
- [Simon Brand's blog](https://blog.tartanllama.xyz/posts/)
- [Visual C++ Team Blog](https://blogs.msdn.microsoft.com/vcblog/)
- [Fluent C++](https://www.fluentcpp.com)
- [Modernes C++](http://www.modernescpp.com)
