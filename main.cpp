#include <iostream>

// We should keep list of programmers CVs
// For each CV we have
//      * name field
//      * birthday year
//      * list of skills
//      * list of previous jobs
//      * we would like to print our CV

const int CV_LIST_SIZE = 3;

char *name[CV_LIST_SIZE];
int birthYear[CV_LIST_SIZE];
char *skills[CV_LIST_SIZE];
char *previousJobs[CV_LIST_SIZE];

void printCV(int cvNumber)
{
    if (CV_LIST_SIZE > cvNumber)
    {
        std::cout << name[cvNumber] << " (" << birthYear[cvNumber] << ")" << std::endl;
        std::cout << "=====================" << std::endl;
        std::cout << "Skills: " << skills[cvNumber] << std::endl;
        std::cout << "Previous work record: " << previousJobs[cvNumber] << std::endl;
        std::cout << std::endl;
    }
}

int main()
{
    name[0] = "John Jonson";
    birthYear[0] = 1978;
    skills[0] = "C++, Java";
    previousJobs[0] = "IBM 1990-1995; Microsoft 1996-2002";

    name[1] = "Dan Davidson";
    birthYear[1] = 1988;
    skills[1] = "C++, Java";
    previousJobs[1] = "IBM 1996-1997";

    name[2] = "Will Walker";
    birthYear[2] = 1977;
    skills[2] = "C++, Java";
    previousJobs[2] = "IBM 1990-1999; Microsoft 1999-2010";

    for (int cvNumber = 0; cvNumber < CV_LIST_SIZE; ++cvNumber)
    {
        printCV(cvNumber);
    }

    return 0;
}

