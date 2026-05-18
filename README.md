🌍 UIWorld Plugin for Unreal Engine 5.8

Powerful and modular UI framework for Unreal Engine with ready-to-use menus and game flow system.

✨ Overview

UIWorld — это модульный UI-фреймворк для Unreal Engine 5.8, который предоставляет готовую систему интерфейса для игр.

Плагин помогает быстро собирать полноценный UI-цикл игры:

🎮 Main Menu System
⏸️ Pause Menu
⚙️ Settings System
🔄 Loading / Transition Screens
🎬 Startup / Intro Flow

Разработан для ускорения прототипирования и production UI в играх.

👨‍💻 Developer

Кузьменко Василий

🔥 Features
🧩 Готовая UI архитектура (UMG-based)
⚡ Быстрая интеграция в любой проект
🎨 Современная и расширяемая структура UI
🔌 Поддержка Blueprint + C++
🧠 GameInstance-driven UI flow
🚀 Совместимость с Unreal Engine 5.8
🧱 Модульная система экранов
📦 Installation
Клонируй репозиторий:
git clone https://github.com/Vasya010/UIWorld-plugin-ue5.7.git
Перемести плагин:
YourProject/Plugins/UIWorld/
Открой Unreal Engine 5.8
Включи плагин:
Edit → Plugins → UIWorld
Пересобери проект
🧠 Usage

После установки доступны базовые UI модули:

UIWorld GameInstance (flow controller)
Widget System:
MainMenuWidget
PauseMenuWidget
SettingsMenuWidget
LoadingScreenWidget
StartupIntroWidget

Подключение возможно через Blueprint или C++.

📁 Structure
UIWorld/
├── Source/
│   ├── UIWorld/
│   │   ├── Public/
│   │   ├── Private/
├── Resources/
├── UIWorld.uplugin
⚙️ Requirements
Unreal Engine 5.8+
C++ Project (recommended)
🚀 Roadmap
 UI Animations System
 Theme System (Dark / Light / Custom)
 Drag & Drop UI Builder
 Multiplayer UI Sync
 Save/Load UI states
🧪 Status

⚠️ Some experimental systems (rendering / plugins integration) may be disabled in current build for stability.

⭐ Contributing

Pull Requests welcome.
Keep architecture clean and modular.

📜 License

MIT License

💬 Support

Create an Issue on GitHub for bugs or feature requests.

❤️ Credits

Inspired by modern UI frameworks in Unreal Engine and AAA game menu systems.