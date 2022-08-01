        void perkecil(Balok *obj, int m){
            obj->panjang -= m;
            obj->lebar -= m;
            obj->tinggi -= m;
        }

        void perbesar(Balok *obj, int m){
            obj->panjang += m;
            obj->lebar += m;
            obj->tinggi += m;
        }