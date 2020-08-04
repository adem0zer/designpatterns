using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DecoratorTasarımKalıbı
{
    class Program
    {
        static void Main(string[] args)
        {
            Pizza tavukluPizza = new TavukluPizza();
            Pizza sosluTavukluPizza = new SosluPizzaDecorator(new TavukluPizza());
            Console.WriteLine("Sossuz");
            tavukluPizza.pizzaYap();
            Console.WriteLine("Soslu");
            sosluTavukluPizza.pizzaYap();

            Console.WriteLine("-------------");

            Pizza sucukluPizza = new SucukluPizza();
            Pizza sosluSucukluPizza = new SosluPizzaDecorator(new SucukluPizza());
            Console.WriteLine("Sossuz");
            sucukluPizza.pizzaYap();
            Console.WriteLine("Soslu");
            sosluSucukluPizza.pizzaYap();

            Console.ReadKey();
        }
    }

    abstract class Pizza
    {
        public abstract void pizzaYap();
    }

    class SucukluPizza : Pizza
    {
        public override void pizzaYap()
        {
            Console.WriteLine("Sucuklu pizza yapılıyor");
        }
    }

    class TavukluPizza : Pizza
    {
        public override void pizzaYap()
        {
            Console.WriteLine("Tavuklu pizza yapılıyor");
        }
    }

    abstract class PizzaDecorator : Pizza
    {
        protected Pizza pizzaDecorator;

        public PizzaDecorator(Pizza pizzaDecorator)
        {
            this.pizzaDecorator = pizzaDecorator;
        }
        public override void pizzaYap()
        {
            pizzaDecorator.pizzaYap();
        }
    }

    class SosluPizzaDecorator : PizzaDecorator
    {
        public SosluPizzaDecorator(Pizza pizzaDecorato) : base(pizzaDecorato)
        {
        }

        public override void pizzaYap()
        {
            pizzaDecorator.pizzaYap();
            // Yeni bir özellik ekleyerek decorator tasarımına uymuş oluyoruz
            bolSosEkle(pizzaDecorator);
        }

        private void bolSosEkle(Pizza pizzaDecorator)
        {
            Console.WriteLine("Bol Sos Eklendi " + pizzaDecorator.GetType());
        }

    }


}
