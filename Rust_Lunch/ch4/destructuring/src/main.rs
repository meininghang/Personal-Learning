struct Person{
    name: String,
    real_name:String,
    height:u8,
    happiness:bool,
}

fn check_if_happy(person: &Person){
    println!("Is {} happy? {}",person.name,person.happiness);
}

fn check_if_happy_destructured(Person{name,happiness,..}:&Person){
    println!("Is {name} happy?{happiness}");
}

fn main() {
    let papa_doc = Person{
        name:"Papa Doc".to_string(),
        real_name:"Clarence".to_string(),
        height:170,
        happiness:false,
    };

    // let Person{
    //     name:fake_name,
    //     real_name,
    //     height:cm,
    //     happiness,
    // } = papa_doc;
    //
    // println!("They call him {fake_name} but his real name is {real_name}
    // He is {cm} cm tall and is he happy?{happiness}");

    check_if_happy(&papa_doc);
    check_if_happy_destructured(&papa_doc);
}
