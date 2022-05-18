#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

char* fun(int err){

char *arr[132];


if(err < 1 || err > 131)
  return NULL;

arr[0] = "Operation not permitted";
arr[1] = "No such file or directory";
arr[2] = "No such process";
arr[3] = "Interrupted system call";
arr[4] = "Input/output error";
arr[5] = "No such device or address";
arr[6] = "Argument list too long";
arr[7] = "Exec format error";
arr[8] = "Bad file descriptor";
arr[9] = "No child processes";
arr[10] = "Resource temporarily unavailable";
arr[11] = "Cannot allocate memory";
arr[12] = "Permission denied";
arr[13] = "Bad address";
arr[14] = "Block device required";
arr[15] = "Device or resource busy";
arr[16] = "File exists";
arr[17] = "Invalid cross-device link";
arr[18] = "No such device";
arr[19] = "Not a directory";
arr[20] = "Is a directory";
arr[21] = "Invalid argument";
arr[22] = "Too many open files in system";
arr[23] = "Too many open files";
arr[24] = "Inappropriate ioctl for device";
arr[25] = "Text file busy";
arr[26] = "File too large";
arr[27] = "No space left on device";
arr[28] = "Illegal seek";
arr[29] = "Read-only file system";
arr[30] = "Too many links";
arr[31] = "Broken pipe";
arr[32] = "Numerical argument out of domain";
arr[33] = "Numerical result out of range";
arr[34] = "Resource deadlock avoided";
arr[35] = "File name too long";
arr[36] = "No locks available";
arr[37] = "Function not implemented";
arr[38] = "Directory not empty";
arr[39] = "Too many levels of symbolic links";
arr[40] = "Unknown error 41";
arr[41] = "No message of desired type";
arr[42] = "Identifier removed";
arr[43] = "Channel number out of range";
arr[44] = "Level 2 not synchronized";
arr[45] = "Level 3 halted";
arr[46] = "Level 3 reset";
arr[47] = "Link number out of range";
arr[48] = "Protocol driver not attached";
arr[49] = "No CSI structure available";
arr[50] = "Level 2 halted";
arr[51] = "Invalid exchange";
arr[52] = "Invalid request descriptor";
arr[53] = "Exchange full";
arr[54] = "No anode";
arr[55] = "Invalid request code";
arr[56] = "Invalid slot";
arr[57] = "Unknown error 58";
arr[58] = "Bad font file format";
arr[59] = "Device not a stream";
arr[60] = "No data available";
arr[61] = "Timer expired";
arr[62] = "Out of streams resources";
arr[63] = "Machine is not on the network";
arr[64] = "Package not installed";
arr[65] = "Object is remote";
arr[66] = "Link has been severed";
arr[67] = "Advertise error";
arr[68] = "Srmount error";
arr[69] = "Communication error on send";
arr[70] = "Protocol error";
arr[71] = "Multihop attempted";
arr[72] = "RFS specific error";
arr[73] = "Bad message";
arr[74] = "Value too large for defined data type";
arr[75] = "Name not unique on network";
arr[76] = "File descriptor in bad state";
arr[77] = "Remote address changed";
arr[78] = "Can not access a needed shared library";
arr[79] = "Accessing a corrupted shared library";
arr[80] = ".lib section in a.out corrupted";
arr[81] = "Attempting to link in too many shared libraries";
arr[82] = "Cannot exec a shared library directly";
arr[83] = "Invalid or incomplete multibyte or wide character";
arr[84] = "Interrupted system call should be restarted";
arr[85] = "Streams pipe error";
arr[86] = "Too many users";
arr[87] = "Socket operation on non-socket";
arr[88] = "Destination address required";
arr[89] = "Message too long";
arr[90] = "Protocol wrong type for socket";
arr[91] = "Protocol not available";
arr[92] = "Protocol not supported";
arr[93] = "Socket type not supported";
arr[94] = "Operation not supported";
arr[95] = "Protocol family not supported";
arr[96] = "Address family not supported by protocol";
arr[97] = "Address already in use";
arr[98] = "Cannot assign requested address";
arr[99] = "Network is down";
arr[100] = "Network is unreachable";
arr[101] = "Network dropped connection on reset";
arr[102] = "Software caused connection abort";
arr[103] = "Connection reset by peer";
arr[104] = "No buffer space available";
arr[105] = "Transport endpoint is already connected";
arr[106] = "Transport endpoint is not connected";
arr[107] = "Cannot send after transport endpoint shutdown";
arr[108] = "Too many references: cannot splice";
arr[109] = "Connection timed out";
arr[110] = "Connection refused";
arr[111] = "Host is down";
arr[112] = "No route to host";
arr[113] = "Operation already in progress";
arr[114] = "Operation now in progress";
arr[115] = "Stale file handle";
arr[116] = "Structure needs cleaning";
arr[117] = "Not a XENIX named type file";
arr[118] = "No XENIX semaphores available";
arr[119] = "Is a named type file";
arr[120] = "Remote I/O error";
arr[121] = "Disk quota exceeded";
arr[122] = "No medium found";
arr[123] = "Wrong medium type";
arr[124] = "Operation canceled";
arr[125] = "Required key not available";
arr[126] = "Key has expired";
arr[127] = "Key has been revoked";
arr[128] = "Key was rejected by service";
arr[129] = "Owner died";
arr[130] = "State not recoverable";

return arr[err - 1];

}


int main()
{

  int fd = open("fjtfj" ,O_RDONLY);
  if (fd < 0)
  {
    printf("%s\n", fun(errno));
    exit(1);
  }
}