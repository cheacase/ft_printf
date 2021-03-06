/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_va.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayatsyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:58:01 by ayatsyny          #+#    #+#             */
/*   Updated: 2017/02/13 22:44:48 by ayatsyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


/*
void var(char *format, ...)
{
		va_list ap;
		char	*test;
		char	*p = format;
			va_start(ap, format);
				if(!strcmp(p, "%d"))
						{
									test  = va_arg (ap, char *);
											printf ("You passed decimal object with value %s\n", test);
												}

					if(!strcmp(format, "%s"))
							{
										char *p = va_arg (ap, char *);
												printf ("You passed c-string \"%s\"\n", p);
													}
						va_end (ap);
}

*/

int main(void)
{
		//var("%d", "548");
		int a = 10;

	printf(":%s:\n", "Hello, world!");
	printf(":%15s:\n", "Hello, world!");
	printf(":%.10s:\n", "Hello, world!");
	printf(":%-10s:\n", "Hello, world!");
	printf(":%-15s:\n", "Hello, world!");
	printf(":%.15s:\n", "Hello, world!");
	printf(":%15.10s:\n", "Hello, world!");
	printf(":%-15.10s:\n", "Hello, world!");

	printf(":% 10.10s:\n", "Hello, world!");
	printf(":%-020.10s:\n", "Hello, world!");

		printf("%.0p, %.p\n", 0, 0);
		printf("[%.5p]\n", 0);
		printf("[%9p]\n", 1234);
		printf("[%9.2p]\n", 1234);
		printf("[%9p]\n", 1234567);
		printf("[%9.2p]\n", 1234567);
		printf("[%2p]\n", 1234);
		printf("[%2.9p]\n", 1234);
		printf("[%2p]\n", 1234567);
		printf("[%2.9p]\n", 1234567);
		printf("finished in point\n");


		printf("test_str [%d]\n", strlen("aaa"));	
	printf("[%-+.10d]\n", 6546);
		printf("[%010.d]\n", 4555);
		printf("[%010.d]\n", -4555);

		printf("[%14.4u]\n", 45);
		printf("[%14.4u]\n", -45);
	
		printf("[%#14.4u]\n", 45);
		printf("[%#14.4u]\n", -45);


        printf("%12d\n", 45);
        printf("%12d\n", -45);
		printf("%5.15d\n", 11232);
        printf("%6.6d\n", -11232);

		printf("%o\n", -023);
		printf("%x\n", -023);
		printf("%03.2d\n", 1);
		printf("%d\n", 10);
		printf("%-d\n", 10);
		printf("%+d\n", 10);
		printf("%0d\n", 10);
		printf("%#d\n", 10);
		printf("% d\n", 10);

		printf("%2d\n", 100);
		printf("%-2d\n", 100);
		printf("%+2d\n", 100);
		printf("%02d\n", 100);
		printf("%#2d\n", 100);
		printf("% 2d\n", 100);
		printf("%d\n", 10);
		printf("%0.2d\n", 1);
		printf("[%m]\n");
		printf("% + - 10 5 40 d", 5487);
		printf("[qwer%3Twer]");
	//	printf([qer%3Twer]");
		char ss[] = "5554876_ diu dif dd000";
		//write(1, "\", 1);
		//printf("test itoa [%d]\n", atoi(ss));
		printf("[% -hlhhd] [% + hlhhd]\n",356, -356);
		printf("[%010x] [%010x]\n", 123, -123);
		printf("[% -010x] [% -010x]\n", 123, -123);
		printf("[%-+010x] [%-+010x]\n", 123, -123);
		printf("[%+5 .21 .6-0d] [%+5  .6 10 .6-0d]\n", 123, -123);
		// printf("[%5 .2 .10d] [%5  .2 .10d]\n", 123, -123);
		// printf("[%- +5 .2  .10d] [%- +5 .2  .10d]\n", 123, -123);
		// printf("[%-+ 9d] [%-+ 9d]\n", 123, -123);
		printf("[%5 ll 14 40  020B d]\n");
		printf("  ==  [%d] \n", printf("00000", a));
//			var("%s %d", "test string", 255);
		printf("[%  012d] [%d]\n", -255, 126);	
		printf("[%012bhh l d]  [%012d]\n",-255);	
		printf("[%l'jllzd] [%d]\n", -255, 126);
		printf("[%+-5d] [%+-5++d]\n", 0, -7);
		printf("[%-+5d] [%-+5d]\n", 0, -7);	
		printf("[%-5d] [%-5d]\n", 0, -7);
		printf("[%+5d] [%+5d]\n", 0, -7);
		printf("[% -+5d] [% -+5d]\n", 0, -7);
		printf("[% +-5d] [% +-5d]\n", 0, -7);
		printf("[% 12d] [%d]\n", 255, 126);
		printf("[%-12d] [%d]\n", 255, 126);
		printf("%%\n");
        return 0;
}
