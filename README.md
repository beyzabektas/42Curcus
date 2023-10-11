
<div align="center">

![libftm](https://github.com/beyzabektas/42Cursus/assets/91256847/89645507-12f5-416e-99c7-fce28e9e33b4)
# "Libft - ilk kendi kütüphaneniz”
</div>
Bu projenin amacı, diğer tüm projelerimizde kullanmamıza izin verilecek olağan işlevleri yeniden gruplayan bir C kütüphanesi kodlamaktır.

42’de standart C kütüphane fonksiyonunu kullanmamıza izin verilmiyor, sadece kendi kodladığımız fonksiyonu kullanabiliyoruz. Yani bu kütüphanenin uzun vadeli hedefi, kendi fonksiyonumuzla büyümek.

Bu kitaplık için izin verilen yalnızca 3 standart kitaplık işlevi vardır:

- <unistd.h>'den write(),
- <stdlib.h>'den malloc() ve free(),
- size_t ve NULL'a erişmek için <string.h> kullanmamıza da izin verilir.

Lib C İşlevleri: standart C kitaplıklarından gelen işlevlerin orijinalleriyle çakışmasını önlemek için önlerinde “ft_” vardır.

42’de , bir fonksiyonun ne yaptığını incelemek zorunda değiliz, onları yeniden kodlamak için saatlerce takılıp kaldığınızda, onları derinlemesine anlamak zorunda kalırsınız.

# **<ctype.h>**

Kütüphane kabaca C dilinde bulunan karakterler (char) üzerinde işlem yapmaya imkan sağlar. Kütüphane ismi de buradan gelmektedir. -> **( char + type = ctype )**.
Amacı bir karakterin tipini algılama veya değiştirmektir. C bağımsız değişkeni açıklanan koşulu sağlıyorsa tüm işlevler sıfırdan farklı (doğru) ve değilse sıfır (yanlış) döndürür.

  
| Fonksiyonlar               |                          Açıklamaları                                              |    
| :-------------------------:|:----------------------------------------------------------------------------------:| 
| int isalpha(int c)         |Karakterin alfabede bulunan bir karakter olup olmadığını kontrol eder.              |       
| int isdigit(int c)         |Karakterin bir rakam olup olmadığını kontrol eder.                                  |
| int isalnum(int c)         |Karakterin alfabede bulunan bir değer veya bir rakam olup olmadığını kontrol eder.  |
| int isascii(int c)         |Karakterin ascii karakteri olup olmadığını kontrol eder.                            |
| int isprint(int c)         |Karakterin yazılabilir bir karakter olup olmadığını kontrol eder.                   |
| int toupper(int c)         |Fonksiyona geçirilen c parametre değerinde yer alan küçük harfi büyük harfe çevirir.|
| int tolower(int c)         |Fonksiyona geçirilen c parametre değerinde yer alan büyük harfi küçük harfe çevirir.|


# **<string.h>**

C programlama dilinde karakter dizileriyle ilgili işlemleri gerçekleştirmek için kullanılan bir başlık dosyasıdır.
**`string.h`** başlık dosyası, karakter dizilerinin kopyalanması, birleştirilmesi, karşılaştırılması, arama işlemleri gibi yaygın işlemleri gerçekleştirmek için kullanılan işlevleri sağlar. 
Ayrıca, bellek alanı tahsisi ve serbest bırakılması için kullanılan **`malloc`**, **`calloc`**, **`realloc`**, **`free`** gibi işlevleri de içerir.

| Fonksiyonlar                                                |                          Açıklamaları                                              |    
|:-----------------------------------------------------------:|:----------------------------------------------------------------------------------:| 
|size_t strlen(const char *str)                               |Karakter dizisinin uzunluğunu geri döndürür.                                        |
|char* strcpy(char *dest, const char *src)                    |Src’yi dest karakter dizisine kopyalar.                                             |
|char* strncpy(char *dest, const char *src, size_t n)         |Src’nin n kadar byte değerini dest’e kopyalar.                                      |
|size_t	ft_strlcpy(char *dst, const char *src, size_t size)   |Src'nin size kadar karakterini dest'e kopyalar ve ('\0') ile sonlandırır.           |
|char* strcat(char *dest, const char *src)                    |Src’yi dest’in sonuna ekler.                                                        |
|size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)|src dizesini dst hedef dizisinin sonuna ekler ve ('\0') ile sonlandırır.            |
|char* strchr(const char *str, int c)                         |c değerini str karakter dizisinin içinde ilk bulunduğu yeri arar.                   |
|char* strrchr(const char *str, int c)                        |c değerini str karakter dizisinin içinde son bulunduğu yeri arar.                   |
|void* memset(void *dest, int c, size_t n)                    |c değerini dest dizisini n kadar byte değeri dest’in üzerine kopyalar.              |
|void* memmove(void *dest,const void *src, size_t n)          |Src’nin n kadar değerini dest’in adresine taşır.                                    |
|void* memchr(const void *ptr, int c, size_t n)               |Ptr bölgesine n kadar ilk byte değerine c değerini atar.                            |
|void* memcpy(void *dest, const void *src, size_t n)          |Src dizisinin n değer kadar byte değerini dest’e kopyalar.                          |
|int	ft_memcmp(const void *s1, const void *s2, size_t n)     |ptr2  ve ptr1 bellek değerinin n kadar byte değerini karşılaştırır.                 |
|void bzero(void *s, size_t n)                                |s ile gösterilen alana n adet sıfır değerli baytı yerleştirir.                      |


# **<stdlib.h>**

