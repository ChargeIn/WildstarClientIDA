#include "../winhttp.h"

//----- (00000001405548F0) ----------------------------------------------------
__int16* __fastcall sub_1405548F0(__int64 a1)
{
	_BYTE* v1; // rax
	__int64 v3; // rcx
	__int16* result; // rax

	v1 = *(_BYTE**)(a1 + 80);
	if (v1 != *(_BYTE**)(a1 + 88))
	{
		*v1 = 0;
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(a1 + 80);
	}
	*(_DWORD*)(a1 + 24) = 0;
	*(_DWORD*)a1 = 0;
	sub_140557C30(a1);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Dialog_Close", byte_1409D0BFF);
	sub_140554EA0(a1, 1);
	result = sub_14034BDD0(v3, 0);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	return result;
}
// 14055494C: variable 'v3' is possibly undefined
// 1409D0BFF: using guessed type _BYTE byte_1409D0BFF[19];
// 140C65898: using guessed type __int64 qword_140C65898;

