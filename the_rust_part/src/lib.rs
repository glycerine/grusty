
// The no_mangle attribute tells Rust not to
// "mangle" the function name,
// so it can be easily found by the C linker.
#[unsafe(no_mangle)]
pub unsafe extern "C" fn add(left: i32, right: i32) -> i32 {
    left + right
}
