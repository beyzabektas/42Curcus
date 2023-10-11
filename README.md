<div align="center">

![born2berootm](https://github.com/beyzabektas/42Cursus/assets/91256847/0f6b2ffd-287b-4f41-a4b9-89a983921075)


# "Born2BeRoot or Die2BeRoot”
</div>

Projenin amacı, güvenlik göz önünde bulundurularak bir sanal makineyi doğru bir şekilde kurmaktır.

<div align="center">
<img width="400" alt="Ekran Resmi 2023-10-12 00 55 37" src="https://github.com/beyzabektas/42Cursus/assets/91256847/b4186ac2-af20-421a-8d21-db1dcc6ca893">
</div>

## signature.txt

**`shasum`** komutu, dosyaların veya metin girdilerinin SHA (Secure Hash Algorithm) hash değerlerini hesaplamak için kullanılan bir komut satırı aracıdır. SHA hash değerleri, dosyanın veya verinin bütünlüğünü sağlamak, değişiklikleri tespit etmek ve güvenli kimlik doğrulama gibi amaçlar için kullanılır.

Born2beroot projesinin gönderimi sırasında  sanal makinenin tamamen aynı dosya olup olmadığını kontrol etmenin bir yolu olarak kullanılır ve **signature.txt** dosyasında gönderilir.

<img width="550" alt="Ekran Resmi 2023-08-31 ÖS 3 44 48" src="https://github.com/beyzabektas/42Cursus/assets/91256847/4ab8ad97-2d5d-464b-b40c-77f6777cda5d">

## Sanal Makine (VM-Virtual Machine) nasıl çalışır?

Bir **bilgisayar sistemi,** *başka bir ayrı fiziksel bilgisayarın işlevselliğini* taklit **etmek** için **fiziksel** bir bilgisayardaki yazılım kullanılarak oluşturulur . Sanal Makineler tamamen **yalıtılmıştır , yani VM** içinde bir şey bozulursa , ana makineyi etkilemez.*Yalnızca gerçekten sahip olduğunuz kaynakları verebilirsiniz, bu da donanım kaynaklarının paylaşıldığı anlamına **gelir*** .

Ve bozulursa, o **sanal makineyi** silebilir ve kolayca yeni bir tane oluşturabilirsiniz. **Bu, Hypervisor ( *zaten** kurulu olan  fiziksel bir bilgisayar **ana işletim** sistemi üzerinde birden fazla sanal bilgisayara izin veren bir teknoloji )* kullanılarak gerçekleştirilir .
Sanal Makine kullanmanın faydaları, bunun için yeni bir bilgisayar satın almanız gerekmediğinden, farklı işletim sistemlerini öğrenmek ve denemektir.  

## LINUX DAĞITIMLARI

Linux, açık kaynaklı bir işletim sistemidir ve bu nedenle herkes kendi gereksinimlerine, tercihlerine ve hedeflere göre temel Linux çekirdeğini alıp bunu kendi özgün işletim sistemlerini oluşturmak için kullanabilir. Bu işletim sistemlerine "Linux dağıtımları" denir.

> Örneğin Pardus, Türkiye'de yerel bir girişim olan TÜBİTAK (Türkiye Bilimsel ve Teknolojik Araştırma Kurumu) tarafından geliştirilmiştir.

Ben projemde Debian kullandım.Stabil ve güvenilir bir dağıtım olan Debian, birçok diğer Linux dağıtımının temelini oluşturur. Özgür yazılıma odaklanır ve farklı sürümleri vardır.

## APPArmor

Linux çekirdeğinin bir güvenlik modülüdür.

- "Complain Mode” Şikayet Modu etkinleştirildiğinde, uygulama izin verilmeyen bir şey yaptığında uygulamaları tanımlar ve bu olayları bir günlük dosyasına kaydeder.Böylece potansiyel güvenlik açıklarını ve kötü amaçlı yazılımları tespit eder.(uygulamanın bu erişimleri yapmasına izin verir)
- “Enforce mode” yetkisiz erişimleri engelleyerek kötü amaçlı yazılımların veya saldırıların etkilerini sınırlar.
- “Audit mode” sadece izin verilmeyen erişim taleplerini kaydetmek için kullanılır.

## UFW (Uncomplicated Firewall)

 Linux tabanlı işletim sistemlerinde kullanılan bir güvenlik duvarı yönetim aracıdır. UFW, genellikle Debian ve Ubuntu gibi Debian tabanlı dağıtımlarda varsayılan olarak bulunur. Bu araç, güvenlik duvarınızı (firewall) basit ve kullanıcı dostu bir şekilde yapılandırmanıza ve yönetmenize olanak tanır.
Ağ trafiğini kontrol etmek, belirli portlara erişimi sınırlamak veya izin vermek ve IP adreslerine erişimi kontrol etmek için kullanılır.

# Cron Nedir?

Cron, Unix işletim sisteminde belirli bir görevi belirli bir zamanda yürütmek için kullanılan arka plan programıdır.

<img width="677" alt="cron" src="https://github.com/beyzabektas/42Cursus/assets/91256847/9f82d2ce-c38a-46c8-9ead-3a1d7a798a3a">



