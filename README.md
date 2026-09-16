# Museum Management System

A console-based C++ application for managing museum operations — built as a coursework project modeled on the **Pakistan Maritime Museum**.

## Overview

This program simulates a simple record-keeping system for a museum, covering staff records, daily visitor/ticket tracking, and an interactive tour through the museum's exhibit sections.

## Features

**Employee Management**
- Add employee records (name, ID number, salary)
- Automatically calculates yearly salary and total payroll
- Search for an employee by ID
- Edit an employee's name, ID, or salary
- Delete an employee record

**Visitor & Ticket Tracking**
- Log the number of visitors per day over a given number of days
- Automatically calculates ticket sales (Rs. 250 per ticket)
- Look up visitor count and ticket sales for a specific day
- View running totals: total days recorded, total visitors, total ticket revenue

**Exhibit Sections**
An interactive walkthrough of four museum sections:
1. **Statues** — Quaid-e-Azam, Allama Iqbal, Al-Khwarizmi, Liaqat Ali Khan, Indus Valley Culture
2. **Scientists** — Jabir ibn Hayyan, Al-Biruni, Al-Khwarizmi, Al-Farabi, Umar Khayyam
3. **Civilizations** — Indus Valley, Ancient Egypt, Ancient China, Inca Civilization, Ancient Greece
4. **Historians** — Arif Hasan, Yasmeen Lari, Henry Adams

Each selection displays sample exhibit items (clothing, artifacts, books, etc.) associated with that figure or civilization.

## How to Run

**Requirements:** A C++ compiler (e.g., `g++`)

```bash
g++ museum_management_system.cpp -o museum_management_system
./museum_management_system
```

On Windows (with MinGW):
```bash
g++ museum_management_system.cpp -o museum_management_system.exe
museum_management_system.exe
```

## Using the Program

On launch, you'll see a main menu with five options:

| Option | Action |
|--------|--------|
| 1 | Add a new record (Employee or Visitor/Day) |
| 2 | Search a record (Employee by ID, or Day detail) |
| 3 | Edit an employee record |
| 4 | Delete an employee record |
| 5 | Show info (Exhibit sections, or overall totals) |

After completing an action, enter `y` to return to the main menu or any other key to exit.

## Tech Stack

- **Language:** C++
- **Concepts used:** Structs, arrays, functions, switch-case menus, loops

## About

Developed by **Izha Safdar** as a coursework project.

---
*This was one of my early C++ projects, built while studying data structures and control flow fundamentals.*
