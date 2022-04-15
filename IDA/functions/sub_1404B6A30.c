#include "../winhttp.h"

//----- (00000001404B6A30) ----------------------------------------------------
_BOOL8 __fastcall sub_1404B6A30(_DWORD* a1)
{
	__int64 v1; // rbx
	__int64 v2; // rax
	__int64 v3; // rax
	_BOOL8 result; // rax

	if (!*a1)
		return 0i64;
	v1 = *(_QWORD*)(qword_140C659F8 + 200);
	result = 0;
	if (v1)
	{
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 112i64))(v1);
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 56i64))(v2))
			return 1;
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 112i64))(v1);
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3))
			return 1;
	}
	return result;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

