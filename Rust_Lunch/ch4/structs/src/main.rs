fn main() {
    // let population = 500_000;
    // let capital = String::from("Elista");
    // let leader_name = String::from("Batu Khasikov");
    //
    // let kalmykia = Country{
    //     population:population,
    //     capital:capital,
    //     leader_name:leader_name,
    //     climate:Climate::Continental,
    // };
    let time = 8;
    let skystate = create_skystate(time);
    check_skystate(&skystate);
    println!("test");
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
    Sun(String),
    Stars(String),
}

fn create_skystate(time:i32) -> ThingsInTheSky{
    match time {
        6..=18 => ThingsInTheSky::Sun(String::from("I can see the sun!")),
        _ => ThingsInTheSky::Stars(String::from("I can see the stars")),
    }
}

fn check_skystate(state:&ThingsInTheSky){
    match state {
        ThingsInTheSky::Sun(description) =>
            println!("{description}"),
        ThingsInTheSky::Stars(n) =>
            println!("{n}"),
    }
}
