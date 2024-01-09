<div align="center">

![get_next_line](https://github.com/beyzabektas/42Cursus/assets/91256847/cfdf0b0b-2039-4bde-8b5a-9b83eb103ae0)


# "Get_next_line - Reading a line from a fd is way too tedious”
</div>

Bu projenin amacı , dosya tanımlayıcıdan okunan, yeni satırla sonlandırılmış bir satırı döndüren bir işlevi kodlamaktır.

## read işlevi
```
ssize_t read(int fildes, void *buf, size_t nbyte);
```
fd : open dosya tanımlayıcısı

buf: Okunacak verilerin saklanacağı hafıza alanı

nbytes: Okunacak byte sayısı

Fd'yi byte kadar okuyun ve buf'ta saklayın.
Buf içindeki veriyi saklamak istiyorsanız, bunu başka bir değişken veya bellek alanında saklamanız gerekir, çünkü her read çağrısı buf içindeki veriyi değiştirir.Bu stash dediğimiz alandan line'ı yazdırdığımızda o ifadeyi artık stash'ten temizlememiz gerekir çünkü stash geri döndürmediğimiz değerleri saklamak içindir.

## STACK VS HEAP
Stack ve Heap bellekte (RAM) bulunan mantıksal yapılardır.

<div align="center">
<img width="400" alt="Ekran Resmi 2023-10-12 00 55 37" src="https://github.com/beyzabektas/42Cursus/assets/91256847/baf4b986-96a0-464b-8c44-a4e67beca1bb">
</div>


### STACK
- Veri üyelerine yalnızca onları içeren metod( ) o anda çalışıyor olması durumunda erişilebildiği geçici bir bellek ayırma işlemidir.
- Tahsis, bitişik bellek bloklarında gerçekleşir.Bir işlev çağrılırken yığına itilir ve geri dönerken yığından çıkarılır.
- Ayrılacak belleğin boyutu derleyici tarafından bilinir ve bir işlev çağrıldığında değişkenleri yığında ayrılan belleği alır. Ve işlev çağrısı bittiğinde değişkenlere ilişkin belleğin tahsisi kaldırılır. Bunların hepsi derleyicideki önceden tanımlanmış bazı rutinler kullanılarak gerçekleşir.Bir programcının bellek tahsisi ve yığın değişkenlerinin tahsisinin kaldırılması konusunda endişelenmesine gerek yoktur. Bu tür hafıza tahsisi aynı zamanda Geçici hafıza tahsisi olarak da bilinir, çünkü yöntem yürütülmesini bitirir bitirmez o yönteme ait tüm veriler otomatik olarak yığından çıkarılır.
- Stack de veriler üst üste (LIFO) - Last In, First Out mantığında dizilir ve sırası gelmeden aradaki bir değer ile işlem yapılamaz.Veriler aşağıdan yukarıya doğru birikir.

### Stack Avantajları:

- Boşa harcanan alan yok.

- Stack belleği, bellek tahsis ve serbest bırakma işlemleri için genellikle daha hızlıdır, çünkü bu işlemler otomatik olarak yönetilir ve sadece işlev çağrıları sırasında stack belleği değiştirilir.

### Stack Dezavantajları:

- Esneklikten yoksundur.

- Stack belleği genellikle daha sınırlı bir depolama alanına sahiptir ve daha hızlı erişim sağlar, ancak bellek tahsisleri otomatik ve yerel değişkenler için sınırlı bir süre boyunca geçerlidir.

![1_cUjtULh9DgatCLVydqZm4Q](https://github.com/beyzabektas/42Cursus/assets/91256847/02198dd3-bc58-42b2-9a3a-ac10e4d484f7)


## HEAP
- Bellek kullanıcı tarafından dinamik olarak tahsis edilir ve serbest bırakılır (malloc() aracılığıyla ayırma ve free() aracılığıyla serbest bırakma işlemi yapılır).
- Bellek rastgele sırada düşük adresten → yüksek adrese tahsis edilir.
- Yığın FIFO'yu (İlk Giren, İlk Çıkar) kullanır, böylece ilk gelen veriler ilk önce alınır.Veriler yukarıdan aşağıya doğru birikir.
- Bağlantılı listede yığın heap tahsisi tercih edilir.

  
### Heap Avantajları:

- Program için gerekli nesnelerin sayısı veya boyutu önceden bilinmediğinde kullanılabilir.

- Bir nesne yığın ayırıcıya sığmayacak kadar büyük olduğunda kullanılabilir.

### Heap Dezavantajları:

- Tahsis ve serbest bırakma işlemleri nedeniyle yavaşlama.


## NASIL ???
Yaygın bir yaklaşım, dosyayı satır satır bir ara belleğe okumak ve ardından satırları arabellekten çıkarmaktır.
Dosyayı parçalar halinde okumak ve her parçayı bir ara belleğe eklemek için bir döngü kullanmanız gerekecektir. Ardından, arabelleği yeni satırlar için tarayabilir ve bulduğunuz satırları çıkarabilirsiniz.
Dosya sona erdiğinde ne olacağı ve arabelleğin sonunda yeni satır karakterinin olmaması gibi uç durumları dikkate almak önemlidir. Bu durumları kodunuzda ele almanız gerekecektir.
İşlev çağrıları arasındaki durumu korumak için statik değişkenleri kullanın . Bu yaklaşım, dosyadaki mevcut konumu ve arabellekte kalan verileri takip etmenizi sağlar.


