#include "../winhttp.h"

//----- (00000001407088F0) ----------------------------------------------------
__int64 sub_1407088F0()
{
	__int64 v0; // rax
	__int64 v1; // r11
	int v2; // r9d
	int v3; // edx
	__int64 v4; // r8
	_DWORD* v5; // rcx
	bool v6; // zf
	_DWORD* v7; // rcx
	__int64 result; // rax

	v0 = sub_1403ABB90(qword_140C65898 + 7160, 1, 0);
	v2 = 0;
	v3 = 0;
	if (v0)
	{
		v4 = *(_QWORD*)(v0 + 24);
		if (v4)
		{
			v5 = *(_DWORD**)(v0 + 16);
			do
			{
				v6 = *v5 == 3;
				v5 += 4;
				if (v6)
					v3 = 1;
				--v4;
			} while (v4);
		}
	}
	v7 = *(_DWORD**)(v1 + 16);
	result = 1i64;
	LOBYTE(v2) = v3 != 0;
	v7[2] = 1;
	*v7 = v2;
	*(_QWORD*)(v1 + 16) += 16i64;
	return result;
}
// 14070893F: variable 'v1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

