/-----------------------------------------------------------------/

GIT seulement 1 dossier:

1.	git sparse-checkout init
	- initialise le dl partiel

2.	git sparse-checkout set chemin/dossier
	- définit quel dossier prendre, possible de rajouter

3.	git pull
	- pull seulement le dossier désiré
	! si d'autres dossiers s'y trouvent ils sont suppr

4.	git add/commit/push
	- uniquement les dossiers concernes par sparse

5.	git sparse-checkout disble
	- disable

/-----------------------------------------------------------------/


3.10

ft_memmove      : [OK] [OK] [OK] [OK] [FAILED] [FAILED] [OK] [OK] [OK] [OK] [OK] [CRASH] [CRASH] [OK]
[fail]: your memmove does not support the overlap (test 1)
[fail]: your memmove does not support the overlap (test 2)
[crash]: your memmove does not well with NULL as both parameters
[crash]: your memmove does not well with NULL as both parameters and size

6.10

enlevé restrict de strlcy memcpy 

main de test dans strlcpy

9.10

en cours strnstr

14.10

strnstr modifie: 
	ft_strnstr.c:30:84: error: comparison of unsigned expression in ‘>= 0’ is always true [-Werror=type-limits]
	30 |           if (little[j] == '\0' || (little[j + 1] == '\0' && len - 1 >= 0))

	voir fonctionnement 

substr:
	voir sur mac 
	AddressSanitizer:DEADLYSIGNAL
	[1]    1254807 segmentation fault (core dumped)  ./a.out

francinette tout
