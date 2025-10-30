grusty
======

Demonstrate calling a Rust dependency in a Go project.

The default Makefile target will build the_rust_part
and then run a Go test that calls it via CGO.

The subdirectory the_rust_part is a cargo project.
It was created with `cargo new the_rust_part --lib  --vcs none`
to avoid having another .git auto generated.
