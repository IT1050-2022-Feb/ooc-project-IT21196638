 #include <iostream> 
  #include <cstring> 
  #include "UnregisteredEmployee.h"
  #include "Resource.h"
  #include "RegisteredEmployee.h"
  #include "Question.h"
  #include "Feedback.h"
  #include "Examiner.h"
  #include "Exam.h"
  #include "Answer.h"
  #include "Administrator.h"
  #include "Enrollment.h"
  #include "Report.h"
  #include "Payment.h"

  using namespace std;
 
int main(){
  
    Question *ques1, *ques2;
    Answer *answ1, *answ2;
    Exam *ex1;
    
    UnregisteredEmployee *UnE1=new UnregisteredEmployee("Bawantha Gamage", "bawantha12@gmail.com", 715869524);
    UnE1->displayUserDetails();
    
    RegisteredEmployee *RegE1=new RegisteredEmployee("Sachin Liyanage ",55,"2001258967V", "sachin04@gmail.com", 7158963245, "172/67C,katuwana,Homagama");
    RegE1->displayUserDetails(); 
    
    Administrator *A1 = new Administrator( 0001,"Mr.George",776832928,"mrgeorge101@gmail.com");
    Report *R1 = new Report(552, "GeorgeFile","2022.10.3");
    R1->addAdmin(A1);
    
    ex1 = new Exam(125, "RHCSA", 15000, ques1, ques2);

    Examiner *exa1 =new Examiner(458,"Namal Kulasuirya","257/5,Navinna,Maharagama","0715896475",450000);
    exa1->displayExaminerDetails();  
    exa1->displayExaminerDetails();
    
    Enrollment *En1=new Enrollment(RegE1,ex1);
    Payment *p1=new Payment(587,"PayPal",15000,"2021/05/08",En1);
    p1->displayPayment();
    
    ques1 = new Question(1, "The project manager reviews projects with the team. in that case what exercise is the team involved in?");
    ques2 = new Question(2, "Explain a part of the Group creativity technique?");
    ques1->addAnswer(answ1);
    ques2->addAnswer(answ2);
    ques1->displayQuestion();
    ques2->displayQuestion();
    
        
    answ1 = new Answer(1, "Risk identification");
    answ2 = new Answer(2, "Brainstorming");
    answ1->addQuestion(ques1);
    answ2->addQuestion(ques2);
    answ1->displayAnswer();
    answ2->displayAnswer();
    
    ex1->displayExamDetails();
    R1->displayReport();
    
    Resource *RE1=new Resource(2335,"Database Design", "Online Tutorial", "https://youtu.be/ztHopE5Wnpc");
    RE1->displayResource();
    
    
    Feedback*fb1=new Feedback("Execellent Exam");
    fb1->displayFeedbackDetails();


  return 0;
}
