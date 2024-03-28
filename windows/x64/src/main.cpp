#include <iostream>
#include <cstring>

int main(int argc, char** argv)
{
    std::cout << R"(
                 /                          
        ///*****////////                
      //*****@**@*********///////       
     .//****@**@**@**@*************///  
     //*************@*****************//
    //*********************************/
   ,//********************************//
   //***@@@**************************// 
  //***@@****@@**********************// 
  //**%@*****@@*********************//  
 //***@@**@@@***@@****@@***********//   
 //**@@********@@******@***********//   
 ///*/*/*/*/*/*(@/*/*/@@**********//    
   ////////////////////////////////     
        .//////////////////////////     
                  ///////////////               
    )" << '\n';

    if (argc < 2)
    {
        std::cout << "polonium: usage\n\tpolonium <files>\n\tpolonium <files> -o <filename>\n";
        return 2;
    }
    
    if (argc > 1 && std::strcmp(argv[1], "--version") == 0)
    {
        std::cout << "polonium x64 Compiler, made by urs truely, universeoforanges (so quirky!!11 ikr)\n";
        std::cout << "Polonium Compiler Version v1.0.0p\n";
    }

    return 0;
}