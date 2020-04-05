#include "features.hpp"
#include "clantag.h"
#include <Windows.h>
#include <stdio.h>
#include <string>
#include <vector>
#include "Math/math.hpp"

/*void clantag::vitamins(CUserCmd* pCmd){
	if (!Menu::Config.clantag)
		return;

	if (!Interfaces::Engine->IsInGame())
		return;

	static auto ClanTagOffset = 0x89E00;
	static auto tag = ("+ gamereverse.pub +");
	if (ClanTagOffset)
	{
		static auto dankesttSetClanTag = reinterpret_cast<void(__fastcall*)(const char*, const char*)>(ClanTagOffset);
		dankesttSetClanTag(tag, tag);
	}
    static auto SetClanTag = 0x89E00;
	static auto tag1 = ("+ gamereverse.pub +");
	static auto tag2 = ("+ gamereverse.pub -");
	static auto tag3 = ("- gamereverse.pub -");
	static auto tag4 = ("- gamereverse.pub +");
	if (SetClanTag)
	{
		static auto timer = 0;

		if (timer = 0) {
			SetClanTag(tag1, tag1);
			Sleep(1000);
			SetClanTag(tag2, tag2);
			Sleep(1000);
			SetClanTag(tag2, tag2);
			Sleep(1000);
			SetClanTag(tag2, tag2);
			timer++;
		}
		else {
			timer = 0;
		}
	}
}

std::uint8_t* PatternScan(void* module, const char* signature)
{
    static auto pattern_to_byte = [](const char* pattern) {
        auto bytes = std::vector<int>{};
        auto start = const_cast<char*>(pattern);
        auto end = const_cast<char*>(pattern) + strlen(pattern);

        for (auto current = start; current < end; ++current) {
            if (*current == '?') {
                ++current;
                if (*current == '?')
                    ++current;
                bytes.push_back(-1);
            }
            else {
                bytes.push_back(strtoul(current, &current, 16));
            }
        }
        return bytes;
    };

    auto dosHeader = (PIMAGE_DOS_HEADER)module;
    auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)module + dosHeader->e_lfanew);

    auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
    auto patternBytes = pattern_to_byte(signature);
    auto scanBytes = reinterpret_cast<std::uint8_t*>(module);

    auto s = patternBytes.size();
    auto d = patternBytes.data();

    for (auto i = 0ul; i < sizeOfImage - s; ++i) {
        bool found = true;
        for (auto j = 0ul; j < s; ++j) {
            if (scanBytes[i + j] != d[j] && d[j] != -1) {
                found = false;
                break;
            }
        }
        if (found) {
            return &scanBytes[i];
        }
    }
    return nullptr;

void SetClantag(const char* tag)
{
	static auto fnClantagChanged = (int(__fastcall*)(const char*, const char*))PatternScan(GetModuleHandleW(L"engine.dll"), "53 56 57 8B DA 8B F9 FF 15");

	fnClantagChanged(tag, tag);
}

void clantag::vitamins(CUserCmd* pCmd) {

} */