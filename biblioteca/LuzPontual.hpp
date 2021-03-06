//
// Created by thais on 06/09/2019.
//

#ifndef COMPUTACAOGRAFICA_LUZPONTUAL_HPP
#define COMPUTACAOGRAFICA_LUZPONTUAL_HPP


#include "Luz.hpp"
#include "biblioteca.hpp"
#include "PontoIntersecao.hpp"

class LuzPontual : public Luz {
public:
    Ponto* posicaoPontual;
    LuzPontual(float r, float g, float b, double x,double y,double z);
    double calcularFatorDifuso(const PontoIntersecao& p);
    Vetor calcularIntensidadeDifusa(const PontoIntersecao& p) override;
    Vetor calcularIntensidadeEspecular(const PontoIntersecao& p) override;
    double calcularFatorEspecular(const PontoIntersecao& p);
    void mudaCoodCamera(Camera *camera);
    void mudaCoodMundo(Camera *camera);
};


#endif //COMPUTACAOGRAFICA_LUZPONTUAL_HPP
