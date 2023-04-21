#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int chars_printed = 0;
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == 'c') {
                char c = (char)va_arg(args, int);
                putchar(c);
                chars_printed++;
            } else if (*format == 's') {
                char *s = va_arg(args, char*);
                while (*s != '\0') {
                    putchar(*s);
                    s++;
                    chars_printed++;
                }
            } else if (*format == '%') {
                putchar('%');
                chars_printed++;
            }
        } else {
            putchar(*format);
            chars_printed++;
        }
        format++;
    }

    va_end(args);
    return chars_printed;
}

