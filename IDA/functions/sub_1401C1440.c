#include "../winhttp.h"

//----- (00000001401C1440) ----------------------------------------------------
int __fastcall sub_1401C1440(__int64 a1, int* a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rsi
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	__int64 v11; // rsi
	__int64 v13; // r13
	__int64 v14; // rbx
	__int64 v15; // r12
	int* v16; // rax
	int* v17; // rdi
	unsigned __int64 v18; // rbx
	int result; // eax
	int* v20; // [rsp+30h] [rbp-38h]

	*(_DWORD*)(a1 + 16) = 1;
	v4 = *(_QWORD*)(a1 + 24);
	if (a2)
	{
		v7 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v7;
			while (*((_WORD*)a2 + v7));
		}
		v8 = sub_14018B280(2 * v7 + 18, 0);
		if (v8)
		{
			*(_QWORD*)v8 = off_140B55060;
			*((_QWORD*)v8 + 1) = v7;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = v8 + 4;
		v10 = 2 * v7;
		sub_1407DB590(v8 + 4, a2, v10);
		*(_WORD*)((char*)v9 + v10) = 0;
		*(_QWORD*)(a1 + 24) = v9;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v11 = 0i64;
	while (aCorrupt[++v11] != 0)
		;
	v13 = *(_QWORD*)(a1 + 88);
	v14 = *(_QWORD*)(*(_QWORD*)(a1 + 24) - 8i64);
	v20 = *(int**)(a1 + 24);
	v15 = v14 + v11;
	v16 = sub_14018B280(2 * (v14 + v11) + 18, 0);
	if (v16)
	{
		*(_QWORD*)v16 = off_140B55060;
		*((_QWORD*)v16 + 1) = v15;
	}
	else
	{
		v16 = 0i64;
	}
	v17 = v16 + 4;
	v18 = 2 * v14;
	sub_1407DB590(v16 + 4, v20, v18);
	sub_1407DB590((int*)((char*)v17 + v18), (int*)L":Corrupt", 2 * v11);
	*((_WORD*)v17 + v15) = 0;
	*(_QWORD*)(a1 + 88) = v17;
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	result = sub_14018D720(a2, *(_DWORD*)(a1 + 16), a4, (__int64*)(a1 + 8), 0i64);
	if (result >= 0)
	{
		result = sub_1401A11D0((__int64**)(a1 + 96), *(_BYTE**)(a1 + 88));
		if (result >= 0)
		{
			if ((*(_BYTE*)(a1 + 16) & 2) != 0)
			{
				result = sub_1401C17E0(a1);
				if (result < 0)
					return result;
			}
			else
			{
				result = sub_1401C1600(a1);
				if (result < 0)
					return result;
			}
			return 0;
		}
	}
	return result;
}
// 140A476E0: using guessed type wchar_t aCorrupt[9];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

