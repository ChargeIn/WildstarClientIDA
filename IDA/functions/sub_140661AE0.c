#include "../winhttp.h"

//----- (0000000140661AE0) ----------------------------------------------------
__int64 __fastcall sub_140661AE0(__int64 a1)
{
	int v1; // edi
	int* v3; // rax
	int v4; // ebp
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rbx
	_DWORD* v8; // rcx
	__int64 result; // rax

	v1 = 1;
	v3 = (int*)sub_1406622C0(a1, 1);
	v4 = 0;
	if (v3)
	{
		v5 = sub_1403D90D0(qword_140C65898, *v3);
		if (v5)
		{
			v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v5 + 192));
			v7 = v6;
			if (v6)
			{
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6)
					&& ((*(_DWORD*)(v7 + 128) - 3) & 0xFFFFFFFB) == 0
					&& (*(_BYTE*)(v7 + 40) & 1) != 0)
				{
					v1 = 0;
				}
			}
		}
	}
	v8 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	LOBYTE(v4) = v1 != 0;
	v8[2] = 1;
	*v8 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

