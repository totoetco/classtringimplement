#include <cstdlib>
#include <cstdio>

const unsigned int CAPACITY_DEFAULT = 5; 
//on utilise unsigned car la capacité ne peut pas être négative. Donnée par défault à 5
typedef size_t unsignedint;

class String {

    public: //nos methodes
    
    void Afficher (void);
    
    void reserve (size_t n = 0);

    void resize(size_t n, char c = (char)0); // une seule déclaration pour deux cas : avec ou sans "c" spécifié.
	
//getters
   
    size_t size() const;
    
    size_t length() const;
    
    size_t capacity() const;

    const char* c_str() const;
    
    bool empty() const;
    
    void clear();
    
    
    size_t max_size() const;
	
	// Destructeur
	virtual ~String ();
    
    // Surcharge operateurs
    
    String & operator= (const String & unStr);
    
    String & operator= (char unchar);
    
    String & operator= (const char * uneChaine);
    
    String operator+ (char unchar);
    
    String operator+ (const char* uneChaine);
    
    String operator+ (const String st);
	
// autres operateurs utiles
char& operator[] (size_t pos);

    //---------------Constructeurs - destructeur
    String ( const String & unString );

    String (size_t cap = CAPACITY_DEFAULT);
        
    String (const char* cstr);
    
    //virtual ~String ();
    //libère la totalité des ressources

    private :

    protected:

    //-------------------Attributs protégés
    size_t cpty;
    size_t len;
    char* str;
	size_t MAX_SIZE;
};

