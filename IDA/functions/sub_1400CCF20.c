#include "../winhttp.h"

//----- (00000001400CCF20) ----------------------------------------------------
__int64 __fastcall sub_1400CCF20(_QWORD* a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	void(__fastcall * **v7)(_QWORD); // rcx

	if (!a1[85])
	{
		v4 = sub_14018B280(104i64, 0);
		if (v4)
			v4 = sub_1400C5780(v4);
		a1[85] = v4;
	}
	v5 = a1[85];
	if (*(_QWORD*)(v5 + 16) != a2)
	{
		v6 = *(_QWORD*)(v5 + 16);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(v5 + 16) = 0i64;
		}
		*(_QWORD*)(a1[85] + 16i64) = a2;
		v7 = *(void(__fastcall****)(_QWORD))(a1[85] + 16i64);
		if (v7)
			(**v7)(v7);
	}
	return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 544i64))(a1);
}

