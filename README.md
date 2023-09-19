
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

Lib C İşlevleri: standart C kitaplıklarından gelen işlevlerin orijinalleriyle çakışmasını önlemek için önlerinde “ft_”(fourty-two) vardır.

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

| Fonksiyonlar                                        |                          Açıklamaları                                              |    
|:--------------------------------------------------: |:----------------------------------------------------------------------------------:| 
|size_t strlen(const char *str)                       |Karakter dizisinin uzunluğunu geri döndürür.                                        |
|char* strcpy(char *dest, const char *src)            |Src’yi dest karakter dizisine kopyalar.                                             |
|char* strncpy(char *dest, const char *src, size_t n) |Src’nin n kadar byte değerini dest’e kopyalar.                                      |
|char* strcat(char *dest, const char *src)            |Src’yi dest’in sonuna ekler.                                                        |
|void* memcpy(void *dest, const void *src, size_t n)  |src dizisinin n değer kadar byte değerini dest’e kopyalar.                          |

## Parametrelere göz atalım

### Neden char yerine int kullanılır ?

1. Genişletilmiş Karakter Setleri: C dilinde, sadece temel karakterler değil, aynı zamanda genişletilmiş karakter setlerini de desteklemek önemlidir. Bu karakterlerin tam sayı değerleri ASCII kodları aralığının dışında olabilir. **`int`** türü, tüm karakterlerin temsil edilmesine izin verir.
2. Bir bellek bloğunu işlerken, daha büyük birimlerde (örneğin, 4 byte veya 8 byte gibi) veri işlemek, bellekteki verileri daha etkin bir şekilde kullanmamızı sağlar. Örneğin, bir **`int`** türü genellikle 4 byte yer kaplar. Bu nedenle, **`int`** türüyle bellek bloğunun doldurulması, bellekteki verileri daha büyük birimlerde işlememizi ve daha az bellek erişimi yapmamızı sağlar.

### Neden char yerine unsigned char kullanırız?
Biz int c bir parametre kullandığımız için char türünde bir değerin geçerli aralıkta kalmasına dikkat etmek önemlidir.Bu yüzden unsigned char kullanırız.

#### Char aralığını aşarsak ne olur (Unsigned integer wrapping)?
Bir işaretsiz tamsayı türü, bir taşma durumu oluştuğunda sonucu tanımlanan aralığın içinde tutmak için modüler aritmetik kullanır.
C dilinin standardına göre, işaretsiz tamsayılarla yapılan bir hesaplamanın sonucu, temsil edilemeyen bir işaretsiz tamsayı türü için düşünülen en büyük değerin bir fazlasına göre modülü alınır. Yani, sonuç, tanımlanan türün aralığına sığdırılır.
**`char`** türünde bir değerin tanımlanan aralığın dışına çıkması durumunda, modüler aritmetik uygulanır ve değeri aralığın içine geri getirir.
256 % 256 == 0


### Neden size_t kullanıyoruz?

size_t, herhangi bir boyut türünü barındırmak için yeterli bayt içeren işaretsiz bir tamsayı olarak kabul edilir. Bu bize, size_t'nin her zaman int'den daha fazla sayı depolayabileceği anlayışını bırakır.
unsigned char-unsigned short-unsigned int -unsigned long-unsigned long long gibi boyutları ve aralıkları için çeşitli gereksinimlerde kullanılan değişkenler vardır.
Uygulamaya bağlı olarak **`size_t`** unsigned char, unsigned short, unsigned int, unsigned long veya unsigned long long değerlerinden herhangi biri olabilir.Yani  bazı işaretsiz türler için bir typedef'tir.(32 bit sistem icin unsigned int 64bit sistemlerde unsigned long long gibi).

### Size_t yerine yüksek kapasiteli bir int veri türü kullansaydık ne olurdu?

İşlemci üzerinde daha hızlı işlemler gerektiren uygulamalar için daha küçük boyutlu veri türleri kullanmak daha avantajlı olabilir.Sonuç olarak, **`unsigned long`** veri türünün performansı, kullanıldığı platforma ve işlemciye bağlı olarak değişebilir. Genel olarak, daha büyük boyutu nedeniyle bellek kullanımı ve işlem süreleri artabilir. Ancak, her durumda performans analizi yapılmalı ve en uygun veri türü seçilmelidir.
Sonuç olarak **`size_t`**'nin amacı, programcıyı boyutları temsil etmek için önceden tanımlanmış türlerden hangisinin kullanıldığı konusunda endişelenmekten kurtarmaktır.

### Neden const char ?

C dilinde, "*const*" anahtar kelimesi bir değişkenin değerinin değiştirilemeyeceğini belirtir. Bu, bir değişkenin bir kez atandıktan sonra değerinin değiştirilemeyeceği anlamına gelir.
Karakter dizisi, işlev içinde yalnızca okunur, bu yüzden **`const char *s`** şeklinde tanımlanarak işlevin yan etkisiz ve okuma amaçlı kullanımı sağlanır.
Bu tür yaklaşım, kodun güvenliğini ve istikrarını artırır, çünkü girdi verilerini değiştirme riski azalır ve yanlışlıkla veri değişiklikleri nedeniyle beklenmeyen sonuçlardan kaçınılır.

### const char * ve char *const farkı nedir

**`const char *`** ifadesinde, işaret edilen karakterlerin değiştirilemez olduğu belirtilirken, **`char * const`** ifadesinde, işaretçinin kendisinin değiştirilemez olduğu belirtilir.* belirtecin etkilediği kısmın farklı olduğunu gösterir.

### void * nedir?

**`void *`** kullanmak, işlevin dönüş değerinin herhangi bir türe ait olabileceğini ve kullanıcının uygun bir dönüşüm yapabileceğini gösterir.



