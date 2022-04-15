#include "../winhttp.h"

//----- (00000001406D6A40) ----------------------------------------------------
__int64 __fastcall sub_1406D6A40(__int64 a1)
{
	__int64 v2; // rax
	int v3; // r8d
	__int64 v4; // r9
	int v5; // edx
	__int64 v6; // rcx
	int v7; // edx
	int v8; // edx
	unsigned int v9; // eax
	_QWORD* v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 result; // rax

	v2 = sub_1400D6530(a1, 1);
	v3 = 0;
	v4 = v2;
	if (!v2 || (*(_DWORD*)(v2 + 432) & 0x20000000) == 0)
		v4 = 0i64;
	v5 = 1;
	if (v4)
		v5 = *(_DWORD*)(v4 + 1100);
	v6 = qword_140C65898 + 160;
	if (v5)
	{
		v7 = v5 - 1;
		if (v7)
		{
			v8 = v7 - 1;
			if (!v8)
			{
				v6 = qword_140C65898 + 208;
				goto LABEL_13;
			}
			if (v8 == 8)
			{
				v6 = qword_140C65898 + 232;
				goto LABEL_13;
			}
		}
		v6 = qword_140C65898 + 184;
	}
LABEL_13:
	v9 = *(_DWORD*)(v6 + 12);
	if (v9)
	{
		v10 = *(_QWORD**)(v6 + 16);
		v11 = v9;
		do
		{
			if (!*v10)
				++v3;
			++v10;
			--v11;
		} while (v11);
	}
	v12 = *(_QWORD*)(a1 + 16);
	result = 1i64;
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

