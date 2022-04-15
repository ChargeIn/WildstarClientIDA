#include "../winhttp.h"

//----- (00000001406EF7E0) ----------------------------------------------------
__int64 __fastcall sub_1406EF7E0(__int64 a1)
{
	__int64 v1; // r8
	__int64 v2; // rax
	unsigned int* v3; // r10
	__int64 v4; // r8
	unsigned int v5; // edx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r10
	__int64 v11; // [rsp+48h] [rbp+10h]

	if (qword_140C65970)
	{
		if (qword_140C65898)
		{
			v1 = *(_QWORD*)(qword_140C65898 + 120);
			if (v1)
			{
				if (!*(_DWORD*)(v1 + 592) && *(_DWORD*)(qword_140C65970 + 8) == 3)
				{
					v2 = sub_1405E9400(a1, 1);
					if (v2)
					{
						v3 = *(unsigned int**)(v2 + 112);
						v4 = *(_QWORD*)(qword_140C65978 + 208);
						v5 = *v3;
						v6 = *(_QWORD*)(v4 + 8);
						v7 = v4;
						while (v6)
						{
							if (*(_DWORD*)(v6 + 32) < v5)
							{
								v6 = *(_QWORD*)(v6 + 24);
							}
							else
							{
								v7 = v6;
								v6 = *(_QWORD*)(v6 + 16);
							}
						}
						if (v7 == v4 || (v11 = v7, v5 < *(_DWORD*)(v7 + 32)))
							v11 = *(_QWORD*)(qword_140C65978 + 208);
						if (v11 != v4)
						{
							v8 = sub_1403C1780(qword_140C65898, v3[1]);
							if (v8)
								sub_14039A040(v9, *(_DWORD*)(v8 + 36), 0i64, 0, 0, 0i64);
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 1406EF8C4: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65978: using guessed type __int64 qword_140C65978;

