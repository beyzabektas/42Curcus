<div align="center">

![ft_printfe](https://github.com/beyzabektas/42Cursus/assets/91256847/dd58a85d-494b-4eae-a051-f02e1696b760)

# "Printf - Çünkü putnbr ve putstr yeterli değil”
</div>

"printf" fonksiyonunun adındaki `"f", "formatlı" (formatted)` çıktı anlamına gelir."printf" fonksiyonu, C programlama dilinde kullanılan bir çıktı fonksiyonudur ve formatlı çıktı üretmek için kullanılır.

Formatlı çıktı, özel `format belirteçleri (format specifier)` kullanılarak belirli tipte verilerin istenen biçimde ekrana yazdırılmasını sağlar. Bu format belirteçleri, **`%`** işaretiyle başlar ve belirli bir veri türünün nasıl gösterileceğini belirtir. 
Örneğin, **`%d`** tamsayıları, **`%f`** kayan noktalı sayıları, **`%s`** karakter dizilerini, **`%c`** karakterleri ve diğer birçok veri türünü ekrana yazdırmak için kullanılır.

# Variadic Function Nedir?

Değişken fonksiyonlar, başlangıçta toplam eleman sayısı bilinmeyen fonksiyonlardır. Örneğin, printf(“%s %d”, “hello”, 0)  ile iki şey veya printf(“%s %d %c”, “hello”, 0, 'w') 3 şey yazdırabilirsiniz.

Yazdırmaya gerçekten başlamadan önce kaç tane yazdırmanız gerektiğini bilmiyorsunuz. Aşağıda basit bir fonksiyon yazdım. Bunu adım adım birlikte inceleyeceğiz. 

![1](https://github.com/beyzabektas/42Cursus/assets/91256847/c6358266-b368-49d7-ab50-25d0d57795ab)


# #include <stdarg.h>

C Programlama Dili'ndeki fonksiyonlara geçirilen değişken sayıdaki parametrelere erişim sağlamak için kullanılan makro fonksiyonları ve veri bildirimleri standart kütüphanedeki **stdarg.h** başlık dosyasında yer almaktadır.

# **Bunlar nedir - va_list , va_start , va_arg , va_end ?**

Her şeyden önce, isimleri “variable(değişken)” den geliyor. Değişken Listesi, değişken başlangıcı, değişken argümanı, değişken sonu, değişken kopyası vb. C kitaplığı makroları olarak bilinirler.

Bu makroları kullanmak istediğinizde, va_list türünde bir değişken tanımlayarak başlarsınız.

O zaman “değişken başlangıcı” anlamına gelen va_start kullanmamız gerekiyor ve ne işe yaradığını tahmin edebilirsiniz. Evet. va_start() makrosu, sonraki va_arg() ve va_end() çağrıları için *arg_ptr işaretçisini başlatır. v*ariable_name bağımsız *değişkeni,* parametre listesinde   en sağdaki adlandırılmış parametrenin tanımlayıcısıdır (`, …`'den önceki). 

va_arg() makrosundan önce va_start() makrosunu kullanın. Karşılık gelen va_start() ve va_end() makro çağrıları aynı işlevde olmalıdır. 

![2](https://github.com/beyzabektas/42Cursus/assets/91256847/ee49e88d-6cc0-44b6-881f-e39b6bc7c578)

Kısacası, va_start() yazdığımızda değişkenlerimizi başlatıyoruz. Parantez içinde iki şey yazdık. İlk şey, va_list olan arg değişkenidir. Programa bu listeye gelen değişkenleri doldurmasını söylüyoruz. Miktar yazdığım ikinci şey. Neden? Çünkü yukarıda fonksiyonumuzu yazarken `…`. Bu da ***miktar***`…` değişkeninden sonra gelir . Yani temelde programa tam olarak bunu söylüyoruz. ***Miktar değişkeninden*** sonra bazı değişkenler gelecek ama ne kadar çok ne tür olduğunu bilmiyorum. Tamam, değişkenlerimizi başlattık. Şimdi onları kullanabiliriz.

![3](https://github.com/beyzabektas/42Cursus/assets/91256847/36a338e7-3cf8-4076-bc80-b2c7694652d0)

Sonunda değişkenlerimizi kabul edip kullandığımız yere geldik. Burada while döngümde va_arg kullandım ve ona iki şey verdim. Birincisi `arg`, ikincisi ise `int`. `arg`yukarıda belirttiğimiz gibi değişken listemizdir. `int` ile programa bundan sonraki değişkenlerin tamsayı olacağını söylüyoruz. Kullanıcı tamsayı yerine bir şey göndermeye çalışırsa, davranış tanımsızdır.

## **Son olarak**

Aşağıda da görebileceğiniz gibi, fonksiyonumuza 3 numarayı gönderelim veya 7 numarayı gönderelim, bunların üstesinden gelebilir. Yani fonksiyonumuz kullanıcı isteğine göre genişleyip küçülebilir. **Ve aslında Variadic Functions'ı** kullanmanın asıl amacı da budur .

![4](https://github.com/beyzabektas/42Cursus/assets/91256847/c9924e2d-b41e-47d1-862a-4054c8a2e3e6)

