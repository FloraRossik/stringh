#include "s21_string.h"

unsigned int is_delim(char c, const char *delim) {
    int ret = 0;

    while (*delim != '\0') {
        if (c == *delim) {
            ret = 1;
            break;
        }
        delim++;
    }
    return ret;
}

void *s21_memchr(const void *str, int c, s21_size_t n) {
  size_t i;
  unsigned char *tmp_s;
  unsigned char tmp_chr;

  if (str == s21_NULL)
    return (s21_NULL);

  tmp_s = (unsigned char *)str;
  tmp_chr = (unsigned char)c;
  i = 0;
  while (i < n) {
    if (*tmp_s == tmp_chr)
      return(tmp_s);
    i++;
    tmp_s++;
  }
  return (s21_NULL);
}

int s21_memcmp(const void* str1, const void* str2, s21_size_t n) {
  size_t i;
  size_t j;
  unsigned char *tmp_s1;
  unsigned char *tmp_s2;

  if (str1 == s21_NULL && str2 == s21_NULL)
    return (0);
  tmp_s1 = (unsigned char *)str1;
  tmp_s2 = (unsigned char *)str2;

  i = 0;
  j = 0;
  while (i < n) {
    if ( tmp_s1[i] != tmp_s2[j])
      return (tmp_s1[i] - tmp_s2[j]);
    i++;
    j++;
  }
  return (0);
}

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  size_t i;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;

  if (src == s21_NULL)
    return (s21_NULL);

  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;

  i = 0;
  while (i < n) {
    *tmp_dest++ = *tmp_src++;
      i++;
  }
  return (dest);
}

void *s21_memmove(void* dest, const void* src, s21_size_t n) {
    char *pp = (char *)src;
    char *pp2 = (char *)dest;

  if (dest == s21_NULL && src == s21_NULL)
    return (s21_NULL);
  if (pp2 > pp) {
    while (n-- > 0)
    pp2[n] = pp[n];
  } else {
  while (0 < n) {
    *pp2 = *pp;
    pp++;
    pp2++;
    n--;
    }
  }
  return (dest);
}

void *s21_memset(void *str, int c, s21_size_t n) {
  size_t i;
  unsigned char *tmp_s;

  if (str == s21_NULL)
    return (s21_NULL);

  tmp_s = (unsigned char *)str;
  i = 0;
  while (i < n) {
    *tmp_s++ = c;
      i++;
  }
  return (str);
}

char *s21_strcat(char *dest, const char *src) {
  int i;
  int j;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;

  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;
  i = 0;
  while (tmp_dest[i] != '\0') {
        i++;
  }
  j = 0;
  while (tmp_src[j] != '\0') {
    tmp_dest[i] = tmp_src[j];
      i++;
      j++;
  }
  tmp_dest[i] = '\0';
  return (dest);
}

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  int i;
  size_t j;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;
  if (src == s21_NULL)
    return (s21_NULL);
  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;
  i = 0;
  while (tmp_dest[i]!= '\0') {
        i++;
  }
  j = 0;
  while (tmp_src[j] != '\0' && j < n) {
    tmp_dest[i] = tmp_src[j];
      i++;
      j++;
  }
  tmp_dest[i] = '\0';
  return (dest);
}

char *s21_strchr(const char *str, int c)  {
  unsigned char *tmp_s;

  if (str == s21_NULL)
    return (s21_NULL);

  tmp_s = (unsigned char *)str;
  while (*tmp_s != '\0') {
    if (*tmp_s == c)
      return (char *)tmp_s;
    tmp_s++;
  }
  if (c == '\0')
    return (char *)tmp_s;
  return (s21_NULL);
}

