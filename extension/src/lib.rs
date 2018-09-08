extern crate enigo;
use enigo::{Enigo, Key};

extern crate libc;
use libc::c_char;
use libc::strncpy;

use std::ffi::CString;
use std::ffi::CStr;

fn get_c<T: Into<Vec<u8>>>(t: T) -> *mut c_char {
    CString::new(t).unwrap().into_raw()
}

#[no_mangle]
pub unsafe extern "C" fn RvExtensionVersion(output: *mut c_char, output_size: usize) {
    let v = get_c("0.2");
    strncpy(output, v, output_size);
}

#[no_mangle]
pub unsafe extern "C" fn RVExtension(output: *mut c_char, output_size: usize, function: *mut c_char ) {
    let size = output_size - 1;
    let r_function = CStr::from_ptr(function).to_str().unwrap();
    if r_function == "screenshot" {
        //Take Steam Screenshot
        let mut enigo = Enigo::new();
        enigo.key_click(Key::F12);
    } else if r_function == "setup" {
        //Setup Discord RPC
    }
}

#[no_mangle]
pub unsafe extern "C" fn RVExtensionArgs(output: *mut c_char, output_size: usize, function: *mut c_char, args: &[*mut c_char], arg_count: usize) {
    let size = output_size - 1;
    let r_function = CStr::from_ptr(function).to_str().unwrap();
    if r_function == "update" {
        //Update Discord RPC
    }
}
