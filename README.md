<img src= "utils/3.png" width= 100%>

## Exercice 00 -  Aaaaand... OPEN!

Implémenter une classe nommée ```ClapTrap``` représentant un robot doté de capacités d'attaque, de réparation, et de résistance aux dégâts. Le but est de simuler un comportement de base dans un contexte de jeu vidéo.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP03/tree/main/ex00)

#####  Classe ClapTrap
La classe ClapTrap dispose des attributs privés suivants, initialisés selon les spécifications :

- ```std::string _name``` : Le nom du ```ClapTrap```, passé en paramètre au constructeur.
- ```unsigned int _health``` : Les points de vie (Hit points) initialisés à ```10```.
- ```unsigned int _energy ```: Les points d'énergie initialisés à ```10```.
- ```unsigned int _attack``` : Les points de dégâts d'attaque initialisés à ```0```.
- ```ClapTrap *_target``` : Pointeur vers un autre ```ClapTrap``` ciblé pour les attaques.

##### Fonctions membres publiques

- ```attack(const std::string& target)``` : Permet à l'instance d'attaquer une cible spécifique, réduisant ses points de vie en fonction des points d'attaque de l'attaquant.
- ```takeDamage(unsigned int amount)``` : Réduit les points de vie de l'instance en fonction de l'amount des dégâts reçus.
- ```beRepaired(unsigned int amount)``` : Augmente les points de vie de l'instance en fonction de l'amount spécifié, simulant une réparation.
- ```setTarget(ClapTrap *target)``` : Définit la cible de l'attaque pour le ```ClapTrap```.

##### Fonctions d'affichage supplémentaires
- ```printAction(std::string entity, const std::string message)``` : Affiche les actions réalisées par l'instance, comme attaquer, réparer, ou prendre des dégâts.
- ```printInfos(void)``` : Affiche les informations actuelles de l'instance, incluant son nom, ses points de vie, points d'énergie, points d'attaque, et la cible actuelle.

##### Constructeurs et Destructeur
- Le constructeur prend en paramètre le nom du ```ClapTrap``` et initialise les autres attributs à leurs valeurs par défaut. Il affiche également un message indiquant son appel.
- Le constructeur de copie permet de créer une nouvelle instance de ```ClapTrap``` en copiant les attributs d'une autre instance.
- L'opérateur d'assignation permet de copier les valeurs d'une instance de ```ClapTrap``` dans une autre.
- Le destructeur affiche un message lorsqu'une instance de ```ClapTrap``` est détruite.

##### Méthodes d'action
- Les méthodes ```attack```, ```takeDamage```, et ```beRepaired``` sont conçues pour simuler les interactions typiques d'un personnage de jeu vidéo. Elles affichent toutes des messages décrivant les actions réalisées.

##### Exemple d'utilisation
L'exemple fourni dans ```main.cpp``` démontre la création de deux instances de ```ClapTrap```, leur interaction par attaques et réparations, et l'affichage de leurs états. Les messages d'affichage facilitent le suivi des opérations et des changements d'état.

<br>

## Exercice 01 - Serena, my love!

Implémenter une classe nommée `ScavTrap` représentant un robot doté de capacités d'attaque, de réparation, et de résistance aux dégâts, héritant de la classe `ClapTrap` pour ajouter une spécialisation.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP03/tree/main/ex01)

##### Classe ScavTrap
La classe `ScavTrap` hérite des attributs de `ClapTrap` et les initialise avec de nouvelles valeurs :

- `std::string _name` : Le nom du `ScavTrap`, passé en paramètre au constructeur.
- `unsigned int _health` : Les points de vie (Hit points) initialisés à `100`.
- `unsigned int _energy `: Les points d'énergie initialisés à `50`.
- `unsigned int _attack` : Les points de dégâts d'attaque initialisés à `20`.
- `ScavTrap *_target` : Pointeur vers un autre `ScavTrap` ciblé pour les attaques.

##### Fonctions membres publiques

- `attack(const std::string& target)` : Permet à l'instance d'attaquer une cible spécifique, réduisant ses points de vie en fonction des points d'attaque de l'attaquant.
- `takeDamage(unsigned int amount)` : Réduit les points de vie de l'instance en fonction de l'amount des dégâts reçus.
- `beRepaired(unsigned int amount)` : Augmente les points de vie de l'instance en fonction de l'amount spécifié, simulant une réparation.
- `setTarget(ScavTrap *target)` : Définit la cible de l'attaque pour le `ScavTrap`.
- `guardGate()` : Active le mode gardien, annonçant que `ScavTrap` est en mode gardien de porte.

##### Constructeurs et Destructeur
- Les constructeurs et le destructeur affichent des messages spécifiques à la création, la copie, et la destruction des instances de `ScavTrap`, différenciant les actions de celles de `ClapTrap`.
- Les messages reflètent la spécialisation de la classe `ScavTrap` et son rôle unique dans le contexte du jeu.

