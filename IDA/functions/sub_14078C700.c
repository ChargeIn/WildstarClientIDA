#include "../winhttp.h"

//----- (000000014078C700) ----------------------------------------------------
unsigned __int64 __fastcall sub_14078C700(__int64 a1, int* a2)
{
	__int64 v2; // rax
	__int64 v4; // rbx
	_QWORD* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbx
	_QWORD* v10; // rax
	__int64 v11; // rcx
	unsigned __int64 result; // rax
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	int v15; // ecx
	__int64 v16; // rax

	v2 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v2 = &unk_1409D1679;
	*(_DWORD*)(v2 + 8) = 2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = *(_QWORD*)(a1 + 16);
	v6 = sub_14005C450(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), (int*)(v4 - 16));
	*(_QWORD*)(v4 - 16) = *v6;
	*(_DWORD*)(v4 - 8) = *((_DWORD*)v6 + 2);
	v7 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v7 = a1;
	*(_DWORD*)(v7 + 8) = 2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = *(_QWORD*)(a1 + 16);
	v9 = v8 - 16;
	v10 = sub_14005C450(*(_QWORD*)(v8 - 32), (int*)(v8 - 16));
	*(_QWORD*)v9 = *v10;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v10 + 2);
	v11 = *(_QWORD*)(a1 + 16);
	result = v11 - 16;
	if ((_DWORD*)(v11 - 16) != dword_140A12138 && *(_DWORD*)(result + 8) == 6)
	{
		v13 = (unsigned __int64*)off_140B50568[*a2];
		if (v13)
		{
			v14 = -1i64;
			do
				++v14;
			while (*((_BYTE*)v13 + v14));
			sub_140058710(a1, v13, v14);
		}
		else
		{
			*(_DWORD*)(v11 + 8) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		v15 = a2[10];
		v16 = *(_QWORD*)(a1 + 16);
		if (v15 < 0)
		{
			*(_DWORD*)(v16 + 8) = 0;
		}
		else
		{
			*(_DWORD*)(v16 + 8) = 3;
			*(double*)v16 = (double)v15;
		}
		*(_QWORD*)(a1 + 16) += 16i64;
		return sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 48i64), 0);
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B50568: using guessed type char *off_140B50568[5];

