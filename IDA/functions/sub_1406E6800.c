#include "../winhttp.h"

//----- (00000001406E6800) ----------------------------------------------------
__int64 __fastcall sub_1406E6800(__int64 a1, __int64 a2)
{
	BOOL v4; // ebp
	unsigned int v5; // r15d
	__int64 v6; // r12
	_QWORD* v7; // rcx
	__int64 v8; // r14
	unsigned __int64 v9; // rdi
	_QWORD* v10; // rbx
	_BYTE* v11; // rdx

	v4 = 1;
	if (*(_BYTE*)(a2 + 68))
		return 1i64;
	v5 = 0;
	v6 = 0i64;
	do
	{
		if (!v4)
			break;
		v7 = *(_QWORD**)(v6 + *(_QWORD*)a2 + 8);
		if (v7)
		{
			v8 = *v7;
			v9 = (*(__int64(__fastcall**)(_QWORD))(a1 + 2440))(*v7);
			v10 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v9 % *(_QWORD*)(a1 + 2424)));
			if (v10)
			{
				while (v9 != *v10 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2448))(v8, v10 + 2))
				{
					v10 = (_QWORD*)v10[1];
					if (!v10)
						goto LABEL_14;
				}
				if (v10 != (_QWORD*)-24i64)
				{
					v11 = (_BYTE*)v10[3];
					if (v11[68])
					{
						if ((*(_BYTE*)(**(_QWORD**)v11 + 16i64) & 1) == 0)
							v4 = sub_1406E6720(a1, (__int64)v11) != 0;
					}
				}
			}
		}
	LABEL_14:
		++v5;
		v6 += 8i64;
	} while (v5 < 6);
	return v4;
}

