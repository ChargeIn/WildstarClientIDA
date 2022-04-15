#include "../winhttp.h"

//----- (0000000140379CB0) ----------------------------------------------------
const wchar_t* __fastcall sub_140379CB0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax

	v2 = (_QWORD*)a1[4];
	if (v2 != a1)
		return (const wchar_t*)(*(__int64(__fastcall**)(_QWORD*))(*v2 + 136i64))(v2);
	v4 = a1[3];
	if (v4)
		return (const wchar_t*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 48i64))(v4);
	v5 = a1[6];
	if (!v5)
		return L"Unknown";
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 56i64))(v5);
	if (v6)
		return (const wchar_t*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 48i64))(v6);
	v7 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[6] + 64i64))(a1[6]);
	if (v7)
		return (const wchar_t*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
	else
		return L"Unknown";
}
// 140AF51E0: using guessed type wchar_t aUnknown_10[8];

