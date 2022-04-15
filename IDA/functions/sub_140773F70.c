#include "../winhttp.h"

//----- (0000000140773F70) ----------------------------------------------------
void __fastcall sub_140773F70(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	unsigned __int64 i; // rdi
	__int64 v7; // rcx

	v2 = *(_QWORD**)(a1 + 56);
	v3 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 != v2)
	{
		do
		{
			for (i = 0i64; i < v3[4]; ++i)
			{
				if (sub_1400F9CB0(*(_QWORD*)(v3[3] + 8 * i) + 352i64, a2))
					*(_DWORD*)(*(_QWORD*)(v3[3] + 8 * i) + 376i64) = 1;
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 56));
	}
	v7 = *(_QWORD*)(a2 + 16);
	*(_QWORD*)a2 = off_140B56A08;
	if (v7)
		sub_1400579E0(v7, a2, *(_DWORD*)(a2 + 8));
}
// 14077400A: variable 'a2' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

