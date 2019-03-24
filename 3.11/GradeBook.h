#include <string>

class GradeBook
{
public:
    explicit GradeBook( std::string name1, std::string name2 );
    void setCourseName(std::string name1);
    std::string getCourseName() const;
    void setTeacherName(std::string name2);
    std::string getTeacherName() const;
    void displayMessage() const;
private:
    std::string courseName;
    std::string teacherName;
} ;
