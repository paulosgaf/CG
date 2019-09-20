//
// Created by thais on 26/08/2019.
//

#ifndef COMPUTACAOGRAFICA_CUBO_HPP
#define COMPUTACAOGRAFICA_CUBO_HPP
#include "biblioteca.hpp"
#include "Objeto.hpp"
#include "Plano.hpp"
#include "Triangulo.hpp"
#include <vector>

struct Vertice {
    string id;
    Ponto* p;
};

struct Aresta{
    string id;
    Vertice* verticeInicial;
    Vertice* verticeFinal;
};

class Triangulo;

class Cubo : public Objeto {
public:
    double aresta;
    Ponto* centro;
    vector<Triangulo*> triangulos;
    vector<Vertice*> vertices;
    vector<Aresta*> arestas;
    Vetor normal;
    Cubo(double cAresta, Ponto* cCentro, Material* material);
    tuple<Ponto*,Ponto*> IntersecaoReta(Ponto* pP0, const Vetor &pV0) override;
    Ponto* PrimeiraIntersecao(const Ponto &pP0, const Vetor &pVetor0) override;
    Vertice* CriarVertice(Ponto* p1,const string& id);
    Aresta* CriarAresta(Vertice* pi, Vertice* pf, const string& id);
    Triangulo* CriarTriangulo(Vertice *v1, Vertice *v2, Vertice *v3, const string& id);
    void mudaCoodCamera(Camera *camera) override;
    void mudaCoodMundo(Camera *camera) override;
    Vetor calcularNormal(Ponto* p) override;
    Objeto* aplicarTransformacao(vector<Matriz> &pMatrizesTransf) override;
};
#endif //COMPUTACAOGRAFICA_CUBO_HPP
