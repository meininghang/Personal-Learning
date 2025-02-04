enum Mood{
    Good,
    Sleepy,
    Bad,
}

// fn match_mood(mood:&Mood) -> i32{
//     use Mood::*;
//     let happiness_level = match mood {
//         Happy => 10,
//         Sleepy => 6,
//         NotBad => 7,
//         Angry => 2,
//     };
//     happiness_level
// }

impl Mood{
    fn check(&self){
        use Mood::*;
        match self {
            Good => println!("Feeling good!"),
            Bad => println!("Eh, not feeling so good"),
            Sleepy => println!("Need sleep NOW"),
        }
    }
}

fn main() {
    let my_mood = Mood::Sleepy;
    my_mood.check()
}
