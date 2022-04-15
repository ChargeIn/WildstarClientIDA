#include "../winhttp.h"

//----- (000000014079D8C0) ----------------------------------------------------
_QWORD** __fastcall sub_14079D8C0(__int64 a1, __int64 a2)
{
	_QWORD** result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	_QWORD* v5; // rdx
	_QWORD* v6; // rax

	result = *(_QWORD***)(a1 + 16);
	v3 = *result;
	if (*result != result)
	{
		while (1)
		{
			v4 = v3[2];
			if (v4 == a2)
				break;
			v3 = (_QWORD*)*v3;
			if (v3 == result)
				return result;
		}
		result = (_QWORD**)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v4 + 24i64))(v3[2]);
		if ((_DWORD)result)
		{
			v5 = (_QWORD*)*v3;
			v6 = (_QWORD*)v3[1];
			*v6 = *v3;
			v5[1] = v6;
			sub_14018B900((__int64)v3, 0);
			return (_QWORD**)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 8i64))(v4, 1i64);
		}
	}
	return result;
}

