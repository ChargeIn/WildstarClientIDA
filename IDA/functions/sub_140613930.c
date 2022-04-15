#include "../winhttp.h"

//----- (0000000140613930) ----------------------------------------------------
__int64 __fastcall sub_140613930(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rcx

	sub_140615630((__int64)a1);
	v2 = a1[3894];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[3894] = 0i64;
	}
	v3 = a1[3893];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[3893] = 0i64;
	}
	sub_14062E340(a1 + 3913);
	sub_140198F50(v4, (int*)L"soundtarget");
	v5 = qword_140C63628;
	v6 = *(_QWORD*)(qword_140C63628 + 752);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(v5 + 752) = 0i64;
	}
	return 0i64;
}
// 14061398B: variable 'v4' is possibly undefined
// 140B271C8: using guessed type wchar_t aSoundtarget_0[12];
// 140C63628: using guessed type __int64 qword_140C63628;

