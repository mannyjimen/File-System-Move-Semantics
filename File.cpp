#include "File.hpp"
      
std::string File::getName() const {
   return filename_;
}

std::string File::getContents() const {
   return contents_;
}

void File::setContents(const std::string& new_contents) {
   contents_ = new_contents;
}

int* File::getIcon() const {
   return icon_;
}

void File::setIcon(int* new_icon) {
   if (icon_) { delete[] icon_; }
   icon_ = new_icon;
} 

std::ostream& operator<< (std::ostream& os, const File& target) {
   os << "Name: " << target.getName() << std::endl;
   os << "Size: " << target.getSize() << " bytes" << std::endl;
   os << "Contents: " << target.getContents(); 
   return os;
}

bool File::operator<(const File& rhs) const {
   return getName() < rhs.getName();
}

//                       DO NOT EDIT ABOVE THIS LINE. 
//             (unless you want your work to be tested incorrectly)
//    That also means includes. Remember, all other includes go in .hpp

// However, you may notice an operator overload you don't recognize (<<)
// Try calling the following once you've implemented a constructor & getSize():
//    File a; 
//    std::cout << a << std::endl;

// =========================== YOUR CODE HERE ===========================

File::File(const std::string& filename, const std::string& contents, int *icon){
   
   if (filename == ""){
      filename_ = "NewFile.txt";
      return;
   }
   int pcounter = 0; //period counter
   
   for (auto it1 = filename.begin(); it1 != filename.end(); ++it1){
      if (*it1 == '.')
         pcounter++;
      if ((!std::isalnum(*it1) && *it1 != '.') || pcounter == 2){
         throw InvalidFormatException("Invalid Folder Name: " + filename);
      }
      if (it1 == filename.end() - 1){
         if (*it1 == '.'){
            filename_ = filename + "txt";
         }
         else if (pcounter == 0){
            filename_ = filename + ".txt";
         }
         else if (pcounter == 1){
            filename_ = filename;
         }
      }
   }

   contents_ = contents;
   icon_ = icon;
}

size_t File::getSize() const{
   return contents_.size();
}

//copy constructor
File::File(const File& rhs){
   filename_ = rhs.filename_;
   contents_ = rhs.contents_;
   icon_ = new int[ICON_DIM];  //hard copy 
   for (int i = 0; i < ICON_DIM; i++){
      icon_[i] = rhs.getIcon()[i];
   }
}

//copy assignment
File& File::operator = (const File& rhs){
   if (this != &rhs){
      filename_ = rhs.filename_;
      contents_ = rhs.contents_;
      
      delete[] icon_;
      
      icon_ = new int[ICON_DIM];   //hard copy
      for (int i = 0; i < ICON_DIM; i++){
         icon_[i] = rhs.getIcon()[i];
      }
   }
   return *this; // still return *this regardless
}

//move constructor
File::File(File && rhs){
   filename_ = std::move(rhs.filename_);
   contents_ = std::move(rhs.contents_);
   icon_ = rhs.icon_;    //this ends up moving rhs.icon (since its a pointer)
   rhs.icon_ = nullptr;
}

//move assignment
File& File::operator = (File && rhs){
   if (this != &rhs){
      filename_ = std::move(rhs.filename_);
      contents_ = std::move(rhs.contents_);
      
      delete[] icon_;
      
      icon_ = rhs.icon_;   //this ends up moving rhs.icon (since its a pointer)
      rhs.icon_ = nullptr;
   }
   return *this; // still return *this regardless
}

//destructor
File::~File(){
   delete[] icon_;
}