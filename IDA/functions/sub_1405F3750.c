#include "../winhttp.h"

//----- (00000001405F3750) ----------------------------------------------------
__int64 __fastcall sub_1405F3750(_DWORD* a1, __int64 a2)
{
	int v3; // ecx
	bool v4; // zf
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax

	a1[7] = *(_DWORD*)(a2 + 4);
	v3 = dword_140C636A8;
	a1[8] = dword_140C636A8 - *(_DWORD*)(a2 + 8);
	if (*(_DWORD*)(a2 + 4))
		a1[9] = v3;
	v4 = (*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 176i64))(a1) == 0;
	v5 = qword_140C65898;
	if (!v4)
	{
		v6 = *(_QWORD*)(qword_140C65898 + 29504);
		v7 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 24i64))(a1);
		sub_1400EA3E0(v6, "PublicEventUpdate", byte_1409ED1BC, v7);
		v5 = qword_140C65898;
	}
	*(_DWORD*)(v5 + 28568) = 1;
	return 0i64;
}
// 1409ED1BC: using guessed type _BYTE byte_1409ED1BC[4];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