| Fonksiyonlar                                        |                          Açıklamaları                                                |    
|:---------------------------------------------------:|:------------------------------------------------------------------------------------:| 
|int atoi(const char *str)                            |Str argümanıyla işaret edilen dizeyi bir tamsayıya dönüştürür.                        |
|void* calloc(size_t count, size_t size)              |Malloc ile ayrılan yerde her elemanın tüm bitlerine 0 başlangıç ​​değerini verir        |
|char	*ft_strdup(const char *str)                     |Malloc ile dizenin bir kopyası için depolama alanı ayırır.                            |


| Ekstra Fonksiyonlar                                           |                          Açıklamaları                                      |
|:-------------------------------------------------------------:|:--------------------------------------------------------------------------:| 
|char* ft_substr(const char *s, unsigned int start, size_t len) |Başlangıcı ve uzunluğu alarak varolan diziden alt dizi oluşturmayı sağlar.  |
|char	*ft_strjoin(char const *s1, char const *s2)               |İki dizeyi birleştirerek yeni bir dize oluşturmak için kullanılır.          |
|char	*ft_strtrim(char const *s1, char const *set)              |Dizeden başlangıçta ve sondaki belirli karakteri kaldırmak için kullanılır. |
|char **ft_split(char const *s, char c)                         |Bir dizeyi parçalara bölmek için kullanılır.                                |
|char	*ft_itoa(int n)                                           |Tam sayı değerini (integer) karakter dizisine (string) dönüştürür.          |
|char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) |Dizinin tüm elemanlarına belirli bir fonksiyonu uygulayarak kopyaya aktarır.|
|void	ft_striteri(char *s, void (*f)(unsigned int, char *))     |Bir dizinin tüm elemanlarına belirli bir fonksiyonu uygular.                |



## File Descriptor (dosya tanımlayıcı)   
Varolan bir dosyayı açtığımızda veya yeni bir dosya oluşturduğumuzda, çekirdek sürece bir dosya tanıtıcı döndürür.Çekirdek kullanımda olan tüm açık dosya tanıtıcılarının bir tablosunu tutar. Dosya tanımlayıcıların tahsisi genellikle sıralıdır ve bunlar, ücretsiz dosya tanımlayıcıları havuzundan bir sonraki ücretsiz dosya tanımlayıcısı olarak dosyaya tahsis edilir.Dosyayı kapattığımızda, dosya tanıtıcı serbest kalır ve daha fazla tahsis için kullanılabilir.

Unix benzeri bir işletim sisteminde, varsayılan olarak ilk üç dosya tanıtıcısı STDIN ( standart giriş ), STDOUT (standart çıkış) ve STDERR'dir (standart hata).

<div align="center">
  
![file-descriptor-illustration](https://github.com/beyzabektas/42Cursus/assets/91256847/60d5f00a-40a8-496a-96f6-fe80a89febfb)


</div>


| Fonksiyonlar                                        |                          Açıklamaları                                                     |    
|:---------------------------------------------------:|:-----------------------------------------------------------------------------------------:|
|void	ft_putchar_fd(char c, int fd)                   |Bir karakteri verilen dosya tanımlayıcısına (file descriptor) yazan basit bir fonksiyondur |
|void	ft_putstr_fd(char *s, int fd)                   |Bir karakter dizisini belirtilen dosya tanımlayıcısına yazmayı amaçlar.                    |
|void	ft_putendl_fd(char *s, int fd)                  |Bir karakter dizisini belirtilen dosya tanımlayıcısına yazdıktan sonra  ('\n') ekler.      |
|void	ft_putnbr_fd(int n, int fd)                     |Bir tam sayıyı belirtilen dosya tanımlayıcısına  yazmayı amaçlar.                          |


## Linked List

![Singlelinkedlist](https://github.com/beyzabektas/42Cursus/assets/91256847/0c3592f3-f62c-4c42-a042-e6fa310b906a)


Bağlı listeler, her bir düğümün bir veri öğesi (content) ve bir sonraki düğümün adresini (next) içeren veri yapılardır. Bu yapı, verileri birbiriyle ilişkilendirerek dinamik olarak büyüyen ve daralan veri koleksiyonları oluşturmanıza olanak tanır.

Single Linked List = Gezinme yalnızca ileriye doğrudur.

Doubly Linked List = İleri ve geri gezinme mümkündür.

Circular Linked List = Son eleman ilk elemana bağlıdır.


### LINKED LIST ve ARRAY Farkları?

- Dizilerin boyutları sabittir, ancak bağlı liste dinamik boyuta sahiptir program akışı içerisinde değiştirilebilir.

- Dizilerde elemanlar bellekte ardışıktır.Bağlı liste elemanları ise bellekte farklı konumlarda bulunabilir.

- Dizilerde silme ve eleman kaldırılması zordur.Bağlı listelerde ise düğümlerin adres değerini değiştirerek kolayca yapılabilir.

- Dizilerde aynı tipe ait veri saklanırken, bağlı listelerde farklı türlere ait veri saklanabilir.

| Fonksiyonlar                                        |                          Açıklamaları                                                     |    
|:---------------------------------------------------:|:-----------------------------------------------------------------------------------------:|
|t_list	*ft_lstnew(void *content)                     |Content parametresi olarak alınan bir veri öğesini içeren yeni bir düğüm oluşturur.        |
|void	ft_lstadd_front(t_list **lst, t_list *new)      |Bir bağlı listenin başına yeni bir düğüm eklemek için kullanılır.                          |
|int	ft_lstsize(t_list *lst)                         |Bir bağlı listenin boyutu (düğüm sayısı) hesaplanır.                                       |
|t_list	*ft_lstlast(t_list *lst)                      |Bir bağlı listenin son düğümünü yazdırır.                                                  |
|void	ft_lstadd_back(t_list **lst, t_list *new)       |Düğümler bağlı listenin sonuna eklenir.                                                    |
