//The shmat() system call attaches the shared memory segment to the address space of the
//calling process
//It uses the following syntax
void * shmat(int shmid,
             const void *shmaddr,
             int shmflg)