int _atoi(char *s)
{
    int result = 0, sign = 1;

    while (*s && (*s < '0' || *s > '9')) {
        if (*s == '-')
            sign = -sign;
        s++;
    }

    while (*s && (*s >= '0' && *s <= '9')) {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
