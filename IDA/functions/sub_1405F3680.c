#include "../winhttp.h"

//----- (00000001405F3680) ----------------------------------------------------
__int64 __fastcall sub_1405F3680(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rbx
	__int64 v6; // rax
	_QWORD* v7; // rcx

	v3 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 136i64))(a1, *a2);
	v4 = v3;
	if (v3)
	{
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v3 + 432i64))(v3, a2 + 2);
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 248i64))(v4))
		{
			v5 = *(_QWORD*)(qword_140C65898 + 29504);
			v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 320i64))(v4);
			Apollo_LUAEvent(v5, "PublicEventObjectiveUpdate", byte_1409ED1AC, v6);
		}
		v7 = (_QWORD*)qword_140C65BA8;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		sub_1405F9E30(v7, (__int64)(v7 + 40), *a2);
	}
	return 0i64;
}
// 1409ED1AC: using guessed type _BYTE byte_1409ED1AC[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

