#include "../winhttp.h"

//----- (000000014055DDF0) ----------------------------------------------------
__int64 __fastcall sub_14055DDF0(__int64 a1)
{
	__int64 v1; // rsi
	int v2; // edi
	_QWORD* v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v1 = a1 - 8;
	v2 = *(_DWORD*)(a1 - 8) - 1;
	if (v2 >= 0)
	{
		v3 = (_QWORD*)(a1 + 112i64 * *(int*)(a1 - 8) + 8);
		do
		{
			v4 = *(v3 - 7);
			v3 -= 14;
			sub_14018B900(v4, 0);
			if (*v3)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v3 - 16i64) + 8i64))(*v3 - 16i64);
			v5 = *(v3 - 1);
			if (v5)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
			--v2;
		} while (v2 >= 0);
	}
	sub_14018B900(v1, 0);
	return v1;
}

