
<div align="center">

![libftm](https://github.com/beyzabektas/42Cursus/assets/91256847/89645507-12f5-416e-99c7-fce28e9e33b4)
# "Libft - ilk kendi kütüphaneniz”
</div>
Bu projenin amacı, diğer tüm projelerimizde kullanmamıza izin verilecek olağan işlevleri yeniden gruplayan bir C kütüphanesi kodlamaktır.**

42’de standart C kütüphane fonksiyonunu kullanmamıza izin verilmiyor, sadece kendi kodladığımız fonksiyonu kullanabiliyoruz. Yani bu kütüphanenin uzun vadeli hedefi, kendi fonksiyonumuzla büyümek.**

Bu kitaplık için izin verilen yalnızca 3 standart kitaplık işlevi vardır:**

- <unistd.h>'den write(),**
- <stdlib.h>'den malloc() ve free().**
- Size_t ve NULL'a erişmek için <string.h> kullanmamıza da izin verilir.**

Lib C İşlevleri: standart C kitaplıklarından gelen işlevlerin orijinalleriyle çakışmasını önlemek için önlerinde “ft_” vardır.(fourty-two)

42’de , bir fonksiyonun ne yaptığını incelemek zorunda değiliz, onları yeniden kodlamak için saatlerce takılıp kaldığınızda, onları derinlemesine anlamak zorunda kalırsınız.
