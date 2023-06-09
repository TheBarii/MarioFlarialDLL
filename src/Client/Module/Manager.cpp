﻿#pragma once
#include "Manager.hpp"
#include "../Events/EventHandler.hpp"
#include "Modules/Input/TestListener.hpp"
#include "Modules/ClickGUI/GUIMouseListener.hpp"
#include "Modules/Misc/Uninject/Uninject.hpp"
#include "Modules/ClickGUI/ClickGUI.hpp"
#include "Modules/Module.hpp"

namespace ModuleManager {
    std::vector<Module*> modules;
}

void ModuleManager::initialize()
{
    // Test stuff
    EventHandler::registerListener(new TestListener("test"));


    modules.push_back(new Module("test", "woah", "woahhhhhh", 1));
    modules.push_back(new Module("test", "woah", "woahhhhhh", 1));
    modules.push_back(new Module("test", "woah", "woahhhhhh", 1));
    modules.push_back(new Module("test", "woah", "woahhhhhh", 1));
    modules.push_back(new Module("test", "woah", "woahhhhhh", 1));
    modules.push_back(new Module("test", "woah", "woahhhhhh", 1));
    modules.push_back(new Uninject());
    modules.push_back(new ClickGUI());

}

void ModuleManager::terminate()
{
    for (Module* module : modules) {
        module->onDisable();
    }

    modules.clear();
}