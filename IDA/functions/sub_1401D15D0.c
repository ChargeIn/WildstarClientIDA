#include "../winhttp.h"

//----- (00000001401D15D0) ----------------------------------------------------
__int64 __fastcall sub_1401D15D0(__int64 a1, int* a2)
{
	__int64 v2; // rax
	__int64 v4; // rsi
	__int64 v5; // rdi
	_QWORD* v6; // rbx

	v2 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v2;
		while (*((_WORD*)a2 + v2));
	}
	v4 = *(_QWORD*)(a1 + 48);
	v5 = v2 + 1;
	v6 = (_QWORD*)(a1 + 40);
	sub_1401CFD00((__int64*)(a1 + 40), v4 + v2 + 1);
	sub_1407DB590((int*)(*v6 + 2 * v4), a2, 2 * v5);
	return v4;
}

