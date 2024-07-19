# libft

My own C library, the first project of the 42 Common Core: a rewrite of part of libc plus a few extra functions I kept using in the next projects.

- memory and strings: `ft_memset`, `ft_memcpy`, `ft_strlcpy`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`...
- new strings: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`
- output on a file descriptor: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`...
- linked lists (bonus): `ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`...

## Build

```bash
make          # libft.a
make bonus    # adds the list functions
```

Then link it with `cc main.c libft.a`.