##### Exemple d'utilisation
L'exemple dans `main.cpp` montre la création d'instances de `ScavTrap`, leur interaction via des attaques et la mise en mode gardien. Les différentes interactions démontrent les capacités spéciales de `ScavTrap` ainsi que son héritage de la classe `ClapTrap`.

<br>

## Exercice 02 - Repetitive work

Implémenter une classe nommée `FragTrap` représentant un robot doté de capacités d'attaque, de réparation, et de résistance aux dégâts, héritant de la classe `ClapTrap` avec une spécialisation différente.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP03/tree/main/ex02)

##### Classe FragTrap
La classe `FragTrap` hérite de `ClapTrap` et initialise les attributs avec de nouvelles valeurs :

- `std::string _name` : Le nom du `FragTrap`, passé en paramètre au constructeur.
- `unsigned int _health` : Les points de vie (Hit points) initialisés à `100`.
- `unsigned int _energy` : Les points d'énergie initialisés à `100`.
- `unsigned int _attack` : Les points de dégâts d'attaque initialisés à `30`.
- `FragTrap *target` : Pointeur vers un autre `FragTrap` ciblé pour les attaques.

##### Fonctions membres publiques

- `attack(const std::string& target)` : Permet à l'instance d'attaquer une cible spécifique, réduisant ses points de vie en fonction des points d'attaque de l'attaquant.
- `highFiveGuys(void)` : Affiche une demande de "high five" positive, illustrant la capacité spéciale de `FragTrap`.
- `setTarget(FragTrap *target)` : Définit la cible de l'attaque pour le `FragTrap`.

##### Constructeurs et Destructeur
- Les constructeurs et le destructeur affichent des messages spécifiques à la création, la copie, et la destruction des instances de `FragTrap`, soulignant les différences avec `ClapTrap` et `ScavTrap`.
- Les messages indiquent clairement la chaîne de construction/destruction, montrant l'ordre dans lequel les objets sont construits et détruits.

##### Exemple d'utilisation
L'exemple dans `main.cpp` montre la création d'instances de `FragTrap`, leur interaction via des attaques et la mise en évidence de leur capacité spéciale de "high five". Les différentes interactions démontrent les capacités uniques de `FragTrap` ainsi que son héritage de la classe `ClapTrap`.

<br>

## Exercice 03 - Now it’s weird!

Implémenter une classe nommée `DiamondTrap` qui hérite à la fois des classes `FragTrap` et `ScavTrap`, créant un robot hybride avec des capacités mixtes et une identité propre.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP03/tree/main/ex03)

##### Classe DiamondTrap
La classe `DiamondTrap` combine les attributs et fonctionnalités de ses classes parentes `FragTrap` et `ScavTrap` :

- `std::string _name` : Le nom du `DiamondTrap`, passé en paramètre au constructeur.
- `ClapTrap::name` : Nom du `ClapTrap` interne, dérivé du nom du `DiamondTrap` avec le suffixe "_clap_name".
- Attributs hérités de `FragTrap` :
  - `unsigned int _health` : Points de vie initialisés à ceux de `FragTrap`.
  - `unsigned int _attack` : Points de dégâts d'attaque initialisés à ceux de `FragTrap`.
- Attribut hérité de `ScavTrap` :
  - `unsigned int _energy` : Points d'énergie initialisés à ceux de `ScavTrap`.

##### Fonctions membres publiques

- `attack(const std::string& target)` : Héritée de `ScavTrap`, permet à `DiamondTrap` d'attaquer une cible.
- `highFiveGuys(void)` : Héritée de `FragTrap`, permet à `DiamondTrap` de demander un "high five" positif.
- `guardGate(void)` : Héritée de `ScavTrap`, active le mode gardien de `DiamondTrap`.
- `whoAmI(void)` : Affiche le nom de `DiamondTrap` ainsi que le nom de son sous-objet `ClapTrap`, illustrant sa double identité.

##### Constructeurs et Destructeur

- Le constructeur de `DiamondTrap` initialise le nom du `DiamondTrap` ainsi que celui de son sous-objet `ClapTrap` avec le suffixe approprié. Il affiche également un message spécifique à la création d'une instance `DiamondTrap`.
- Le destructeur affiche un message lors de la destruction de l'instance `DiamondTrap`, suivant l'ordre inverse de la construction.

##### Exemple d'utilisation
L'exemple fourni dans `main.cpp` démontre la création d'instances de `DiamondTrap`, leur utilisation des capacités spéciales héritées de `FragTrap` et `ScavTrap`, et l'invocation de la capacité unique `whoAmI` pour révéler leur double identité.


