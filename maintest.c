/*
HEADER
*/


#include "libfts.h"

/*
void 	check_alnum(void)
{
	printf(" ----------------> ISALNUM <---------------- \n\n");
	printf(" Is '%c' a number/character ? return = %d \n", 'a', ft_isalnum('a'));
	printf(" Is '%c' a number/character ? return = %d \n", 'z', ft_isalnum('z'));
	printf(" Is '%c' a number/character ? return = %d \n", '*', ft_isalnum('*'));
	printf(" Is '%c' a number/character ? return = %d \n", 'Z', ft_isalnum('Z'));
	printf(" Is '%c' a number/character ? return = %d \n", 'A', ft_isalnum('A'));
	printf(" Is '%c' a number/character ? return = %d \n", '0', ft_isalnum('0'));
	printf(" Is '%c' a number/character ? return = %d \n", '9', ft_isalnum('9'));
	printf(" Is '%c' a number/character ? return = %d \n\n", '4', ft_isalnum('4'));
	printf("      ------> Test with NULL <------\n");
	printf(" Test return = %d \n", ft_isalnum(0));
	printf(" ---------------------------------------------\n\n");
}  

void 	check_digit(void)
{
	printf("\n ----------------> ISDIGIT <----------------\n\n");
	printf(" Is '%c' a number ? return = %d \n", 'a', ft_isdigit('a'));
	printf(" Is '%c' a number ? return = %d \n", 'z', ft_isdigit('z'));
	printf(" Is '%c' a number ? return = %d \n", '*', ft_isdigit('*'));
	printf(" Is '%c' a number ? return = %d \n", 'Z', ft_isdigit('Z'));
	printf(" Is '%c' a number ? return = %d \n", 'A', ft_isdigit('A'));
	printf(" Is '%c' a number ? return = %d \n", '0', ft_isdigit('0'));
	printf(" Is '%c' a number ? return = %d \n", '9', ft_isdigit('9'));
	printf(" Is '%c' a number ? return = %d \n\n", '4', ft_isdigit('4'));
	printf("      ------> Test with NULL <------\n");
	printf(" Return with NULL = %d \n\n", ft_isdigit(0));
	printf(" ---------------------------------------------\n\n");
}

void 	check_alpha(void)
{
	printf(" ----------------> ISALPHA <----------------\n\n");
	printf(" Is '%c' a character ? return = %d \n", 'a', ft_isalpha('a'));
	printf(" Is '%c' a character ? return = %d \n", 'z', ft_isalpha('z'));
	printf(" Is '%c' a character ? return = %d \n", '*', ft_isalpha('*'));
	printf(" Is '%c' a character ? return = %d \n", 'Z', ft_isalpha('Z'));
	printf(" Is '%c' a character ? return = %d \n", 'A', ft_isalpha('A'));
	printf(" Is '%c' a character ? return = %d \n", '0', ft_isalpha('0'));
	printf(" Is '%c' a character ? return = %d \n", '9', ft_isalpha('9'));
	printf(" Is '%c' a character ? return = %d \n\n", '4', ft_isalpha('4'));
	printf("      ------> Test with NULL <------\n");
	printf(" Test return = %d \n", ft_isalpha(0));
	printf(" ---------------------------------------------\n\n");
}

void 	check_tolower(void)
{
	printf(" ----------------> TOLOWER <----------------\n\n");
	printf(" Test on %c, return = %c \n", 'a', ft_tolower('a'));
	printf(" Test on %c, return = %c \n", 'z', ft_tolower('z'));
	printf(" Test on %c, return = %c \n", '*', ft_tolower('*'));
	printf(" Test on %c, return = %c \n", 'Z', ft_tolower('Z'));
	printf(" Test on %c, return = %c \n", 'A', ft_tolower('A'));
	printf(" Test on %c, return = %c \n", '0', ft_tolower('0'));
	printf(" Test on %c, return = %c \n", '9', ft_tolower('9'));
	printf(" Test on %c, return = %c \n\n", '4', ft_tolower('4'));
	printf("      ------> Test with NULL <------\n");
	printf(" Test return = %c \n", ft_tolower(0));
	printf(" ---------------------------------------------\n\n");
}

void 	check_toupper(void)
{
	printf(" ----------------> TOUPPER <----------------\n\n");
	printf(" Test on %c, return = %c \n", 'a', ft_toupper('a'));
	printf(" Test on %c, return = %c \n", 'z', ft_toupper('z'));
	printf(" Test on %c, return = %c \n", '*', ft_toupper('*'));
	printf(" Test on %c, return = %c \n", 'Z', ft_toupper('Z'));
	printf(" Test on %c, return = %c \n", 'A', ft_toupper('A'));
	printf(" Test on %c, return = %c \n", '0', ft_toupper('0'));
	printf(" Test on %c, return = %c \n", '9', ft_toupper('9'));
	printf(" Test on %c, return = %c \n\n", '4', ft_toupper('4'));
	printf("      ------> Test with NULL <------\n");
	printf(" Test return = %c \n", ft_toupper(0));
	printf(" ---------------------------------------------\n\n");
}

void 	check_isascii(void)
{
	printf(" ----------------> ISASCII <----------------\n\n");
	printf(" Is '%c' : '%d' an ASCII ? return = %d \n", 'a', 'a', ft_isascii('a'));
	printf(" Is '%c' : '%d' an ASCII ? return = %d \n", 'z', 'z', ft_isascii('z'));
	printf(" Is '%c' : '%d' an ASCII ? return = %d \n", 'A', 'A', ft_isascii('A'));
	printf(" Is '%c' : '%d' an ASCII ? return = %d \n", 'Z', 'Z', ft_isascii('Z'));
	printf(" Is '%c' : '%d' an ASCII ? return = %d \n", 245, 245, ft_isascii(245));
	printf(" Is '%c' : '%d' an ASCII ? return = %d \n", 221, 221, ft_isascii(221));
	printf(" Is '%c' : '%d' an ASCII ? return = %d \n", -21, -21, ft_isascii(-21));
	printf("      ------> Test with NULL <------\n");
	printf(" Test return = %d \n", ft_isascii(0));
	printf(" ---------------------------------------------\n\n");
}

void 	check_isprint(void)
{
	printf(" ----------------> ISASCII <----------------\n\n");
	printf(" Is '%c' : '%d' printable ? return = %d \n", 'a', 'a', ft_isprint('a'));
	printf(" Is '%c' : '%d' printable ? return = %d \n", 'z', 'z', ft_isprint('z'));
	printf(" Is '%c' : '%d' printable ? return = %d \n", 'A', 'A', ft_isprint('A'));
	printf(" Is '%c' : '%d' printable ? return = %d \n", 'Z', 'Z', ft_isprint('Z'));
	printf(" Is '%c' : '%d' printable ? return = %d \n", 9, 9, ft_isprint(9));
	printf(" Is '%c' : '%d' printable ? return = %d \n", 28, 28, ft_isprint(28));
	printf(" Is '%c' : '%d' printable ? return = %d \n", 127, 127, ft_isprint(127));
	printf("      ------> Test with NULL <------\n");
	printf(" Test return = %d \n", ft_isprint(0));
	printf(" ---------------------------------------------\n\n");
}

void	check_strlen(void)
{
	char *str1 = "salut!";
	char *str2 = "comment ca va ?";
	char *str3 = "Je veux et j'exige, d'exquises excuses !";
	char *str4 = "Yo!";
	char *str5 = "SAPERLIPOPETE 123456789 ca maaaaaaaaaarche !!";
	char *str6 = "qwertyuiopasdfghjklzxcvbnm";
	printf(" ----------------> STRLEN <----------------\n\n");
	printf(" Length of '%s' is '%zu'\n", str1, ft_strlen(str1));
	printf(" Length of '%s' is '%zu'\n", str2, ft_strlen(str2));
	printf(" Length of '%s' is '%zu'\n", str3, ft_strlen(str3));
	printf(" Length of '%s' is '%zu'\n", str4, ft_strlen(str4));
	printf(" Length of '%s' is '%zu'\n", str5, ft_strlen(str5));
	printf(" Length of '%s' is '%zu'\n\n", str6, ft_strlen(str6));
	printf(" ---------------------------------------------\n\n");
}

void 	check_bzero(void)
{
	char str[4] = "jui";

	printf("[-] BZERO [-]\n");
	printf("[+] str[0] = %d = %c [+]\n", str[0], str[0]);
	printf("[+] str[1] = %d = %c [+]\n", str[1], str[1]);
	printf("[+] str[2] = %d = %c [+]\n", str[2], str[2]);
	printf("[-] FT_BZERO DONE [-]\n");
	ft_bzero(str, 3);
	printf("[+] str[0] = %d = %c [+]\n", str[0], str[0]);
	printf("[+] str[1] = %d = %c [+]\n", str[1], str[1]);
	printf("[+] str[2] = %d = %c [+]\n", str[2], str[2]);
	printf("[-] Test with NULL [-]\n");
	ft_bzero(NULL, 0);
	printf("[-] END OF BZERO [-]\n");
}

 

void 	check_puts(void)
{	
	ft_puts("'Salut les petits gars !'");
	puts("'Salut les petits gars !'");
	ft_puts("aaa\n(null)\n");
	puts("aaa\n(null)\n");
}

void 	check_memcpy(void)
{
	char 	str[2];
	char 	str2[6];

	ft_bzero(str, 2);
	ft_bzero(str2, 6);

	printf("[+] MEMCPY [+]\n");
	printf("[-] Str1 size: %d, Content: %s [-]\n", (int)ft_strlen(str), str);
	printf("[-] Str2 size: %d, Content: %s [-]\n", (int)ft_strlen(str2), str2);
	ft_memcpy((void*)str, (void*)"a", 1);
	ft_memcpy((void*)str2, (void*)"hello", 5);
	printf("[+] Using ft_memcpy [+]\n");
	printf("[-] Str1 size: %d, Content: %s [-]\n", (int)ft_strlen(str), str);
	printf("[-] Str2 size: %d, Content: %s [-]\n", (int)ft_strlen(str2), str2);
	printf("[+] END OF MEMCPY [+]\n");
}

void 	check_strdup(void)
{
	char 	*str;
	char 	f[] = "h";
	char 	s[] = "hello";
	char 	t[] = "";

	printf("[+] STRDUP [+]\n");
	printf("[-] Str init [-]\n");
	str = ft_strdup(f);
	printf("[-] Str after strdup (\"%s\") %d [-]\n", str, (int)ft_strlen(str));
	str = ft_strdup(s);
	printf("[-] Str after strdup (\"%s\") %d [-]\n", str, (int)ft_strlen(str));
	str = ft_strdup(t);
	printf("[-] Str after strdup (\"%s\") %d [-]\n", str, (int)ft_strlen(str));
	printf("[+] END OF STRDUP [+]\n");
}

void 	check_memset(void)
{
	printf("[+] MEMSET [+]\n");
	printf("[-] Befor memset: %s [-]\n", "abcd");
	printf("[-] After memset: %s [-]\n", (char*)ft_memset(ft_strdup("abcd"), 'A', 3));
	printf("[+] END OF MEMSET [+]\n");
}

void 	check_strcat(void)
{
	char 	str[5];

	str[0] = '\0';
	printf("[+] STRCAT [+]\n");
	printf("[-] Str init with emtpy char : %s [-]\n", ft_strcat(str, ""));
	printf("[-] Str: %s [-]\n", ft_strcat(str, "h"));
	printf("[-] Str: %s [-]\n", ft_strcat(str, "ello"));
	printf("[-] Str: %s [-]\n", ft_strcat(str, "!"));
	printf("[+] END OF STRCAT [+]\n");
}
*/
void 	check_cat(void)
{
	int fd;
	printf(" \n\n----------------> FT_CAT <---------------- \n\n");
	fd = open("auteur", O_RDONLY);
	puts("\e[1;31m");
	printf("File descriptor 0 (CTRL + D pout continuer)\n\n");
	puts("\e[1;33m");
	ft_cat(0); // Ctrl + D to Continue !
	puts("\e[1;31m");
	printf("\n\nFichier 'ft_memcpy.s' :\n\n");
	puts("\e[1;33m");
	ft_cat(open("ft_memcpy.s", O_RDONLY));
	puts("\e[1;31m");
	printf("\n\nFichier auteur :\n\n");
	puts("\e[1;33m");
	ft_cat(fd);
	puts("\e[1;31m");
	printf("\n\nFile descriptor incorrect :\n\n");
	ft_cat(-42);
	puts("\e[0m");
	printf("\n\n ---------------------------------------------\n\n");
	close(fd);
}
/*
void		check_memalloc(void)
{
	char	*str;

	printf("[-] MEMALLOC [-]\n");
	str = ft_memalloc(3);
	printf("[+] str[0] = %d = %c [+]\n", str[0], str[0]);
	printf("[+] str[1] = %d = %c [+]\n", str[1], str[1]);
	printf("[+] str[2] = %d = %c [+]\n", str[2], str[2]);
	str[0] = 'a';
	str[1] = 'b';
	printf("[+] str = %s [+]\n", str);
	printf("[-] END OF MEMALLOC [-]\n");
}

void 	check_b(void)
{
	int fd;
	char 	dst[23] = "Swagg de Poule !!";

	fd = open("log.txt", O_RDONLY);
	printf("[+] BONUS [+]\n");
	ft_filezero("log.txt");
	ft_log("[-] YO [-]");
	ft_log("[-] YOO [-]");
	ft_log("[-] YOLO [-]");
	ft_log("[-] SWAGG [-]");
	printf("[+] Lecture de log.txt [+]\n");
	ft_cat(fd);
	close(fd);
	ft_filezero("log.txt");
	printf("[+] Lecture de log.txt [+]\n");
	ft_cat(open("log.txt", O_RDONLY));
	ft_log("[-] Maintenant j'ai juste une ligne ^^ [-]");
	printf("[+] Lecture de log.txt [+]\n");
	ft_cat(open("log.txt", O_RDONLY));
	printf("[+] FT_STRCPY [+]\n");
	printf("%s\n", ft_strcpy(dst, "[-] Yolo [-]"));
	printf("%s\n", ft_strcpy(dst, "[-] Yo [-]"));
	printf("%s\n", ft_strcpy(dst, "[-] lo [-]"));
	printf("%s\n", ft_strcpy(dst, "[-] Lolement votre [-]"));
	printf("[+] END OF FT_STRCPY [+]\n");
	printf("[+] END OF BONUS [+]\n");
}  */

int main(void)
{
	 /*  check_digit();
	   	printf("\n");
	   check_alpha();
	   	printf("\n");
	   check_alnum();
	   	printf("\n");
	   check_tolower();
	   	printf("\n");
	   check_toupper();
	   	printf("\n");
	   check_puts();
	    printf("\n");
	   check_isascii();
	   	printf("\n");
	   check_isprint();
	   	printf("\n");
	   check_strlen();
	    printf("\n");
	   check_bzero();
	   	printf("\n");
	   check_memalloc();
	   	printf("\n");
	   check_strlen();
	   	printf("\n");
	   check_strdup();
	   printf("\n");
	   check_memset();
	   printf("\n");
	   check_memcpy();
	   	printf("\n");
	   check_strcat();
	   printf("\n"); 
	   check_b();
	   	printf("\n");  */
	   check_cat();
	   //	printf("\n");  
	return 0;
}
