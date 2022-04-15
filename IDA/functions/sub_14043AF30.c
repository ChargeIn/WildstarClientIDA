#include "../winhttp.h"

//----- (000000014043AF30) ----------------------------------------------------
__int64 sub_14043AF30()
{
	__int64 v0; // rcx
	__int64 v1; // rcx
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 result; // rax
	_QWORD* v6; // rdi
	__int64 v7; // rcx

	sub_14043C620();
	sub_14043B6B0(v0, (__int64)&unk_140C7CCB0);
	sub_14043B6B0(v1, (__int64)&unk_140C7CCD0);
	sub_14043B6B0(v2, (__int64)&unk_140C7CCF0);
	sub_14043B6B0(v3, (__int64)&unk_140C7CD10);
	sub_14043B6B0(v4, (__int64)&unk_140C7CD30);
	result = qword_140C7CD78;
	if (qword_140C7CD78)
	{
		*(_QWORD*)(qword_140C7CD78 + 64) = 0i64;
		*(_QWORD*)(result + 72) = 0i64;
		v6 = (_QWORD*)qword_140C7CD78;
		v7 = *(_QWORD*)(qword_140C7CD78 + 16);
		if (v7)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			v6[2] = 0i64;
			v6 = (_QWORD*)qword_140C7CD78;
		}
		if (v6)
		{
			result = (*(__int64(__fastcall**)(_QWORD*))(*v6 + 8i64))(v6);
			qword_140C7CD78 = 0i64;
		}
		qword_140C7CD60 = 0i64;
	}
	else
	{
		qword_140C7CD60 = 0i64;
	}
	return result;
}
// 14043AF42: variable 'v0' is possibly undefined
// 14043AF4E: variable 'v1' is possibly undefined
// 14043AF5A: variable 'v2' is possibly undefined
// 14043AF66: variable 'v3' is possibly undefined
// 14043AF72: variable 'v4' is possibly undefined
// 140C7CD60: using guessed type __int64 qword_140C7CD60;
// 140C7CD78: using guessed type __int64 qword_140C7CD78;

