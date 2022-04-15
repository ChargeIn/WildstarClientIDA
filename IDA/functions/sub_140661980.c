#include "../winhttp.h"

//----- (0000000140661980) ----------------------------------------------------
__int64 __fastcall sub_140661980(__int64 a1)
{
	int v1; // esi
	int* v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	_DWORD* v6; // rbx
	__int64 v7; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = (int*)sub_1406622C0(a1, 1);
	if (v3)
	{
		v4 = sub_1403D90D0(qword_140C65898, *v3);
		if (v4)
		{
			v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v4 + 192));
			v6 = (_DWORD*)v5;
			if (v5)
			{
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5) && ((v6[32] - 3) & 0xFFFFFFFB) == 0)
					v1 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 72i64))(v6);
			}
		}
	}
	v7 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v7 + 8) = 3;
	result = 1i64;
	*(double*)v7 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

