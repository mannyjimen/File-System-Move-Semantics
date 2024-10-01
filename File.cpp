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

File::File(const std::string& filename, std::string contents, int *icon){
   
   std::string realfilename = filename;

   int pcounter = 0;
   for (int i = 0; i < filename.length(); i++){
      if (filename[i] == '.')
         pcounter++;
      if ((!std::isalnum(filename[i]) && filename[i] != '.') || pcounter >= 2)
         throw InvalidFormatException("Invalid Folder Name: " + filename);
      if (i == filename.length() - 1){
         if (filename[i] == '.')   
            realfilename = filename + "txt";
         else if (pcounter == 0)
            realfilename = filename + ".txt";
      }
   }

   filename_ = realfilename;
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
   icon_ = rhs.icon_;
}

//copy assignment
File& File::operator = (const File& rhs){
   filename_ = rhs.filename_;
   contents_ = rhs.contents_;
   icon_ = rhs.icon_;

   return *this;
}

//move constructor
File::File(File && rhs){
   filename_ = std::move(rhs.filename_);
   contents_ = std::move(rhs.contents_);
   icon_ = std::move(rhs.icon_);
}

//move assignment
File& File::operator = (File && rhs){
   filename_ = std::move(rhs.filename_);
   contents_ = std::move(rhs.contents_);
   icon_ = std::move(rhs.icon_);

   return *this;
}

//destructor
File::~File(){
   filename_ = "";
   contents_ = "";
   delete icon_;
}