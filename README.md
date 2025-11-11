# ⚙️ Egnima

> **Egnima** — a sleek and modular C/C++ project built with CMake. Designed for clarity, scalability, and experimentation.

---

## 📘 Table of Contents

* [✨ About](#-about)
* [🧩 Features](#-features)
* [🚀 Getting Started](#-getting-started)

* [⚙️ Prerequisites](#️-prerequisites)
* [🏗️ Building](#️-building)
* [▶️ Running](#️-running)
* [💡 Usage](#-usage)
* [📂 Project Structure](#-project-structure)
* [📜 License](#-license)
* [🤝 Contributing](#-contributing)
* [📧 Contact](#-contact)

---

## ✨ About

**Egnima** is a modular, C/C++-based project crafted to explore system-level logic, modular programming, and inter-component communication. Whether you’re learning or building, Egnima’s structure offers a strong foundation for experimenting with sender-receiver logic, encryption, or data flow simulation.

> 🧠 *Think of it as your C/C++ sandbox for mastering modular architecture and build automation.*

---

## 🧩 Features

✅ Clean modular structure — separated headers & source files
✅ Modern CMake build support
✅ Cross-platform: Linux, macOS, Windows
✅ Extendable logic for encoding, networking, or simulation
✅ Lightweight and beginner-friendly

---

## 🚀 Getting Started

### ⚙️ Prerequisites

Ensure you have:

* 🧰 **CMake** ≥ 3.10
* 💻 **C/C++ Compiler** (GCC / Clang / MSVC)
* 🧱 *(Optional)* **Make** or **Ninja** build tools

---

### 🏗️ Building

```bash
git clone https://github.com/roshhellwett/Egnima.git
cd Egnima
mkdir build && cd build
cmake ..
cmake --build .
```

> 💡 Tip: Use `cmake -G "Ninja" ..` for faster builds.

---

### ▶️ Running

After building, you’ll find the executable inside the `build` folder.

```bash
./Egnima [options]
```

Example:

```bash
./Egnima --mode sender --file input.txt
./Egnima --mode receiver --output output.txt
```

---

## 💡 Usage

| Mode        | Description                       | Example Command                                |
| ----------- | --------------------------------- | ---------------------------------------------- |
| 📨 Sender   | Sends data from an input file     | `./Egnima --mode sender --file input.txt`      |
| 📥 Receiver | Receives and saves data to output | `./Egnima --mode receiver --output output.txt` |

> ⚡ Experiment with different data sources or add your own algorithms inside the modules!

---

## 📂 Project Structure

```
Egnima/
├── CMakeLists.txt        # Build configuration
├── main.cpp              # Entry point
├── sender.cpp/.h         # Sender module
├── receiver.cpp/.h       # Receiver module
├── LICENSE               # License file
└── README.md             # This file 😎
```

---

## 📜 License

Licensed under the **Apache License 2.0** — see the [LICENSE](LICENSE) file for details.

---

## 🤝 Contributing

Contributions are always welcome! 💬

1. 🍴 Fork the repository
2. 🌱 Create a feature branch — `git checkout -b feature/AmazingFeature`
3. 💾 Commit your changes — `git commit -m 'Add AmazingFeature'`
4. 🚀 Push — `git push origin feature/AmazingFeature`
5. 🔁 Open a Pull Request

> ✍️ Make sure your code follows consistent formatting and passes all builds.

---

## 📧 Contact

👨‍💻 Developed with ❤️ by **[@roshhellwett](https://github.com/roshhellwett)**
📬 Have suggestions? [Open an issue](https://github.com/roshhellwett/Egnima/issues) or start a discussion!

---

⭐ **If you like this project, give it a star!**
