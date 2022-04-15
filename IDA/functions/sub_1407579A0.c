#include "../winhttp.h"

//----- (00000001407579A0) ----------------------------------------------------
__int64 __fastcall sub_1407579A0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v2; // rcx

	result = sub_140056D60(a1, 1u);
	if ((_DWORD)result)
	{
		sub_14043BE50(v2, result);
		return 1i64;
	}
	return result;
}
// 1407579B9: variable 'v2' is possibly undefined

