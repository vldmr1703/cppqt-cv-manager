#include <iostream>
#include <string>

// We should keep list of programmers CVs
// For each CV we have
//      * name field
//      * birthday year
//      * list of skills
//      * list of previous jobs
//      * we would like to print our CV

class CV
{
public:
    CV(const std::string &name, int birthYear, const std::string &skills, const std::string &previousJobs) :
        mName{name}
      , mBirthYear{birthYear}
      , mSkills{skills}
      , mPreviousJobs{previousJobs}
    {

    }

    void print() const
    {
        std::cout << mName << " (" << mBirthYear << ")" << std::endl;
        std::cout << "=====================" << std::endl;
        std::cout << "Skills: " << mSkills << std::endl;
        std::cout << "Previous work record: " << mPreviousJobs << std::endl;
        std::cout << std::endl;
    }

private:
    std::string mName;
    int mBirthYear;
    std::string mSkills;
    std::string mPreviousJobs;
};


int main()
{
    CV johnsCV {"John Jonson", 1978,"C++, Java", "IBM 1990-1995; Microsoft 1996-2002"};

    CV dansCV("Dan Davidson", 1988, "C++, Java", "IBM 1996-1997");

    CV cvList[] {johnsCV, dansCV, {"Will Walker", 1977, "C++, Java", "IBM 1990-1999; Microsoft 1999-2010"} };

    for (const auto& cv: cvList)
    {
        cv.print();
    }

    return 0;
}

