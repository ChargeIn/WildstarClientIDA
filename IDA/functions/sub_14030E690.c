#include "../winhttp.h"

//----- (000000014030E690) ----------------------------------------------------
__int64 __fastcall sub_14030E690(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	int v3; // edx
	int v4; // r11d
	__int64 v5; // r9
	__int64 v6; // rax
	unsigned int v7; // r8d
	int v8; // edi
	unsigned int v9; // ecx
	_DWORD* v10; // rax
	int v11; // ebx
	unsigned int v12; // ecx
	_DWORD* v13; // rax
	int v14; // r10d
	unsigned int v15; // ecx
	_DWORD* v16; // rax
	int v17; // ecx
	_DWORD* i; // rax

	v2 = *(unsigned __int16*)(a2 + 22);
	v3 = 0;
	v4 = 0;
	v5 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 504i64) + 48 * v2;
	v6 = *(int*)(v5 + 16);
	if ((int)v6 < 12)
		v4 = dword_140B64088[v6];
	v7 = *(_DWORD*)(v5 + 32);
	v8 = 0;
	if (v7)
	{
		v9 = 0;
		v10 = (_DWORD*)(*(_QWORD*)(v5 + 40) + 4i64);
		while (!*v10)
		{
			++v9;
			++v10;
			if (v9 >= 5)
				goto LABEL_9;
		}
		v8 = 1;
	}
LABEL_9:
	v11 = 0;
	if (v4 >= 1 && v7 > 1)
	{
		v12 = 0;
		v13 = (_DWORD*)(*(_QWORD*)(v5 + 40) + 300i64);
		while (!*v13)
		{
			++v12;
			++v13;
			if (v12 >= 5)
				goto LABEL_16;
		}
		v11 = 1;
	}
LABEL_16:
	v14 = 0;
	if (v4 >= 6)
	{
		if (v7 > 2)
		{
			v15 = 0;
			v16 = (_DWORD*)(*(_QWORD*)(v5 + 40) + 596i64);
			while (!*v16)
			{
				++v15;
				++v16;
				if (v15 >= 5)
					goto LABEL_23;
			}
			v14 = 1;
		}
	LABEL_23:
		if (v7 > 3)
		{
			v17 = 0;
			for (i = (_DWORD*)(*(_QWORD*)(v5 + 40) + 892i64); !*i; ++i)
			{
				if ((unsigned int)++v17 >= 5)
					return (unsigned int)(2 * (v3 + 2 * (v14 + 2 * (v11 + 2 * (v8 + 8 * v4)))));
			}
			v3 = 1;
		}
	}
	return (unsigned int)(2 * (v3 + 2 * (v14 + 2 * (v11 + 2 * (v8 + 8 * v4)))));
}
// 14030E75C: conditional instruction was optimized away because r11d.4>=6
// 140B64088: using guessed type _DWORD dword_140B64088[12];

