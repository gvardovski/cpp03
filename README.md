🗂️ Project Structure
The repository is organized into 4 progressive exercises (ex00 - ex03), each building on the previous:

ex00: ClapTrap 🤖
Binary: claptrap
Description: Base class implementation with basic attack, damage, and repair mechanics
Key Features:
❤️ 10 hit points, ⚡ 10 energy points, ⚔️ 0 attack damage
attack(), takeDamage(), beRepaired() methods

ex01: ScavTrap 🛡️
Binary: scavtrap
Description: Introduces inheritance with ScavTrap derived from ClapTrap
Key Features:
❤️ 100 hit points, ⚡ 50 energy points, ⚔️ 20 attack damage
🔁 Overrides attack() method
🚪 Adds guardGate() special ability (Gate Keeper mode)

ex02: FragTrap 💥
Binary: fragtrap
Description: Second derived class demonstrating inheritance hierarchy
Key Features:
❤️ 100 hit points, ⚡ 100 energy points, ⚔️ 30 attack damage
✋ Adds highFivesGuys() special ability

ex03: DiamondTrap 💎
Binary: diamondtrap
Description: Advanced exercise demonstrating multiple inheritance and solving the diamond problem using virtual inheritance
Key Features:
🔀 Inherits from both ScavTrap and FragTrap
🌐 Uses virtual inheritance to resolve ambiguity
🎯 Combines attributes: FragTrap's hit points (100), ScavTrap's energy points (50), FragTrap's attack damage (30)
🆔 Implements whoAmI() to display both DiamondTrap and ClapTrap names
⚔️ Uses ScavTrap's attack() implementation
