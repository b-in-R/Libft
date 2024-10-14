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
