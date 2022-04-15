#include "../winhttp.h"

//----- (000000014011F960) ----------------------------------------------------
__int64 __fastcall sub_14011F960(_QWORD* a1)
{
	_DWORD* v1; // rax
	char* v3; // rax
	int* v4; // rbp
	int v5; // esi
	__int64 v6; // rdi
	int* v7; // rax
	int* v8; // rbx
	unsigned __int64 v9; // rdi
	int v10; // ecx
	__int64 v11; // rcx
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	int* v14; // [rsp+28h] [rbp-20h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (unsigned int)(v1[2] - 3) > 1)
		return 0i64;
	v3 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v13, v3);
	v4 = v14;
	v5 = 0;
	if (v14)
	{
		v6 = 0i64;
		if (*(_WORD*)v14)
		{
			do
				++v6;
			while (*((_WORD*)v14 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*((_QWORD*)v7 + 1) = v6;
			*(_QWORD*)v7 = off_140B55060;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, v4, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		sub_14018B900((__int64)v4, 0);
		if (v8)
		{
			v10 = -1;
			if (*(v8 - 2) != -1)
				v10 = *(v8 - 2);
			if (v10)
				v5 = v10;
		}
	}
	else
	{
		v8 = 0i64;
	}
	v11 = a1[2];
	*(_DWORD*)(v11 + 8) = 3;
	*(double*)v11 = (double)v5;
	a1[2] += 16i64;
	if (v8)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

