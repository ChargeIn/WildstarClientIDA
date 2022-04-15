#include "../winhttp.h"

//----- (00000001404B36E0) ----------------------------------------------------
__int64 __fastcall sub_1404B36E0(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rcx
	int* v5; // rbp
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	int v10; // eax

	*(_DWORD*)a1 = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	v4 = *(_QWORD*)(a2 + 24);
	if (v4)
	{
		if (v4 <= qword_140C3FE70)
			v5 = (int*)(v4 + qword_140C3FE68);
		else
			v5 = 0i64;
	}
	else
	{
		v5 = 0i64;
	}
	if (v5)
	{
		v6 = 0i64;
		if (*(_WORD*)v5)
		{
			do
				++v6;
			while (*((_WORD*)v5 + v6));
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
		sub_1407DB590(v7 + 4, v5, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 24) = v8;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	v10 = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 36) = 4;
	*(_DWORD*)(a1 + 32) = v10;
	*(_DWORD*)(a1 + 40) = 23;
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 36);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

