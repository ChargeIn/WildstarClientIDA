#include "../winhttp.h"

//----- (00000001401DB030) ----------------------------------------------------
bool __fastcall sub_1401DB030(__int64 a1, __int64 a2)
{
	_WORD* v5; // rcx
	unsigned __int16* v6; // rax
	unsigned int v7; // ebp
	__int64* v8; // r14
	__int64 v9; // r15
	_DWORD* v10; // rdi
	unsigned __int16* v11; // rdx
	__int64 v12; // rcx
	int v13; // edx
	_DWORD* i; // rcx
	_WORD* v15; // rcx
	unsigned __int16* v16; // rax

	if (*(float*)(a2 + 24) != *(float*)(a1 + 24)
		|| *(_DWORD*)(a1 + 12) != *(_DWORD*)(a2 + 12)
		|| *(_DWORD*)(a1 + 16) != *(_DWORD*)(a2 + 16)
		|| *(_DWORD*)(a1 + 8) != *(_DWORD*)(a2 + 8)
		|| *(_DWORD*)(a1 + 20) != *(_DWORD*)(a2 + 20))
	{
		return 0;
	}
	v5 = *(_WORD**)a1;
	if (!v5 || !*v5)
		v5 = 0i64;
	v6 = *(unsigned __int16**)a2;
	if (!*(_QWORD*)a2 || !*v6)
		v6 = 0i64;
	if (v5)
	{
		if (v6 && !(unsigned int)sub_14018E2C0((__int64)v5, v6))
		{
			v7 = 0;
			v8 = (__int64*)(a1 + 120);
			v9 = a2 - a1;
			v10 = (_DWORD*)(a1 + 92);
			while (*v10 == *(_DWORD*)((char*)v10 + v9))
			{
				v11 = *(unsigned __int16**)((char*)v8 + v9);
				v12 = *v8;
				if ((*v8 == 0) != (v11 == 0i64) || v12 && (unsigned int)sub_14018E2C0(v12, v11))
					break;
				++v7;
				++v10;
				++v8;
				if (v7 >= 6)
					goto LABEL_24;
			}
		}
	}
	else if (!v6)
	{
	LABEL_24:
		v13 = 0;
		for (i = (_DWORD*)(a1 + 28); *i == *(_DWORD*)((char*)i + a2 - a1); ++i)
		{
			if ((unsigned int)++v13 >= 0x10)
			{
				if (*(_DWORD*)(a1 + 168) != *(_DWORD*)(a2 + 168))
					return 0;
				v15 = *(_WORD**)(a1 + 176);
				if (!v15 || !*v15)
					v15 = 0i64;
				v16 = *(unsigned __int16**)(a2 + 176);
				if (!v16 || !*v16)
					v16 = 0i64;
				if (v15)
				{
					if (!v16 || (unsigned int)sub_14018E2C0((__int64)v15, v16))
						return 0;
				}
				else if (v16)
				{
					return 0;
				}
				return *(_DWORD*)(a1 + 184) == *(_DWORD*)(a2 + 184)
					&& !(unsigned int)sub_1407E6AF0((unsigned __int64*)(a1 + 188), a2 + 188, 0x20ui64)
					&& *(_QWORD*)(a1 + 220) == *(_QWORD*)(a2 + 220)
					&& *(_QWORD*)(a1 + 228) == *(_QWORD*)(a2 + 228);
			}
		}
	}
	return 0;
}

