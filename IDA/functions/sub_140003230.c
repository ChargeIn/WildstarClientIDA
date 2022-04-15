#include "../winhttp.h"

//----- (0000000140003230) ----------------------------------------------------
__int64 sub_140003230()
{
	DWORD ModuleFileNameW; // eax
	__int64 v1; // rdx
	__int64 v2; // rbx
	WCHAR* v3; // rcx
	signed int v4; // r8d
	__int64 v5; // rdx
	char* v6; // r10
	WCHAR v7; // ax
	DWORD FileVersionInfoSizeW; // eax
	__int64 v9; // rdi
	int* v10; // rax
	_QWORD* v11; // rbx
	int v12; // esi
	int v13; // edi
	signed int LastError; // eax
	__int16 v16; // [rsp+20h] [rbp-248h]
	__int16 v17; // [rsp+22h] [rbp-246h]
	__int16 v18; // [rsp+24h] [rbp-244h]
	__int16 v19; // [rsp+26h] [rbp-242h]
	unsigned int puLen; // [rsp+28h] [rbp-240h] BYREF
	LPVOID lpBuffer; // [rsp+30h] [rbp-238h] BYREF
	WCHAR Filename[264]; // [rsp+40h] [rbp-228h] BYREF

	ModuleFileNameW = GetModuleFileNameW(0i64, Filename, 0x104u);
	if (ModuleFileNameW)
	{
		do
		{
			v1 = ModuleFileNameW - 1;
			if (Filename[v1] == 92)
				break;
			--ModuleFileNameW;
		} while ((_DWORD)v1);
	}
	v2 = 260 - ModuleFileNameW;
	v3 = &Filename[ModuleFileNameW];
	v4 = 0;
	v5 = (unsigned int)v2;
	if ((unsigned __int64)(v2 - 1) > 0x7FFFFFFE)
		v4 = -2147024809;
	if (v4 < 0)
	{
		if (!(_DWORD)v2)
			goto LABEL_17;
	}
	else
	{
		v4 = 0;
		if (!(_DWORD)v2)
			goto LABEL_14;
		v6 = (char*)((char*)L"bink2w64.dll" - (char*)v3);
		while (2147483646i64 - (unsigned int)v2 + v5)
		{
			v7 = *(WCHAR*)((char*)v3 + (_QWORD)v6);
			if (!v7)
				break;
			*v3++ = v7;
			if (!--v5)
			{
				--v3;
				v4 = -2147024774;
				goto LABEL_16;
			}
		}
		if (!v5)
		{
		LABEL_14:
			--v3;
			v4 = -2147024774;
		}
	}
LABEL_16:
	*v3 = 0;
LABEL_17:
	if (v4 < 0)
		return (unsigned int)v4;
	FileVersionInfoSizeW = GetFileVersionInfoSizeW(Filename, 0i64);
	v9 = FileVersionInfoSizeW;
	if (!FileVersionInfoSizeW)
		goto LABEL_30;
	v10 = sub_14018B280(FileVersionInfoSizeW + 16i64, 0);
	if (v10)
	{
		*((_QWORD*)v10 + 1) = v9;
		*(_QWORD*)v10 = off_140B55060;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = v10 + 4;
	if (!GetFileVersionInfoW(Filename, 0, v9, v10 + 4)
		|| !VerQueryValueW(v11, &SubBlock, &lpBuffer, &puLen)
		|| puLen < 0x34)
	{
		if (v11)
			(*(void(__fastcall**)(_QWORD*))(*(v11 - 2) + 8i64))(v11 - 2);
	LABEL_30:
		LastError = GetLastError();
		v4 = LastError;
		if (LastError > 0)
			v4 = (unsigned __int16)LastError | 0x80070000;
		if (v4 < 0)
			return (unsigned int)v4;
		HIWORD(v13) = v19;
		HIWORD(v12) = v17;
		goto LABEL_34;
	}
	v12 = *((_DWORD*)lpBuffer + 2);
	v13 = *((_DWORD*)lpBuffer + 3);
	v16 = v12;
	v18 = v13;
	if (v11)
		(*(void(__fastcall**)(_QWORD*))(*(v11 - 2) + 8i64))(v11 - 2);
	v4 = 0;
LABEL_34:
	if (HIWORD(v12) != 1 || v16 != 100 || HIWORD(v13) != 13 || v18)
		return 2147500037i64;
	return (unsigned int)v4;
}
// 1400033F0: variable 'v19' is possibly undefined
// 1400033F4: variable 'v17' is possibly undefined
// 140003407: variable 'v16' is possibly undefined
// 140003417: variable 'v18' is possibly undefined
// 1409D01D8: using guessed type wchar_t aBink2w64Dll_0[13];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140003230: using guessed type WCHAR Filename[264];