int s21_strcmp(const char *str1, const char *str2) {
  int i;
  unsigned char *tmp_s1;
  unsigned char *tmp_s2;
  if (str1 == NULL || str2 == NULL)
    return (0);
  tmp_s1 = (unsigned char *)str1;
  tmp_s2 = (unsigned char *)str2;
  i = 0;
  while (tmp_s1[i] != '\0' && tmp_s2[i] != '\0') {
    if (tmp_s1[i] != tmp_s2[i] || tmp_s1[i] == '\0' || tmp_s2[i] == '\0')
      break;
    i++;
  }
  return (tmp_s1[i] - tmp_s2[i]);
}

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
    const char* end = str1 + n;
    int result = 0;
    for (; result == 0 && str1 != end && (*str1 || *str2); result = *(str1++)-*(str2++)) {}
    return result;
}

char *s21_strcpy(char *dest, const char *src)  {
  int i;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;
  if (dest == s21_NULL || src == s21_NULL)
    return (s21_NULL);
  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;
  i = 0;
  while (tmp_src[i] != '\0') {
    tmp_dest[i] = tmp_src[i];
      i++;
  }
  tmp_dest[i] = '\0';
  return (dest);
}

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  size_t i;
  unsigned char *tmp_dest;
  unsigned char *tmp_src;

  if (n == 0)
    return (dest);
  if (dest == s21_NULL || src == s21_NULL)
    return (s21_NULL);
  tmp_dest = (unsigned char *)dest;
  tmp_src = (unsigned char *)src;
  i = 0;
  while (i < n && tmp_src[i] != '\0') {
    tmp_dest[i] = tmp_src[i];
      i++;
  }
  if (tmp_src[i] != '\0')
    tmp_dest[i] = '\0';
  return (dest);
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
    int ans = 0;
    int found = 0;
    for (; *(str1); str1++) {
        for (int i = 0; *(str2 + i); i++) {
            if (*(str1) == *(str2 + i)) {
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
        ans++;
    }
    return ans;
}

s21_size_t s21_strlen(const char* str) {
  size_t i;
  unsigned char *tmp_s;

  tmp_s = (unsigned char *)str;
  i = 0;
  while (tmp_s[i] != '\0') {
    i++;
  }
  return (i);
}

char *s21_strpbrk(const char *str1, const char *str2)  {
  if (str1 == s21_NULL || s21_strlen(str2) == 0)
    return (s21_NULL);

  while (*str1 != '\0') {
    if (s21_strchr(str2, *str1) != s21_NULL) {
      return(char *)str1;
    }
    str1++;
  }
  return (s21_NULL);
}

char *s21_strrchr(const char *str, int c) {
  int start;

  if (str == s21_NULL)
    return (s21_NULL);

  start = s21_strlen(str);
  while (start >= 0) {
    if (str[start] == c)
      return ((char *)&str[start]);
    start--;
  }
  return (s21_NULL);
}

s21_size_t s21_strspn(const char *str1, const char *str2) {
  size_t count;
  unsigned char *tmp_str1;
  unsigned char *tmp_str2;

  tmp_str1 = (unsigned char *)str1;
  tmp_str2 = (unsigned char *)str2;

  count = 0;
  while (*tmp_str2 == *tmp_str1) {
    count++;
    tmp_str2++;
    tmp_str1++;
  }
  if (count > 0)
    return (count);
  return (0);
}

char *s21_strstr(const char *haystack, const char *needle) {
  unsigned int i;
  unsigned int j;

  if (haystack == s21_NULL)
    return (s21_NULL);

  if (*needle == '\0')
      return ((char *)haystack);

  i = 0;
  while (haystack[i] != '\0') {
    j = 0;
    while (haystack[i + j] != '\0' && haystack[i + j] == needle[j]) {
      if (needle[j + 1] == '\0')
      return ((char *)haystack + i);
      j++;
    }
    i++;
  }
  return (0);
}

char *s21_strtok(char *str, const char *delim) {
  char *tmp_ptr;
  static char *token = s21_NULL;

  if (delim == s21_NULL)
    return (s21_NULL);

  if (str == s21_NULL) {
    if (token == s21_NULL)
      return (s21_NULL);
    str = token;
  }
  if (*str == 0 && *delim != 0)
    return (s21_NULL);
  while (s21_strchr(delim, *str) != s21_NULL)
    str++;
  tmp_ptr = str;
  while (*str != '\0') {
    if (s21_strchr(delim, *str) != s21_NULL)
      break;
    str++;
  }
  if (*str == '\0') {
    token = s21_NULL;
    return (tmp_ptr);
  }
  *str = 0;
  token = str + 1;
  return (tmp_ptr);
}

void *s21_to_upper(const char *str) {
    char *tmp = s21_NULL;
    int count = 0;

    if (str != s21_NULL) {
        tmp = malloc((s21_strlen(str) + 1) * sizeof(char));

        while (*str) {
            char c = *str;
            if ('a' <= c && c <= 'z') {
                *tmp = c - 32;
            } else {
                *tmp = c;
            }
            tmp++;
            str++;
            count++;
        }
        *tmp = '\0';
    }

    char *ret_val = s21_NULL;
    if (tmp) {
        ret_val = (char *)(tmp - count);
    }

    return ret_val;
}

void *s21_to_lower(const char *str) {
    char *tmp = s21_NULL;
    int count = 0;

    if (str != s21_NULL) {
        tmp = malloc((s21_strlen(str) + 1) * sizeof(char));

        while (*str) {
            char c = *str;
            if ('A' <= c && c <= 'Z') {
                *tmp = c + 32;
            } else {
                *tmp = c;
            }
            tmp++;
            str++;
            count++;
        }
        *tmp = '\0';
    }

    char *ret_val = s21_NULL;
    if (tmp) {
        ret_val = (char *)(tmp - count);
    }

    return ret_val;
}

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
    char *tmp = s21_NULL;
    int count = 0;

    if (src != s21_NULL && s21_strlen(src) >= start_index) {
        tmp = malloc((1 + s21_strlen(src) + s21_strlen(str)) * sizeof(char));

        for (s21_size_t i = 0; i < start_index; i++, src++, count++, tmp++)
            *tmp = *src;
        for (; *str; str++, count++, tmp++)
            *tmp = *str;
        for (; *src; src++, count++, tmp++)
            *tmp = *src;
        *tmp = '\0';
    }

    char *ret_val = s21_NULL;
    if (tmp) {
        ret_val = (char *)(tmp - count);
    }

    return ret_val;
}

