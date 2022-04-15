#include "../winhttp.h"

//----- (0000000140883520) ----------------------------------------------------
__int64 sub_140883520()
{
	_QWORD* v0; // rbx
	__int64 result; // rax

	v0 = (_QWORD*)qword_140C62940;
	result = qword_140C62948;
	qword_140C62938 = 0i64;
	if (qword_140C62940 != qword_140C62948)
	{
		do
		{
			if (*v0)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v0 + 40i64))(*v0);
				result = qword_140C62948;
			}
			++v0;
		} while (v0 != (_QWORD*)result);
		v0 = (_QWORD*)qword_140C62940;
	}
	if (v0)
	{
		qword_140C62948 = (__int64)v0;
		result = sub_140881720(dword_140C111C0, (__int64)v0);
		qword_140C62940 = 0i64;
		qword_140C62948 = 0i64;
		dword_140C62950 = 0;
	}
	if (qword_140C62958)
	{
		qword_140C62960 = qword_140C62958;
		result = sub_140881720(dword_140C111C0, qword_140C62958);
		qword_140C62958 = 0i64;
		qword_140C62960 = 0i64;
		dword_140C62968 = 0;
	}
	return result;
}
// 140C111C0: using guessed type int dword_140C111C0;
// 140C62938: using guessed type __int64 qword_140C62938;
// 140C62940: using guessed type __int64 qword_140C62940;
// 140C62948: using guessed type __int64 qword_140C62948;
// 140C62950: using guessed type int dword_140C62950;
// 140C62958: using guessed type __int64 qword_140C62958;
// 140C62960: using guessed type __int64 qword_140C62960;
// 140C62968: using guessed type int dword_140C62968;

