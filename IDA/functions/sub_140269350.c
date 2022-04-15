#include "../winhttp.h"

//----- (0000000140269350) ----------------------------------------------------
__int64 __fastcall sub_140269350(__int64 a1)
{
	DWORD ModuleFileNameW; // eax
	__int64 v3; // rdx
	__int64 v4; // rdi
	HMODULE LibraryW; // r8
	WCHAR* v6; // rcx
	int v7; // r11d
	__int64 v8; // rdx
	char* v9; // r10
	WCHAR v10; // ax
	__int64 v11; // rbx
	DWORD flOldProtect[4]; // [rsp+20h] [rbp-448h] BYREF
	WCHAR Filename[264]; // [rsp+30h] [rbp-438h] BYREF
	char v15[528]; // [rsp+240h] [rbp-228h] BYREF

	sub_14001B370(v15, 260i64, L"d3dx9_%u.dll", 43i64);
	ModuleFileNameW = GetModuleFileNameW(0i64, Filename, 0x104u);
	if (ModuleFileNameW)
	{
		do
		{
			v3 = ModuleFileNameW - 1;
			if (Filename[v3] == 92)
				break;
			--ModuleFileNameW;
		} while ((_DWORD)v3);
	}
	v4 = 260 - ModuleFileNameW;
	LibraryW = 0i64;
	v6 = &Filename[ModuleFileNameW];
	v7 = 0;
	v8 = (unsigned int)v4;
	if ((unsigned __int64)(v4 - 1) > 0x7FFFFFFE)
		v7 = -2147024809;
	if (v7 < 0)
	{
		if (!(_DWORD)v4)
			goto LABEL_17;
	}
	else
	{
		v7 = 0;
		if (!(_DWORD)v4)
			goto LABEL_14;
		v9 = (char*)(v15 - (char*)v6);
		while (2147483646i64 - (unsigned int)v4 + v8)
		{
			v10 = *(WCHAR*)((char*)v6 + (_QWORD)v9);
			if (!v10)
				break;
			*v6++ = v10;
			if (!--v8)
			{
				--v6;
				v7 = -2147024774;
				goto LABEL_16;
			}
		}
		if (!v8)
		{
		LABEL_14:
			--v6;
			v7 = -2147024774;
		}
	}
LABEL_16:
	*v6 = 0;
LABEL_17:
	if (v7 >= 0)
		LibraryW = LoadLibraryW(Filename);
	*(_QWORD*)(a1 + 10440) = LibraryW;
	if (!LibraryW)
		return 2685272065i64;
	D3DXCreateTexture = (__int64)GetProcAddress(LibraryW, "D3DXCreateTexture");
	if (!D3DXCreateTexture)
		return 2685272065i64;
	D3DXCreateTextureFromFileInMemoryEx = (__int64)GetProcAddress(
		*(HMODULE*)(a1 + 10440),
		"D3DXCreateTextureFromFileInMemoryEx");
	if (!D3DXCreateTextureFromFileInMemoryEx)
		return 2685272065i64;
	D3DXCreateCubeTexture = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10440), "D3DXCreateCubeTexture");
	if (!D3DXCreateCubeTexture)
		return 2685272065i64;
	D3DXCreateCubeTextureFromFileInMemoryEx = (__int64)GetProcAddress(
		*(HMODULE*)(a1 + 10440),
		"D3DXCreateCubeTextureFromFileInMemoryEx");
	if (!D3DXCreateCubeTextureFromFileInMemoryEx)
		return 2685272065i64;
	D3DXCreateVolumeTexture = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10440), "D3DXCreateVolumeTexture");
	if (!D3DXCreateVolumeTexture)
		return 2685272065i64;
	D3DXCreateVolumeTextureFromFileInMemoryEx = (__int64)GetProcAddress(
		*(HMODULE*)(a1 + 10440),
		"D3DXCreateVolumeTextureFromFileInMemoryEx");
	if (!D3DXCreateVolumeTextureFromFileInMemoryEx)
		return 2685272065i64;
	D3DXFilterTexture = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10440), "D3DXFilterTexture");
	if (!D3DXFilterTexture)
		return 2685272065i64;
	D3DXGetImageInfoFromFileInMemory = (__int64)GetProcAddress(
		*(HMODULE*)(a1 + 10440),
		"D3DXGetImageInfoFromFileInMemory");
	if (!D3DXGetImageInfoFromFileInMemory)
		return 2685272065i64;
	D3DXLoadSurfaceFromMemory = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10440), "D3DXLoadSurfaceFromMemory");
	if (!D3DXLoadSurfaceFromMemory)
		return 2685272065i64;
	D3DXLoadSurfaceFromSurface = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10440), "D3DXLoadSurfaceFromSurface");
	if (!D3DXLoadSurfaceFromSurface)
		return 2685272065i64;
	D3DXLoadVolumeFromMemory = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10440), "D3DXLoadVolumeFromMemory");
	if (!D3DXLoadVolumeFromMemory)
		return 2685272065i64;
	D3DXLoadVolumeFromVolume = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10440), "D3DXLoadVolumeFromVolume");
	if (!D3DXLoadVolumeFromVolume)
		return 2685272065i64;
	D3DXSHProjectCubeMap = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10440), "D3DXSHProjectCubeMap");
	if (!D3DXSHProjectCubeMap)
		return 2685272065i64;
	D3DXSaveTextureToFileInMemory = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10440), "D3DXSaveTextureToFileInMemory");
	if (!D3DXSaveTextureToFileInMemory)
		return 2685272065i64;
	v11 = *(_QWORD*)(a1 + 10440) + 1179150i64;
	if (VirtualProtect((LPVOID)v11, 0xFui64, 0x40u, flOldProtect))
	{
		if ((unsigned int)sub_1407E6AF0((unsigned __int64*)v11, (__int64)&unk_140B60E48, 0xFui64))
		{
			sub_1400035B0();
		}
		else
		{
			*(_QWORD*)v11 = 0x4100FF390C06348i64;
			*(_DWORD*)(v11 + 8) = 255980422;
			*(_WORD*)(v11 + 12) = 7184;
			*(_BYTE*)(v11 + 14) = -124;
		}
		VirtualProtect((LPVOID)v11, 0xFui64, flOldProtect[0], flOldProtect);
	}
	return 0i64;
}
// 140AE6630: using guessed type wchar_t aD3dx9UDll[13];
// 140C656E8: using guessed type __int64 D3DXSaveTextureToFileInMemory;
// 140C656F0: using guessed type __int64 D3DXCreateVolumeTextureFromFileInMemoryEx;
// 140C656F8: using guessed type __int64 D3DXFilterTexture;
// 140C65700: using guessed type __int64 D3DXGetImageInfoFromFileInMemory;
// 140C65708: using guessed type __int64 D3DXLoadSurfaceFromMemory;
// 140C65710: using guessed type __int64 D3DXLoadSurfaceFromSurface;
// 140C65718: using guessed type __int64 D3DXLoadVolumeFromMemory;
// 140C65720: using guessed type __int64 D3DXLoadVolumeFromVolume;
// 140C65728: using guessed type __int64 D3DXSHProjectCubeMap;
// 140C65748: using guessed type __int64 D3DXCreateTexture;
// 140C65750: using guessed type __int64 D3DXCreateTextureFromFileInMemoryEx;
// 140C65758: using guessed type __int64 D3DXCreateCubeTexture;
// 140C65760: using guessed type __int64 D3DXCreateCubeTextureFromFileInMemoryEx;
// 140C65768: using guessed type __int64 D3DXCreateVolumeTexture;
// 140269350: using guessed type WCHAR Filename[264];

