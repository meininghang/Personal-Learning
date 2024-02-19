fn main() {
    greet_world();
}

fn greet_world() {
    let southern_germany = "Grüß Gott!👌";
    let chinese = "世界，你好👋";
    let english = "World, Hello❤️";
    let regions = [southern_germany, chinese, english];

    for region in regions {
        println!("{}",&region);
    }
}


