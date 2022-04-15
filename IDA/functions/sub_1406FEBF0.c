#include "../winhttp.h"

//----- (00000001406FEBF0) ----------------------------------------------------
__int64 __fastcall sub_1406FEBF0(__int64 a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rcx
	__int64 v4; // rdi
	unsigned __int64 v5; // r8
	__int64* v6; // rdx
	int v7; // eax
	__int64 v8; // rcx
	__int64 v10[3]; // [rsp+20h] [rbp-28h] BYREF

	v1 = *(_DWORD**)(a1 + 24);
	if ((unsigned __int64)v1 < *(_QWORD*)(a1 + 16)
		&& v1 != dword_140A12138
		&& v1[2] == 5
		&& (unsigned int)sub_1400585E0(a1, 1) == 6)
	{
		if (qword_140C65898)
		{
			v3 = *(_QWORD*)(qword_140C65898 + 120);
			if (v3)
			{
				if (!*(_DWORD*)(v3 + 592) && sub_1403A1230())
				{
					v4 = 0i64;
					memset(v10, 0, sizeof(v10));
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
					while (1)
					{
						v5 = *(_QWORD*)(a1 + 16);
						v6 = (__int64*)dword_140A12138;
						if (*(_QWORD*)(a1 + 24) < v5)
							v6 = *(__int64**)(a1 + 24);
						if (!(unsigned int)sub_14005BA70(a1, *v6, v5 - 16))
							break;
						*(_QWORD*)(a1 + 16) += 16i64;
						v7 = sub_1400584E0(a1, -1);
						*(_QWORD*)(a1 + 16) -= 16i64;
						*((_DWORD*)v10 + v4) = v7;
						v4 = (unsigned int)(v4 + 1);
					}
					v8 = qword_140C65898;
					*(_QWORD*)(a1 + 16) -= 16i64;
					sub_1403F4900(v8, 0x17Cu, (__int64)v10);
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

