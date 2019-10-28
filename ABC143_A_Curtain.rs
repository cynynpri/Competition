use std::io;

fn main() {
    let mut raw_s: String = String::new();
    io::stdin().read_line(&mut raw_s).ok();
    raw_s.pop();
    
    let s_vec: Vec<&str> = raw_s.split(' ').collect();
    let A: i32 = s_vec[0].parse().unwrap();
    let B: i32 = s_vec[1].parse().unwrap();
    let mut ans: i32 = A - B*2;
    if ans < 0 {
        ans = 0;
    }
    println!("{}", ans.to_string());
}
