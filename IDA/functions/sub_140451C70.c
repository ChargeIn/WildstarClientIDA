#include "../winhttp.h"

//----- (0000000140451C70) ----------------------------------------------------
__int64 __fastcall sub_140451C70(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx

	*(_DWORD*)a1 = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	v4 = *(_QWORD*)(a2 + 16);
	if (v4)
	{
		v5 = *(_QWORD*)(v4 - 8);
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = v5;
			*(_QWORD*)v6 = off_140B55060;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, *(int**)(a2 + 16), v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		*(_QWORD*)(a1 + 16) = v7;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

