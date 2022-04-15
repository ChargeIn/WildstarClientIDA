#include "../winhttp.h"

//----- (000000014058FD20) ----------------------------------------------------
__int64* __fastcall sub_14058FD20(__int64* a1, __int64 a2)
{
	int* v4; // rax
	__int64 v5; // rax
	bool v6; // zf
	unsigned __int64 v7; // rcx
	_QWORD* v8; // rdx

	a1[1] = a2;
	if (a2)
	{
		v4 = sub_14018B280(8 * a2 + 16, 0);
		if (v4)
		{
			*((_QWORD*)v4 + 1) = a2;
			v5 = (__int64)(v4 + 4);
			*(_QWORD*)(v5 - 16) = off_140B55060;
		}
		else
		{
			v5 = 16i64;
		}
	}
	else
	{
		v5 = 0i64;
	}
	v6 = a1[1] == 0;
	*a1 = v5;
	v7 = 0i64;
	if (!v6)
	{
		do
		{
			v8 = (_QWORD*)(*a1 + 8 * v7);
			if (v8)
				*v8 = 0i64;
			++v7;
		} while (v7 < a1[1]);
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

