#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*text;
	int		i;

	i = 1;
	while (1)
	{
		text = "Ahmet Mert Kalaman 42 Intra [ ahkalama ]";
		printf("\033[48;5;%dm\033[38;5;%dm%s\033[0m ", i, i, text);
		printf("\r");
		i = (i + 1);
	}

	// ASCII COLORS (Basa main ekle ve sadece yorum satırındakileri yazdir)
	
	// int i = -1;

	// printf("\n");
	// while (++i < 256)
	//	printf("\033[48;5;%dm\033[38;5;%dm-%.3d-",i ,i, i);

	return (0);
}
