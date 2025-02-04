fn main() {
    let population = 500_000;
    let capital = String::from("Elista");
    let leader_name = String::from("Batu Khasikov");

    let kalmykia = Country{
        population:population,
        capital:capital,
        leader_name:leader_name,
        climate:Climate::Continental,
    };
}


struct  Country{
    population:u32,
    capital:String,
    leader_name:String,
    climate: Climate,
}

enum Climate{
    Tropical,
    Dry,
    Temperate,
    Continental,
    Polar,
}

enum ThingsInTheSky{
    Sun,
    Stars,
}
