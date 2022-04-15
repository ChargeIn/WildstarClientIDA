#include "../winhttp.h"

//----- (0000000140694530) ----------------------------------------------------
__int64 __fastcall sub_140694530(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64* v4; // rcx
	__int64 v5; // rcx
	int v6; // ecx
	int v7; // ecx
	int v8; // edx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			v4 = *(__int64**)(v3 + 8);
			if (v4)
			{
				if (qword_140C65C28)
				{
					v5 = *v4;
					if ((*(_BYTE*)(v5 + 12) & 2) == 0)
					{
						v6 = *(_DWORD*)(v5 + 84) - 1;
						if (!v6)
						{
							v8 = 10;
							goto LABEL_13;
						}
						v7 = v6 - 1;
						if (!v7)
						{
							v8 = 25;
							goto LABEL_13;
						}
						if (v7 == 1)
						{
							v8 = 50;
						LABEL_13:
							v9 = a1[2];
							result = 1i64;
							*(_DWORD*)(v9 + 8) = 3;
							*(double*)v9 = (double)v8;
							a1[2] += 16i64;
							return result;
						}
					}
					v8 = 0;
					goto LABEL_13;
				}
			}
		}
	}
	v11 = a1[2];
	*(_QWORD*)v11 = 0i64;
	*(_DWORD*)(v11 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65C28: using guessed type __int64 qword_140C65C28;

