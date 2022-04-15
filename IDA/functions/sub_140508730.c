#include "../winhttp.h"

//----- (0000000140508730) ----------------------------------------------------
_QWORD* __fastcall sub_140508730(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64* v6; // rax
	__int64* v7; // rdi
	__int64* v8; // rbx
	__int64 v9; // rcx
	_QWORD* result; // rax

	v6 = sub_140508BE0(a3, *(_QWORD*)(a1 + 16), a2);
	v7 = *(__int64**)(a1 + 16);
	if (v6 != v7)
	{
		v8 = v6 + 3;
		do
		{
			v9 = v8[5];
			if (v9)
				sub_14018B900(v9, 0);
			if (*v8)
				sub_14018B900(*v8, 0);
			v8 += 11;
		} while (v8 - 3 != v7);
	}
	result = a2;
	*(_QWORD*)(a1 + 16) += 88 * ((a3 - (__int64)a2) / -88);
	return result;
}

