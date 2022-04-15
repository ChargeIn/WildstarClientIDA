#include "../winhttp.h"

//----- (0000000140618300) ----------------------------------------------------
__int64 sub_140618300()
{
	__int64 v0; // r8
	_QWORD* v1; // rax
	_QWORD* v2; // rcx
	_QWORD* v3; // rdx
	_QWORD* v4; // rax
	__int64 v5; // rdx
	_QWORD* i; // rdx
	__int64 j; // rdx
	__int64 v8; // rax
	_QWORD* k; // rax
	__int64 m; // rax

	v0 = qword_140C65960;
	v1 = *(_QWORD**)(qword_140C65960 + 16);
	v2 = (_QWORD*)v1[2];
	if (v2 != v1)
	{
		do
		{
			v3 = (_QWORD*)v2[6];
			v4 = (_QWORD*)v3[2];
			if (v4 != v3)
			{
				do
				{
					*(_DWORD*)(v4[5] + 96i64) = 0;
					*(_DWORD*)(v4[5] + 100i64) = 0;
					*(_DWORD*)(v4[5] + 104i64) = 0;
					v5 = v4[3];
					if (v5)
					{
						v4 = (_QWORD*)v4[3];
						for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
							v4 = i;
					}
					else
					{
						for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
							v4 = (_QWORD*)j;
						if (v4[3] != j)
							v4 = (_QWORD*)j;
					}
				} while (v4 != (_QWORD*)v2[6]);
			}
			v8 = v2[3];
			if (v8)
			{
				v2 = (_QWORD*)v2[3];
				for (k = *(_QWORD**)(v8 + 16); k; k = (_QWORD*)k[2])
					v2 = k;
			}
			else
			{
				for (m = v2[1]; v2 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v2 = (_QWORD*)m;
				if (v2[3] != m)
					v2 = (_QWORD*)m;
			}
		} while (v2 != *(_QWORD**)(v0 + 16));
	}
	return 0i64;
}
// 140C65960: using guessed type __int64 qword_140C65960;

