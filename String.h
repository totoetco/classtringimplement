const uint CAPACITY_DEFAULT = 5; # on utilise unsigned car la capacité peut pas être négative. Donnée par défault à 5
typedef size_t unsignedint;
class String {
    //----------------------------------------------- PUBLIC

    public: //nos methodes
    
    void Afficher (void);
    
    void reserve (size_t n = 0);

    size_t size() const;
    
    size_t length() const;
    
    size_t capacity() const;
    
    bool empty() const;
    
    void clear();
    
    const char* c_str() const;
    
    size_t max_size() const;
    
    // Surcharge operateurs
    
    String & operator= (const String & unStr);
    
    String & operator= (char unchar);
    
    String & operator= (const char * uneChaine);
    
    String operator+ (char unchar);
    
    String operator+ (const char* uneChaine);
    
    String operator+ (const String st);

    //---------------Constructeurs - destructeur
    String ( const String & unString );

    String (size_t cap = CAPACITY_DEFAULT);
        
    String (const char* cstr);
    //Crée un ensemble de taille nbElements, avec les
    //nbElements premières valeurs de t
    
    virtual ~String ();
    //libère la totalité des ressources

    //------------------- PRIVE

    protected:
    //-------------------Méthodes protégées

    //-------------------Attributs protégés
    size_t cpty;
    size_t len;
    char* str;
};

#endif // String_H

