//member.h

#ifndef _MEMBER_H_
#define _MEMBER_H_

/** Member Class 
    Keep information about:
        -who member is: name, exp level,
        -what skills they have: evals, body language, vocal variety
        -what roles they've performed recently (past 3 months) and whole history
        -are they mentoring anyone?
        -
        -
**/

class Member {
    private:
        string name;
        int experience; //probably score of 1-5
        vector<Skill*> skills; 
        Member* mentee;
        Member* mentor;


    public:
        

};


/** Officed Decorator 
Maybe think about having a decorator class for officer positions

**/


#endif
