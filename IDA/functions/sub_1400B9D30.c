#include "../winhttp.h"

//----- (00000001400B9D30) ----------------------------------------------------
__int64 __fastcall sub_1400B9D30(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rsi
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = a1[3];
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[3] = 0i64;
	}
	if (*a1)
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 48i64))(*a1);
	v4 = a1 + 6;
	v5 = 3i64;
	do
	{
		if (*v4)
		{
			result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
			*v4 = 0i64;
		}
		++v4;
		--v5;
	} while (v5);
	if (*a1)
	{
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
		*a1 = 0i64;
	}
	v6 = a1[1];
	if (v6)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[1] = 0i64;
	}
	v7 = a1[2];
	if (v7)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[2] = 0i64;
	}
	return result;
}

