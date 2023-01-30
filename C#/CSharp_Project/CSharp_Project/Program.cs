Console.InputEncoding = System.Text.Encoding.UTF8;

namespace Main
{
    class Menu
    {
        Menu() { }

        void StartMenu()
        {
            Console.WriteLine("~--Menu--~\n" +
                "1 - Create Dictionary\n" +
                "2 - Edit Dictionary\n" +
                "3 - Search The Word\n" +
                "4 - Save To File\n" +
                "5 - Exit Program\n"
                );
        }
    }
}


