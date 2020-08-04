using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OpenClosedPrinciple
{
    class Program
    {
        static void Main(string[] args)
        {
            DatabaseCreator<MySql> creator = new DatabaseCreator<MySql>(new MySql());
            creator.OpenDatabase();
            creator.CloseDatabase();

            DatabaseCreator<Oracle> creator2 = new DatabaseCreator<Oracle>(new Oracle());
            creator2.OpenDatabase();
            creator2.CloseDatabase();

            Console.ReadKey();
        }
    }

    public interface IDatabase
    {
        void Open();
        void Close();
    }

    class MsSql : IDatabase
    {
        public void Close()
        {
            Console.WriteLine("MsSql Veritabanına bağlandı");
        }

        public void Open()
        {
            Console.WriteLine("MsSql Veritabanı bağlantısı kesildi!");
        }
    }

    class MySql : IDatabase
    {
        public void Open()
        {
            Console.WriteLine("MySql Veritabanına bağlandı");
        }

        public void Close()
        {
            Console.WriteLine("MySql Veritabanı bağlantısı kesildi!");
        }
    }

    class Oracle : IDatabase
    {
        public void Open()
        {
            Console.WriteLine("Oracle Veritabanına bağlandı");
        }

        public void Close()
        {
            Console.WriteLine("Oracle Veritabanı bağlantısı kesildi!");
        }
    }

    public class DatabaseCreator<T> where T : IDatabase
    {
        private T database;

        public DatabaseCreator(T db)
        {
            database = db;
        }

        public void OpenDatabase()
        {
            database.Open();
        }

        public void CloseDatabase()
        {
            database.Close();
        }
    }

}
