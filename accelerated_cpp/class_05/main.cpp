#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

#include "Student_info.h"
#include "grade.h"

using std::cin;
using std::cout;
using std::endl;
using std::domain_error;
using std::vector;
using std::sort;
<<<<<<< Updated upstream

bool compare(const Student_info& s1 , const Student_info& s2);
=======
using std::list;
>>>>>>> Stashed changes

int main (int argc, char ** argv){
  Student_info student;
  vector<Student_info> students;
  char flag;

  while (cout << "\nStudent: @_@" <<endl, read(cin, student)){
    students.push_back(student);
  unknow:
    cout << "Continue ? [y/n]" ;
    cin >> flag;
    if (flag == 'y')
      continue;
    else if (flag == 'n')
      break;
    else{
      cout << "Unknow answer." << endl;
      goto unknow;
    }
  }

  sort(students.begin(), students.end(), compare);

<<<<<<< Updated upstream
  try{
    vector<Student_info>::size_type i;
    double score;
    for (i=0; i<students.size(); i++){
      score = grade(students[i]);
      cout << "\n{Students} ^>-<^" << endl;
      cout << "[name]: " << students[i].name << "\t";
      cout << "[score]: " << score << endl;
    }
  }catch(domain_error e){
    e.what();
    return 1;
  }

=======
  // vector<Student_info> fail = extract_fails(students);
  // vector<Student_info> fail = extract_fails_v2(students);
  // vector<Student_info> fail = extract_fails_v3(students);
  list<Student_info> ss;
  vector<Student_info>::size_type k;
  for (k=0; k<students.size(); ++k){
    ss.push_back(students[k]);
  }

  list<Student_info> fail = extract_fails_v4(ss);

  list<Student_info>::iterator iter ;

  for (iter = ss.begin(); iter != ss.end(); ++iter){
    cout << "{success} : " << iter->name<<endl;
  }
  for (iter = fail.begin(); iter != fail.end(); ++iter){
    cout << "{failure} : " << iter->name<<endl;
  }

  // for (k=0; k<students.size(); ++k){
  //   cout << "{success} : " << students[k].name<<endl;
  // }
  // for (k=0; k<fail.size(); ++k){
  //   cout << "{failure} : " << fail[k].name<<endl;
  // }

  // try{
  //   vector<Student_info>::size_type i;
  //   double score;
  //   for (i=0; i<students.size(); i++){
  //     score = grade(students[i]);
  //     cout << "\n{Students} ^>-<^" << endl;
  //     cout << "[name]: " << students[i].name << "\t";
  //     cout << "[score]: " << score << endl;
  //   }
  // }catch(domain_error e){
  //   e.what();
  //   return 1;
  // }

>>>>>>> Stashed changes
  return 0;
}
