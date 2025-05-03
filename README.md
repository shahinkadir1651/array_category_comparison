# C++ vs JavaScript: Array Allocation Comparison

This repository demonstrates how C++ and JavaScript handle array memory allocation. It covers four main types of array allocation:

# 1. Fixed Stack Dynamic

C++: Stack-allocated array with a fixed size at compile-time.

JavaScript: Simulated fixed-size array using dynamic heap allocation (no stack arrays in JavaScript).

# Stack Dynamic

C++: Stack-allocated array where the size is determined at runtime using Variable Length Arrays (VLAs).

JavaScript: Simulated stack array using the Array object (always heap-based in JavaScript).

# 3. Fixed Heap Dynamic

C++: Heap-allocated array with a fixed size.

JavaScript: Heap-based array created with a fixed length.

# 4. Heap Dynamic
C++: Heap-allocated array with a runtime size.

JavaScript: Array size is determined at runtime with dynamic growth.

# Conclusion
C++ provides more control over memory, allowing efficient low-level memory management.
JavaScript, by design, abstracts memory management with garbage collection and heap-based arrays, offering a simpler, higher-level approach.
