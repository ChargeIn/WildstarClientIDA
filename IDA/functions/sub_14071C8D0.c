#include "../winhttp.h"

//----- (000000014071C8D0) ----------------------------------------------------
__int64 __fastcall sub_14071C8D0(_QWORD* a1)
{
	__int64 v3; // rcx

	if (!a1[28])
		return sub_14071A150((__int64)a1);
	if (*(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*a1 + 112i64))(a1) + 200))
		return (*(__int64(__fastcall**)(_QWORD*, _QWORD, __int64))(*a1 + 40i64))(a1, 0i64, 1i64);
	sub_140195D70((__int64)(a1 + 7));
	sub_140195D70((__int64)(a1 + 16));
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)a1[28] + 648i64))(a1[28], 0i64, 0i64);
	(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(__int64, __int64), _QWORD*))(*(_QWORD*)a1[28] + 1120i64))(
		a1[28],
		sub_14071C4A0,
		a1);
	(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[28] + 1112i64))(a1[28]);
	v3 = a1[26];
	if (v3 && !*(_DWORD*)(v3 + 688) && (*(_QWORD*)(v3 + 640) || *(_QWORD*)(v3 + 632)))
		sub_1407191F0(v3);
	(*(void(__fastcall**)(_QWORD, __int64))(*(_QWORD*)a1[28] + 728i64))(a1[28], 61i64);
	(*(void(__fastcall**)(_QWORD, __int64))(*(_QWORD*)a1[28] + 728i64))(a1[28], 62i64);
	(*(void(__fastcall**)(_QWORD, __int64))(*(_QWORD*)a1[28] + 728i64))(a1[28], 63i64);
	return (*(__int64(__fastcall**)(_QWORD, __int64))(*(_QWORD*)a1[28] + 728i64))(a1[28], 64i64);
}

