#include "../winhttp.h"

//----- (00000001403790A0) ----------------------------------------------------
__int64 __fastcall sub_1403790A0(_QWORD** a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx

	v2 = (*(__int64(__fastcall**)(_QWORD*))(*a1[6] + 56i64))(a1[6]);
	v3 = v2;
	if (v2
		&& sub_140379300 != (__int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64))(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 656i64))(
			v2,
			0i64))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 96i64))(v3);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 920i64))(v3);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 928i64))(v3);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v3 + 648i64))(v3, 0i64, 0i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v3 + 680i64))(v3, 0i64, 0i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v3 + 696i64))(v3, 0i64, 0i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v3 + 680i64))(v3, 0i64, 0i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 1032i64))(v3);
		(*(void(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)v3 + 632i64))(v3, &dword_140B63928, 1i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v3 + 640i64))(v3, 0i64, 0i64);
	}
	return ((__int64(__fastcall*)(_QWORD**, __int64))(*a1)[37])(a1, 1i64);
}
// 140B63928: using guessed type int dword_140B63928;

