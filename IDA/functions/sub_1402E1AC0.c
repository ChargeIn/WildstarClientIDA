#include "../winhttp.h"

//----- (00000001402E1AC0) ----------------------------------------------------
__int64 __fastcall sub_1402E1AC0(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rax
	__int64 result; // rax
	__int64(__fastcall * v5)(__int64, _QWORD); // r8

	v3 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	result = sub_1402E16D0(a2, v3);
	if (result)
	{
		*(_QWORD*)(result + 48) = 0i64;
		v5 = *(__int64(__fastcall**)(__int64, _QWORD))(a2 + 144);
		if (v5)
			return v5(result, *(_QWORD*)(a2 + 224));
	}
	return result;
}

