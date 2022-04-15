#include "../winhttp.h"

//----- (00000001405B0EC0) ----------------------------------------------------
__int64 __fastcall sub_1405B0EC0(_QWORD* a1)
{
	int* v2; // rdi
	int* v3; // rsi
	int* v4; // r8
	__int64 result; // rax

	sub_140019490(a1 + 7);
	v2 = (int*)a1[2];
	if (v2 != (int*)a1[3])
	{
		v3 = v2 + 2;
		do
		{
			if (*(_QWORD*)v2)
				(***(void(__fastcall****)(_QWORD, __int64))v2)(*(_QWORD*)v2, 1i64);
			v4 = (int*)a1[3];
			if (v3 != v4)
				sub_1407DB590(v2, v2 + 2, ((char*)v4 - (char*)v3) & 0xFFFFFFFFFFFFFFF8ui64);
			a1[3] -= 8i64;
		} while (v2 != (int*)a1[3]);
	}
	result = 0i64;
	a1[6] = 0i64;
	a1[5] = 0i64;
	return result;
}

