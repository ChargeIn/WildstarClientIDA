#include "../winhttp.h"

//----- (0000000140618400) ----------------------------------------------------
__int64 __fastcall sub_140618400(__int64 a1, __int64 a2)
{
	__int64 v3; // r14
	int v4; // ebp
	int v5; // edx
	unsigned int v6; // edi
	_DWORD* i; // r15
	__int64 v8; // r9
	__int64 v9; // rax
	__int64 v10; // rcx
	_DWORD* v11; // r8
	__int64* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rbx
	__int64 v16; // [rsp+60h] [rbp+8h] BYREF
	__int64 v17; // [rsp+68h] [rbp+10h] BYREF

	v16 = a1;
	if (*(_DWORD*)(a2 + 4))
	{
		v3 = sub_140432960(qword_140C65960, *(_DWORD*)a2);
		if (v3)
		{
			v4 = 0;
			if (*(_DWORD*)(qword_140C65898 + 26180) == 30)
				v5 = *(_DWORD*)(qword_140C65898 + 26176);
			else
				v5 = 0;
			v6 = 0;
			for (i = (_DWORD*)sub_1403D90D0(qword_140C65898, v5); v6 < *(_DWORD*)(a2 + 4); ++v6)
			{
				v8 = *(_QWORD*)(v3 + 24);
				v9 = *(_QWORD*)(v8 + 8);
				v10 = v8;
				v11 = (_DWORD*)(*(_QWORD*)(a2 + 8) + 16i64 * v6);
				while (v9)
				{
					if (*(_DWORD*)(v9 + 32) < *v11)
					{
						v9 = *(_QWORD*)(v9 + 24);
					}
					else
					{
						v10 = v9;
						v9 = *(_QWORD*)(v9 + 16);
					}
				}
				if (v10 == v8 || *v11 < *(_DWORD*)(v10 + 32))
				{
					v17 = *(_QWORD*)(v3 + 24);
					v12 = &v17;
				}
				else
				{
					v16 = v10;
					v12 = &v16;
				}
				v13 = *v12;
				if (v13 != v8)
				{
					*(_DWORD*)(*(_QWORD*)(v13 + 40) + 104i64) = v11[2];
					*(_DWORD*)(*(_QWORD*)(v13 + 40) + 108i64) = v11[1];
					*(_DWORD*)(*(_QWORD*)(v13 + 40) + 112i64) = v11[3];
					if (i)
					{
						v14 = *(_QWORD*)(*(_QWORD*)(v13 + 40) + 24i64);
						if (*(_DWORD*)(v14 + 12) == (*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)i + 8i64))(i))
							v4 = 1;
					}
				}
			}
			if (i && v4)
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"SettlerBuildStatusUpdate",
					"iU",
					**(unsigned int**)(v3 + 8),
					i[2]);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65960: using guessed type __int64 qword_140C65960;

