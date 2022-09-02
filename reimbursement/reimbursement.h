
//Trust me, there will be a global variable called count at some point
extern int count;

struct Reimbursement {
  int id;
  float amount;
};

typedef struct Reimbursement Reimbursement_t;

float getAmount(Reimbursement_t* r);
int getId(Reimbursement_t* r);
void setAmount(Reimbursement_t* r, float val);


void printReimbursement(Reimbursement_t* r);

