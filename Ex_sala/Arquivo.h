#ifndef _ARQUIVO_H
#define _ARQUIVO_H

class Arquivo{
        std::ifstream* stream_arquivo;

    public:
        Arquivo(std::string nome){
            stream_arquivo = new std::ifstream(nome, std::ifstream::binary);
        }
        int getTamanho(){
            stream_arquivo->seekg(0, stream_arquivo->end);  
            int tamanho = stream_arquivo->tellg();
            return tamanho;
        }
        ~Arquivo(){
            delete stream_arquivo;
        }
};
#endif /* _ARQUIVO_H */