void *s21_trim(const char *src, const char *trim_chars) {
    char *tmp = s21_NULL;
    int count = 0;

    if (src != s21_NULL && src != NULL) {
        tmp = malloc((s21_strlen(src) + 1) * sizeof(char));
        int is_trim = 0;
        int len = s21_strlen(src) - 1;
        if (trim_chars != s21_NULL) {
            char *trim_ptr = (char *)trim_chars;
            for (; *src; src++) {
                is_trim = 0;
                trim_ptr = (char *)trim_chars;
                while (*trim_ptr) {
                    if (*trim_ptr == *src)
                        is_trim = 1;
                    trim_ptr++;
                }
                if (!is_trim)
                    break;
            }

            len = s21_strlen(src) - 1;

            for (; len >= 0; len--) {
                is_trim = 0;
                trim_ptr = (char *)trim_chars;
                while (*trim_ptr) {
                    if (*trim_ptr == src[len])
                        is_trim = 1;
                    trim_ptr++;
                }
                if (!is_trim)
                    break;
            }
        }

        for (; len >= 0; len--, tmp++, src++, count++) {
            *tmp = *src;
        }

        *tmp = '\0';
    }

    char *ret_val = s21_NULL;
    if (tmp) {
        ret_val = (char *)(tmp - count);
    }

    return ret_val;
}

char *s21_strerror(int errnum) {
  char *arr[132];

  if (errnum < 1 || errnum > 131) {
      char *s = malloc(sizeof(char) * 100);
      s21_sprintf(s, "Unknown error: %d", errnum);
      return s;
  }

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

  return arr[errnum - 1];
}
