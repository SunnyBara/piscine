#include <unistd.h>

int  main(int argc, char **argv)
{
 write (STDOUT_FILENO, "a b c d e f g h i j k l m n o p q r s t u v w x y z\n",52);
 return(0);
}
