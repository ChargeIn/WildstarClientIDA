#include "../winhttp.h"

//----- (00000001407DE348) ----------------------------------------------------
__int64 __fastcall sub_1407DE348(__int64 a1, _OWORD* a2)
{
	_QWORD* v3; // rax
	void* v4; // rdx
	__int64 v5; // rcx
	int v6; // eax

	*(_BYTE*)(a1 + 24) = 0;
	if (a2)
	{
		*(_OWORD*)a1 = *a2;
	}
	else
	{
		v3 = sub_1407E3D94();
		*(_QWORD*)(a1 + 16) = v3;
		v4 = (void*)v3[24];
		*(_QWORD*)a1 = v4;
		*(_QWORD*)(a1 + 8) = v3[23];
		if (v4 != off_140C102E0 && ((_DWORD)v3[25] & dword_140C10470) == 0)
			*(_QWORD*)a1 = sub_1407E69FC();
		if (*(LPVOID*)(a1 + 8) != off_140C0FC78 && (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 200i64) & dword_140C10470) == 0)
			*(_QWORD*)(a1 + 8) = sub_1407E3374();
		v5 = *(_QWORD*)(a1 + 16);
		v6 = *(_DWORD*)(v5 + 200);
		if ((v6 & 2) == 0)
		{
			*(_DWORD*)(v5 + 200) = v6 | 2;
			*(_BYTE*)(a1 + 24) = 1;
		}
	}
	return a1;
}
// 140C102E0: using guessed type void *off_140C102E0;
// 140C10470: using guessed type int dword_140C10470;

