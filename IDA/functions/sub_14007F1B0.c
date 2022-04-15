#include "../winhttp.h"

//----- (000000014007F1B0) ----------------------------------------------------
__int64 __fastcall sub_14007F1B0(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	unsigned int v6; // edi
	__int64 v7; // rax
	unsigned __int64 v8; // r9
	__int64 result; // rax

	*a2 += 32i64;
	v6 = 0;
	*a3 += 40i64 * *a1;
	if (*a1)
	{
		do
		{
			v7 = *((_QWORD*)a1 + 1);
			*a2 += 4i64;
			v8 = *(int*)(v7 + 40i64 * v6);
			if (v8 < 9)
				((void(__fastcall*)(__int64, _QWORD*))funcs_14007F22A[v8])(v7 + 8 * (5i64 * v6 + 1), a2);
			else
				*a2 = 0i64;
			++v6;
		} while (v6 < *a1);
	}
	*a2 += 32i64;
	*a2 += 32i64 * a1[4];
	result = 4i64 * a1[4];
	*a3 += result;
	return result;
}
// 140C1ED20: using guessed type __int64 (__fastcall *funcs_14007F22A[25])();

