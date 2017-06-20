#include <iostream> // std::cout

int main(int argc, char** argv) {
  std::cout << "bar argc: " << argc << std::endl;
  for (int i=1; i<argc; ++i) {
    std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
  }
}
