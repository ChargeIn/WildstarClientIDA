#include "../winhttp.h"

//----- (0000000140897940) ----------------------------------------------------
_QWORD* __fastcall sub_140897940(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // rax
	_QWORD* v4; // rsi
	_QWORD* v6; // rcx
	_QWORD* result; // rax
	_QWORD* v8; // rdi

	v3 = *(_QWORD**)(a1 + 48);
	v4 = (_QWORD*)(a1 + 48);
	v6 = *(_QWORD**)(a1 + 56);
	if (v3 == v6)
		goto LABEL_6;
	do
	{
		if (*v3 == a2)
			break;
		v3 += 2;
	} while (v3 != v6);
	if (v3 == v6 || (result = v3 + 1) == 0i64)
	{
	LABEL_6:
		result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a3 + 24i64))(
			a3,
			(__int64)(*(_QWORD*)(a2 + 40) - *(_QWORD*)(a2 + 32)) >> 3);
		v8 = result;
		if (result)
		{
			result = sub_140897CD0(v4, a2, (__int64)result);
			if (!result)
				return (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*v8 + 8i64))(v8);
		}
	}
	return result;
}

