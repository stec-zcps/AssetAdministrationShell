#include "src/AssetAdministrationShell.hpp"

class meinSubmodell : public Verwaltungsschale::Submodel{
    std::string test;
};

class meineAAS : public Verwaltungsschale::AssetAdministrationShell{
public:
    meineAAS(){
        submodels.emplace_back(meinSubmodell());
    }
};


int main(int args, char** argv){
    meineAAS aas;
}
