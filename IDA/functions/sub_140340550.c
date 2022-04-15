#include "../winhttp.h"

//----- (0000000140340550) ----------------------------------------------------
__int64 __fastcall sub_140340550(__int64 a1, _QWORD* a2, __int64 a3)
{
	int* v6; // rax
	_QWORD* v7; // rbx
	int v8; // esi

	if (!a2)
		return 2147942487i64;
	v6 = sub_14018B280(160i64, 0);
	if (v6)
		v7 = (_QWORD*)sub_140342B10((__int64)v6);
	else
		v7 = 0i64;
	v8 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65858 + 176i64))(
		qword_140C65858,
		v7[5],
		a3);
	if (v8 >= 0)
		*a2 = v7;
	else
		(*(void(__fastcall**)(_QWORD*, __int64))(*v7 + 240i64))(v7, 1i64);
	return (unsigned int)v8;
}
// 140C65858: using guessed type __int64 qword_140C65858;

