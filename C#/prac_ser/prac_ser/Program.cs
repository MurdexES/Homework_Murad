using Serl;
using Music;



namespace Music
{
    class Album : ISerialization
    {
        public Album(string name, string artistName, DateTime releaseDate, float longevity, string studioName)
        {
            Name = name;
            ArtistName = artistName;
            ReleaseDate = releaseDate;
            Longevity = longevity;
            StudioName = studioName;
        }

        public Album createAlbum()
        {
            string tmpName;
            string tmpArtistName;
            DateTime tmpReleaseDate;
            float tmpLongevity;
            string tmpStudioName;

            Console.WriteLine("--Album Creation--");

            Console.WriteLine("Enter name of Album: ");
            tmpName = Console.ReadLine();

            Console.WriteLine("Enter name of Author of Album: ");
            tmpArtistName = Console.ReadLine();

            Console.WriteLine("Enter date of  release Album: ");
            tmpReleaseDate = DateTime.Parse(Console.ReadLine());
            
            Console.WriteLine("Enter longevity of Album: ");
            tmpLongevity = float.Parse(Console.ReadLine());

            Console.WriteLine("Enter name studio of Album: ");
            tmpStudioName = Console.ReadLine();

            Album tmpAlbum = new Album(tmpName, tmpArtistName, tmpReleaseDate, tmpLongevity, tmpStudioName);

            return tmpAlbum;
        }

        public void printAll()
        {
            Console.WriteLine(
                $"Album Name - {Name}\n" +
                $"Album Author`s Name - {ArtistName}\n" +
                $"Album Release Date - {ReleaseDate}\n" +
                $"Album Longevity - {Longevity}\n" +
                $"Album Studio Name - {StudioName}\n"
                );
        }

        public void serializeAlbum(Album album)
        {
            Serializator service = new();

            var json = service.Serialize(album);

            using FileStream fs = new("album_data.json", FileMode.OpenOrCreate);
            using StreamWriter sw = new(fs);

            sw.Write(json);
        }

        public void deserializeAlbum(Album album)
        {
            using FileStream fs = new("album_data.json", FileMode.OpenOrCreate);
            using StreamReader sr = new(fs);

            Serializator service = new();
            var obj = service.Deserialize<Album>(sr.ReadToEnd());

            Console.WriteLine(obj);
        }

        public string Name { get; set; }
        public string ArtistName { get; set; }
        public DateTime ReleaseDate { get; set; }
        public float Longevity { get; set; }
        public string StudioName { get; set; }

    }
}
