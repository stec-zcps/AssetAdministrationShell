#include "src/AssetAdministrationShell.hpp"

class meinSubmodell : public Verwaltungsschale::Submodel{
public:
    std::string test;

    meinSubmodell(Qualifier qualifier) : Verwaltungsschale::Submodel(qualifier) {
        
    }
};

class meineAAS : public Verwaltungsschale::AssetAdministrationShell{
public:
    meineAAS(){
        Qualifier q ("type");

        submodels.emplace_back(meinSubmodell(q));
    }
};


int main(int args, char** argv){
    meineAAS aas;
}



