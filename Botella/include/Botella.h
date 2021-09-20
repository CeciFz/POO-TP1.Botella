#ifndef BOTELLA_H
#define BOTELLA_H


class Botella
{
    public:
        Botella(int capacidad=100);
        void llenar(float mililitros);
        void vaciar(float mililitros);
        void vaciar();
        void tapar();
        void destapar();

        void mostrar();

        float getCapacidad();
        float getOcupacion();
        bool getTapada();

    private:
        float _capacidad; // Capacidad total de carga del recipiente.
        float _ocupacion; // Carga actual del recipiente.
        bool _tapada;     // Determina si la botella se encuentra tapada o no

};

#endif // BOTELLA_H
