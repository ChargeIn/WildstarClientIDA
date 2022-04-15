#include "../winhttp.h"

//----- (00000001407188D0) ----------------------------------------------------
__int64 __fastcall sub_1407188D0(__int64 a1, int a2)
{
	__int64 i; // rbx
	__int64 v5; // rax
	int v6; // edx
	__int64 v7; // rcx
	__int64 v8; // r8
	unsigned int v9; // ecx
	unsigned int v10; // eax

	for (i = *(_QWORD*)(a1 + 8); i; i = *(_QWORD*)(i + 16))
		sub_1405D6B80(i);
	v5 = *(_QWORD*)(a1 + 96);
	if (v5)
	{
		v6 = dword_140C636A8;
		*(_DWORD*)(a1 + 48) = dword_140C636A8;
		*(_DWORD*)(v5 + 32) = v6;
		*(_DWORD*)(*(_QWORD*)(a1 + 96) + 36i64) = *(_DWORD*)(a1 + 72);
		v7 = *(_QWORD*)(a1 + 56);
		v8 = *(_QWORD*)(*(_QWORD*)(v7 + 312) + 112i64);
		if (*(_DWORD*)(v8 + 24) == 10)
		{
			v9 = *(_DWORD*)(v8 + 32) + *(_DWORD*)(v7 + 404) - v6;
			if (v9)
			{
				v10 = *(_DWORD*)(a1 + 72);
				if (v10 != -1 && v9 < v10)
					v9 = *(_DWORD*)(a1 + 72);
				*(_DWORD*)(*(_QWORD*)(a1 + 96) + 36i64) = v9;
			}
		}
	}
	return sub_140717DF0(a1, a2);
}
// 140C636A8: using guessed type int dword_140C636A8;

