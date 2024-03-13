<img src= "utils/3.png" width= 100%>

---

## Exercice 00 - Aaaaand... OPEN!

<details>
  <summary>Afficher/Masquer</summary>

Implémenter une classe nommée `ClapTrap` représentant un robot doté de capacités d'attaque, de défense, et de réparation, constituant la base pour des personnages de jeu vidéo.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP03/tree/main/ex00)

##### Classe ClapTrap
La classe `ClapTrap` dispose des attributs privés suivants, initialisés selon les spécifications :

- `std::string _name` : Le nom du `ClapTrap`, passé en paramètre au constructeur.
- `unsigned int _hp` : Les points de vie (Hit points) initialisés à `10`.
- `unsigned int _en` : Les points d'énergie initialisés à `10`.
- `unsigned int _ap` : Les points de dégâts d'attaque initialisés à `0`.

##### Fonctions membres publiques

- `attack(const std::string& target)` : Permet à l'instance d'attaquer une cible spécifique, réduisant ses points de vie selon les points d'attaque du `ClapTrap`.
- `takeDamage(unsigned int amount)` : Réduit les points de vie de l'instance en fonction du montant des dégâts reçus.
- `beRepaired(unsigned int amount)` : Augmente les points de vie de l'instance en fonction du montant spécifié, simulant une réparation.

##### Constructeurs et Destructeur

- Le constructeur par défaut et le constructeur avec paramètre initialisent les attributs de l'instance et affichent un message indiquant leur appel.
- Le constructeur de copie et l'opérateur d'affectation permettent de copier et d'assigner les attributs d'une instance à une autre.
- Le destructeur affiche un message lorsqu'une instance de `ClapTrap` est détruite.

</details>

<br>

## Exercice 01 - Serena, my love!

<details>
  <summary>Afficher/Masquer</summary>

Après avoir développé la classe de base `ClapTrap`, l'exercice suivant consiste à créer une classe dérivée `ScavTrap`, qui hérite de `ClapTrap` mais avec ses propres caractéristiques et une capacité spéciale.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP03/tree/main/ex01)

##### Classe ScavTrap
`ScavTrap` est une spécialisation de `ClapTrap` avec les attributs suivants :

- `std::string _name` : Nom du `ScavTrap`, identique à `ClapTrap` mais initialisé différemment selon le besoin spécifique de `ScavTrap`.
- `unsigned int _hp` : Points de vie augmentés à `100`.
- `unsigned int _en` : Points d'énergie augmentés à `50`.
- `unsigned int _ap` : Points d'attaque augmentés à `20`.

##### Fonctionnalités spécifiques à ScavTrap

- `void guardGate();` : Permet au `ScavTrap` d'entrer en mode gardien de porte, affichant un message spécifique pour cette action.

##### Surcharge des méthodes de ClapTrap

Les méthodes `attack`, `takeDamage`, et `beRepaired` sont surchargées pour refléter le comportement et les valeurs spécifiques de `ScavTrap`. Chaque méthode affiche des messages distincts qui reflètent les actions de `ScavTrap`.

</details>

<br>

## Exercice 02 - Repetitive work

<details>
  <summary>Afficher/Masquer</summary>

Dans cet exercice, l'objectif était de créer une classe `FragTrap` qui hérite de `ClapTrap`, similaire à `ScavTrap` mais avec ses propres spécificités, notamment en ce qui concerne les messages affichés lors de la construction et de la destruction, ainsi qu'une capacité spéciale.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP03/tree/main/ex02)

##### Classe FragTrap
`FragTrap` est une extension de `ClapTrap` avec les modifications suivantes :

- `unsigned int _hp` : Les points de vie sont augmentés à `100`.
- `unsigned int _en` : Les points d'énergie sont augmentés à `100`.
- `unsigned int _ap` : Les points de dégâts d'attaque sont augmentés à `30`.

##### Fonctionnalité spéciale de FragTrap

- `void highFiveGuys(void);` : Cette méthode affiche une demande de "High Five" positive, démontrant une capacité unique de `FragTrap`.

##### Surcharge des méthodes de ClapTrap

Les méthodes `attack`, `takeDamage`, et `beRepaired` ont été surchargées pour adapter leur fonctionnement aux attributs spécifiques de `FragTrap`, et chaque action est accompagnée d'un message correspondant à ces ajustements.

</details>

<br>

## Exercice 03 - Now it’s weird! (Bonus)

<details>
  <summary>Afficher/Masquer</summary>

L'exercice 03 introduit une classe `DiamondTrap`, une fusion des fonctionnalités de `ScavTrap` et `FragTrap`, héritant de ces deux classes. Cette classe représente une avancée dans la complexité de l'héritage multiple en C++.

### Mon implémentation

[Lien ici](https://github.com/aceyzz/CPP03/tree/main/ex03)

##### Classe DiamondTrap
La classe `DiamondTrap` combine les caractéristiques et capacités spéciales de ses classes parentes `ScavTrap` et `FragTrap`, tout en ajoutant sa propre fonctionnalité unique :

- **Attributs** : Les points de vie et les points de dégâts sont hérités de `FragTrap`, tandis que les points d'énergie viennent de `ScavTrap`.
- **Capacité Spéciale** (`void whoAmI(void);`) : Permet à `DiamondTrap` d'afficher à la fois son propre nom et le nom de son `ClapTrap` associé, démontrant ainsi une conscience de son identité double.

##### Fonctionnalités héritées
- Utilise la fonction `attack` de `ScavTrap` grâce à l'utilisation de `using ScavTrap::attack;`, permettant à `DiamondTrap` d'attaquer avec les mêmes mécanismes que `ScavTrap`.
- Inclut les capacités spéciales de `guardGate` de `ScavTrap` et de `highFiveGuys` de `FragTrap`, rendant `DiamondTrap` polyvalent dans ses interactions.

</details>

<br>
