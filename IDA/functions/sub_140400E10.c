#include "../winhttp.h"

//----- (0000000140400E10) ----------------------------------------------------
__int64 __fastcall sub_140400E10(__int64 a1, __int64 a2)
{
	int* v2; // rbp
	__int64 v4; // r15
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	float v10; // xmm1_4

	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	v2 = (int*)(a2 + 24);
	*(_QWORD*)a1 = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 16);
	v4 = *(_QWORD*)(a1 + 16);
	if (a2 == -24)
	{
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	else
	{
		v6 = 0i64;
		if (*(_WORD*)v2)
		{
			do
				++v6;
			while (*((_WORD*)v2 + v6));
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
		sub_1407DB590(v7 + 4, v2, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 16) = v8;
	}
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 92);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 96);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 100);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 104);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 108);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 112);
	v10 = *(float*)(a2 + 116);
	if (v10 >= 0.0)
	{
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	else if (a1 != -48)
	{
		sub_1401E82F0((__int64*)(a1 + 48), v10);
		return a1;
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

