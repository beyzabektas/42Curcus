<div align="center">

![minitalkm](https://github.com/beyzabektas/42Cursus/assets/91256847/ea3bbbf3-89dd-40c7-8d16-a14a2cb93eca)

# "Minitalk - Sinyal Gönderme”
</div>

Bu projenin amacı, UNIX sinyallerini kullanarak küçük bir veri değişim programını
kodlamaktır.

SIGUSR1 ve SIGUSR2 kullanıcı sinyalleri kullanıldı.Bu sinyaller programcılar için ayrılmıştır ve asla işletim sistemi tarafından kullanılmaz. Projede SIGUSR1 sinyalini 0 gönderen, SIGUSR2 sinyalini de 1 gönderen olarak seçtik.

# Signal=Software Interrupt 

Sinyaller, çalışan bir işlemi başka bir eylemi gerçekleştirmek üzere kesintiye uğratmak için kullanılan yazılım kesintileridir. Bu kesintilere genellikle veri yolu hataları veya segfault'lar gibi çeşitli durumlarda ve ctrl+c komutuyla bir program sonlandırılmaya çalışıldığında karşılaşılır.
SIGINT, SIGABRT, SIGQUIT, SIGUSR1 ve SIGUSR2 dahil olmak üzere farklı sinyal türleri vardır.
Bir sinyal etkinleştirildiğinde, süreç çekirdeğe bir sinyal gönderir ve çekirdek daha sonra sig_handler()üç olası eylemden birini gerçekleştirmek için işlevi kullanır: yoksay, yakala veya varsayılan.
Bir sinyalin göz ardı edilmesi, sürecin kesintiye yanıt vermediği anlamına gelir; ancak SIGKILL ve SIGSTOP gibi belirli sinyallerin göz ardı edilemeyeceği de unutulmamalıdır. Bir sinyal yakalanırsa süreç, kesintiyi ele almak için çekirdeğe bir işlev kaydeder. Bir sinyalin varsayılan davranışını yürütmesi, işlemin SIG_DFL sinyalini kullandığını gösterir.

Sinyaller sistemde 1'den başlamak suretiyle nümerik değerlerle gösterilirler.
Örnek olarak 1 nolu sinyal, hemen her sistemde HUP sinyali olarak değerlendirilirken 9 nolu sinyal de KILL sinyali olarak bilinir.

Bununla birlikte uygulamalarımızda sinyal kullandığımızda bu rakamların kullanılması kesinlikle önerilmez. POSIXsinyalleri için uygulama içerisinde <signal.h> dosyası include edilmeli ve SIGHUP, SIGKILL gibi ilgili numaralara ait sabit tanımları kullanılmalıdır.

## Neden?
Gelecekte kodu tekrar incelediğinizde, 1 numarasının SIGHUP sinyalini temsil ettiğini hatırlamak zor olabilir. Ancak, SIGHUP sembolik adını kullanmak, kodun daha anlaşılır olmasını sağlar.POSIX standartları, gelecekte sinyallerle ilgili değişiklikler yapılabilir.

![1__ePZ-7mbiJImsE21vrqX9g](https://github.com/beyzabektas/42Cursus/assets/91256847/756bad35-839d-4a8f-8b5e-848cda941347)

## İşlem Kimliği (PID)
PID , işletim sistemindeki bir işlemi benzersiz şekilde tanımlayan işaretsiz bir tamsayı değeridir . Bir işlem oluşturulduğunda işletim sistemi tarafından atanır ve işlemin ömrü boyunca sabit kalır . Bir işlem sona erdiğinde, PID'si yeni bir işlem için yeniden kullanılabilir , ancak bir işlemin varlığı sırasında PID'si değişmeden kalır.

## kill( )
kill - terminate or signal a process
Kill komutu iki parametreyi kabul eder: 
bir sinyal adı (veya numarası) ve bir işlem kimliği.


kill -<signal> <PID>

Her duruma uygun sinyal, önceden bir makro değişken olarak tanımlanır, böylece uygun bir sinyal işleyici kullanılarak işlenebilir.

Sinyal gönderme işlemi, hedef işlem asenkron bir şekilde çalışırken gerçekleşir. Yani, gönderilen sinyal işlemi derhal etkilemez; işlem, o an çalışmakta olduğu işi tamamlar ve ardından sinyal işlenir



<div id="header" align="center">
  <img src="https://media.giphy.com/media/RNZIqvlB7cAyCdh9Gu/giphy.gif" width="200"/>
</div>
