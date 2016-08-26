#include "ft_perso.h"
#include "ft_fight.h"

void	ft_fight(t_perso *name3, t_perso *name4, float point);

int main()
{
	t_perso donnie_matrix;
	t_perso frau_farbissina;


	frau_farbissina.name = "frau";
	donnie_matrix.name = "donnie";
	frau_farbissina.life = 35.1;
	donnie_matrix.life = 30.0;
	ft_fight(&donnie_matrix, &frau_farbissina, KICK);
	ft_fight(&frau_farbissina, &donnie_matrix, PUNCH);
	ft_fight(&donnie_matrix, &frau_farbissina, HEADBUTT);
	return (0);
}
