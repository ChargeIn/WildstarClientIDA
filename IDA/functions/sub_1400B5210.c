#include "../winhttp.h"

//----- (00000001400B5210) ----------------------------------------------------
_QWORD* __fastcall sub_1400B5210(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v3; // rdi
	char* v5; // rsi
	__int64 v6; // rbx

	v3 = a3;
	if (a1 != a2)
	{
		v5 = (char*)a3 - a1;
		v6 = a1 + 8;
		do
		{
			if (v3)
			{
				*(_QWORD*)&v5[v6] = 0i64;
				*(_QWORD*)&v5[v6 + 8] = 0i64;
				*(_QWORD*)&v5[v6 + 16] = 0i64;
				sub_14001B240(v3, *(int**)v6, *(_QWORD*)(v6 + 8));
			}
			v6 += 32i64;
			v3 += 4;
		} while (v6 - 8 != a2);
	}
	return v3;
}

