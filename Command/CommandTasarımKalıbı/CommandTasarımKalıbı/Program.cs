using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CommandTasarımKalıbı
{
    class Program
    {
        static void Main(string[] args)
        {
            UzaktanAracKontrol kontrol = new UzaktanAracKontrol();
            Tır tır = new Tır();
            Kamyon kamyon = new Kamyon();

            kontrol.setCommand(new TırYolaCikCommand(tır));
            kontrol.islemSec();
            kontrol.setCommand(new TırHedefteDurCommand(tır));
            kontrol.islemSec();

            kontrol.setCommand(new KamyonYolaCikCommand(kamyon));
            kontrol.islemSec();
            kontrol.setCommand(new KamyonHedefteDurCommand(kamyon));
            kontrol.islemSec();

            Console.ReadKey();

        }
    }

    public interface Command
    {
        // Uygulanacak Komutları yapmak için gerekli fonksiyon
        void IslemYap();
    }

    public interface AracYapılacaklar
    {
        // Aracların yaptıkları işlem
        void YolaCik();
        void HedefteDur();
    }



    public class Tır : AracYapılacaklar
    {
        public void YolaCik()
        {
            Console.WriteLine("Tir hedefe dogru yola cikti");
        }
        public void HedefteDur()
        {
            Console.WriteLine("Tır Urünleri hedefe ulastirdi");
        }
    }

    class TırYolaCikCommand : Command
    {
        Tır tir;
        
        public TırYolaCikCommand(Tır tir)
        {
            this.tir = tir;
        }
        //Tır'ın yola çıkma komutu
        public void IslemYap()
        {
            tir.YolaCik();
        }
    }

    class TırHedefteDurCommand : Command
    {
        Tır tir;
        public TırHedefteDurCommand(Tır tir)
        {
            this.tir = tir;
        }
        //Tır'ın yola çıkma komutu
        public void IslemYap()
        {
            tir.HedefteDur();
        }
    }

    public class Kamyon : AracYapılacaklar
    {
        public void YolaCik()
        {
            Console.WriteLine("Kamyon hedefe dogru yola cikti");
        }
        public void HedefteDur()
        {
            Console.WriteLine("Kamyon Urünleri hedefe ulastirdi");
        }
    }

    class KamyonYolaCikCommand : Command
    {
        Kamyon kamyon;
        public KamyonYolaCikCommand(Kamyon kamyon)
        {
            this.kamyon = kamyon;
        }
        //Kamyon'un yola çıkma komutu
        public void IslemYap()
        {
            kamyon.YolaCik();
        }
    }

    class KamyonHedefteDurCommand : Command
    {
        Kamyon kamyon;
        public KamyonHedefteDurCommand(Kamyon kamyon)
        {
            this.kamyon = kamyon;
        }
        //Kamyon'un yola çıkma komutu
        public void IslemYap()
        {
            kamyon.HedefteDur();
        }
    }

    class UzaktanAracKontrol
    {
        Command command;  

        public void setCommand(Command command)
        { 
            this.command = command;
        }
        //Aracların komutlarını yapma
        public void islemSec()
        {
            command.IslemYap();
        }
    }


}
