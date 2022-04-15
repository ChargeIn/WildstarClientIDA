#include "../winhttp.h"

//----- (00000001401E65C0) ----------------------------------------------------
__int64 __fastcall sub_1401E65C0(__int64 a1)
{
	int v2; // ecx
	unsigned int v3; // ebx
	unsigned int v4; // edi
	__int64 result; // rax

	v2 = *(_DWORD*)(a1 + 24);
	v3 = 1024 >> v2;
	v4 = 7 - v2;
	result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		1024 >> v2,
		1024 >> v2,
		(unsigned int)(7 - v2),
		0,
		3,
		3,
		0,
		0,
		a1 + 32);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v3,
			v3,
			v4,
			0,
			3,
			3,
			0,
			0,
			a1 + 40);
		if ((int)result >= 0)
			return 0i64;
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

