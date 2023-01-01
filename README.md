# cmake-googletest-template: Template project for CMake and GoogleTest in VS Code

Instructions adopted from https://stackoverflow.com/questions/62910867/how-to-run-tests-and-debug-google-test-project-in-vs-code

0. Project name `person`. Change accordingly. 

1. Start with a clean directory:
```
~/path/to/projects/cpp/person # your project lives here
```

2. Add your `cmake` file (`CMakeLists.txt`), and this directory structure:
```
└─person/
  ├─CMakeLists.txt
  ├─src/
  |   ├─main.cpp
  |   └─share/
  |      ├─person.hpp
  |      ├─person.cpp
  |      └─ ... 
  └─tests/
        └─utest-Person.cpp
```

3. Clone and add googletest to this directory. 
```git clone https://github.com/google/googletest```
The directory now looks like this
```
└─cpp/
    ├─ googletest/
    ├─ CMakeLists.txt
    ...
```

4. Suggested `CMakeLists.txt` -- see the included one. 

5. Contents of `main.cpp`, `person.hpp`, `person.cpp` and  `utest-Person.cpp` are a guide. 

6. To run the tests, from the terminal 
```
mkdir build && cd build 
cmake .. 
make
./mytests  
``` 

7. Alternatively, to run the tests from `VS Code` you need the `CMake` & `CMake Tools` extensions. Much handier to also use the `C++ TestMate` extension. 

