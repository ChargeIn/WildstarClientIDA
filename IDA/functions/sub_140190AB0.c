#include "../winhttp.h"

//----- (0000000140190AB0) ----------------------------------------------------
__int64 sub_140190AB0()
{
	unsigned int v0; // ebx
	int v1; // r8d
	bool v2; // sf
	DWORD ModuleFileNameW; // eax
	__int64 v4; // rdx
	__int64 v5; // rdi
	WCHAR* v6; // rcx
	__int64 v7; // rdx
	char* v8; // r9
	WCHAR v9; // ax
	HMODULE LibraryW; // rax
	HMODULE v11; // rdi
	signed int LastError; // eax
	__int64 result; // rax
	WCHAR Filename[264]; // [rsp+30h] [rbp-228h] BYREF

	if (!dword_140C8E0E0)
	{
		v0 = 0;
		if (word_140C88EC0)
		{
			v1 = sub_14001B370(Filename, 260i64, L"%ls\\%ls", &word_140C88EC0, L"DbgHelp.dll");
			v2 = v1 < 0;
			goto LABEL_21;
		}
		ModuleFileNameW = GetModuleFileNameW(0i64, Filename, 0x104u);
		if (ModuleFileNameW)
		{
			do
			{
				v4 = ModuleFileNameW - 1;
				if (Filename[v4] == 92)
					break;
				--ModuleFileNameW;
			} while ((_DWORD)v4);
		}
		v5 = 260 - ModuleFileNameW;
		v6 = &Filename[ModuleFileNameW];
		v1 = 0;
		if ((unsigned __int64)(v5 - 1) > 0x7FFFFFFE)
			v1 = -2147024809;
		v7 = (unsigned int)v5;
		if (v1 < 0)
		{
			if (!(_DWORD)v5)
			{
			LABEL_20:
				v2 = v1 < 0;
			LABEL_21:
				if (v2 && v1 < 0)
					goto LABEL_35;
				LibraryW = LoadLibraryW(Filename);
				v11 = LibraryW;
				if (!LibraryW)
					goto LABEL_35;
				SymSetOptions = (DWORD(__stdcall*)(DWORD))GetProcAddress(LibraryW, "SymSetOptions");
				if (!SymSetOptions)
					goto LABEL_35;
				SymInitialize = (BOOL(__stdcall*)(HANDLE, PCSTR, BOOL))GetProcAddress(v11, "SymInitialize");
				if (!SymInitialize)
					goto LABEL_35;
				SymCleanup = (BOOL(__stdcall*)(HANDLE))GetProcAddress(v11, "SymCleanup");
				if (!SymCleanup)
					goto LABEL_35;
				StackWalk64 = (BOOL(__stdcall*)(DWORD, HANDLE, HANDLE, LPSTACKFRAME64, PVOID, PREAD_PROCESS_MEMORY_ROUTINE64, PFUNCTION_TABLE_ACCESS_ROUTINE64, PGET_MODULE_BASE_ROUTINE64, PTRANSLATE_ADDRESS_ROUTINE64))GetProcAddress(v11, "StackWalk64");
				if (!StackWalk64
					|| (SymGetModuleBase64 = (DWORD64(__stdcall*)(HANDLE, DWORD64))GetProcAddress(v11, "SymGetModuleBase64")) == 0i64
					|| (SymGetModuleInfo64 = (BOOL(__stdcall*)(HANDLE, DWORD64, PIMAGEHLP_MODULE64))GetProcAddress(
						v11,
						"SymGetModuleInfo64")) == 0i64
					|| (SymFunctionTableAccess64 = (PVOID(__stdcall*)(HANDLE, DWORD64))GetProcAddress(
						v11,
						"SymFunctionTableAccess64")) == 0i64
					|| (SymFromAddr = (BOOL(__stdcall*)(HANDLE, DWORD64, PDWORD64, PSYMBOL_INFO))GetProcAddress(
						v11,
						"SymFromAddr")) == 0i64
					|| (SymGetLineFromAddr64 = (BOOL(__stdcall*)(HANDLE, DWORD64, PDWORD, PIMAGEHLP_LINE64))GetProcAddress(v11, "SymGetLineFromAddr64")) == 0i64
					|| (SymEnumerateModules64 = (BOOL(__stdcall*)(HANDLE, PSYM_ENUMMODULES_CALLBACK64, PVOID))GetProcAddress(v11, "SymEnumerateModules64")) == 0i64
					|| (MiniDumpWriteDump = (BOOL(__stdcall*)(HANDLE, DWORD, HANDLE, MINIDUMP_TYPE, PMINIDUMP_EXCEPTION_INFORMATION, PMINIDUMP_USER_STREAM_INFORMATION, PMINIDUMP_CALLBACK_INFORMATION))GetProcAddress(v11, "MiniDumpWriteDump")) == 0i64)
				{
				LABEL_35:
					LastError = GetLastError();
					v0 = LastError;
					if (LastError <= 0)
					{
						dword_140C8E0E4 = LastError;
					LABEL_39:
						result = v0;
						dword_140C8E0E0 = 1;
						return result;
					}
					v0 = (unsigned __int16)LastError | 0x80070000;
				}
				dword_140C8E0E4 = v0;
				goto LABEL_39;
			}
		}
		else
		{
			v1 = 0;
			if (!(_DWORD)v5)
				goto LABEL_17;
			v8 = (char*)((char*)L"DbgHelp.dll" - (char*)v6);
			while (2147483646i64 - (unsigned int)v5 + v7)
			{
				v9 = *(WCHAR*)((char*)v6 + (_QWORD)v8);
				if (!v9)
					break;
				*v6++ = v9;
				if (!--v7)
				{
					--v6;
					v1 = -2147024774;
					goto LABEL_19;
				}
			}
			if (!v7)
			{
			LABEL_17:
				--v6;
				v1 = -2147024774;
			}
		}
	LABEL_19:
		*v6 = 0;
		goto LABEL_20;
	}
	return (unsigned int)dword_140C8E0E4;
}
// 140A42CF0: using guessed type wchar_t aDbghelpDll[12];
// 140A43670: using guessed type wchar_t aLsLs[8];
// 140C88EC0: using guessed type __int16 word_140C88EC0;
// 140C8E0E0: using guessed type int dword_140C8E0E0;
// 140C8E0E4: using guessed type int dword_140C8E0E4;
// 140190AB0: using guessed type WCHAR Filename[264];

