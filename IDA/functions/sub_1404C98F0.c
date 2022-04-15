#include "../winhttp.h"

//----- (00000001404C98F0) ----------------------------------------------------
__int64 __fastcall sub_1404C98F0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rax

	result = qword_140C659F8;
	v4 = *(_QWORD*)(qword_140C659F8 + 200);
	*(_DWORD*)(qword_140C659F8 + 208) = a2;
	if (v4)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 112i64))(v4);
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 120i64))(v5, a2);
	}
	return result;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

