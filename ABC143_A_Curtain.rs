use std::io;

fn getstdin_i32() -> Vec<i32> {
    let mut iobuffer: String = String::new();
    io::stdin().read_line(&mut iobuffer).ok();
    iobuffer.pop();  // remove '\n';

    let buf_strvec: Vec<&str> = iobuffer.split(' ').collect();
    let mut rtn_vec_i32: Vec<i32> = Vec::new();
    for s in buf_strvec{
        rtn_vec_i32.push(s.parse().unwrap());
    }

    return rtn_vec_i32;
}

fn main() {
    let mut in_vec: Vec<i32> = getstdin_i32();
    let A: i32 = in_vec[0];
    let B: i32 = in_vec[1];
    let mut ans: i32 = A - B*2;
    if ans < 0 {
        ans = 0;
    }
    println!("{}", ans.to_string());
}
