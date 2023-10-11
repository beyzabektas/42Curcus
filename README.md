<div align="center">

![get_next_line](https://github.com/beyzabektas/42Cursus/assets/91256847/cfdf0b0b-2039-4bde-8b5a-9b83eb103ae0)


# "Get_next_line - Bir fd'den bir satır okumak çok sıkıcı”
</div>

Bu projenin amacı , dosya tanımlayıcıdan okunan, yeni satırla sonlandırılmış bir satırı döndüren bir işlevi kodlamaktır.

## read işlevi
```
ssize_t read(int fildes, void *buf, size_t nbyte);
```
fd : open dosya tanımlayıcısı
buf: Okunacak verilerin saklanacağı hafıza alanı
nbytes: Okunacak bayt sayısı

Fd'yi bayt kadar okuyun ve buf'ta saklayın.

Buf içindeki veriyi saklamak istiyorsanız, bunu başka bir değişken veya bellek alanında saklamanız gerekir, çünkü her read çağrısı buf içindeki veriyi değiştirir.Bu stash dediğimiz alandan line'ı yazdırdığımızda o ifadeyi artık stash'ten temizlememiz gerekir çünkü stash geri döndürmediğimiz değerleri saklamak içindir.

## STACK VS HEAP
Stack ve Heap bellekte (RAM) bulunan mantıksal yapılardır.

![1_QgJbJo9uRy2bJ6D4evUb1Q](https://github.com/beyzabektas/42Cursus/assets/91256847/baf4b986-96a0-464b-8c44-a4e67beca1bb)


### STACK
Veri üyelerine yalnızca onları içeren metod( ) o anda çalışıyor olması durumunda erişilebildiği geçici bir bellek ayırma işlemidir.
Tahsis, bitişik bellek bloklarında gerçekleşir.Bir işlev çağrılırken yığına itilir ve geri dönerken yığından çıkarılır.
Ayrılacak belleğin boyutu derleyici tarafından bilinir ve bir işlev çağrıldığında değişkenleri yığında ayrılan belleği alır. Ve işlev çağrısı bittiğinde değişkenlere ilişkin belleğin tahsisi kaldırılır. Bunların hepsi derleyicideki önceden tanımlanmış bazı rutinler kullanılarak gerçekleşir.Bir programcının bellek tahsisi ve yığın değişkenlerinin tahsisinin kaldırılması konusunda endişelenmesine gerek yoktur. Bu tür hafıza tahsisi aynı zamanda Geçici hafıza tahsisi olarak da bilinir, çünkü yöntem yürütülmesini bitirir bitirmez o yönteme ait tüm veriler otomatik olarak yığından çıkarılır.
Stack de veriler üst üste (LIFO) - Last In, First Out mantığında dizilir ve sırası gelmeden aradaki bir değer ile işlem yapılamaz.Veriler aşağıdan yukarıya doğru birikir.
