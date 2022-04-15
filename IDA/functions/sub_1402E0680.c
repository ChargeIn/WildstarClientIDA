#include "../winhttp.h"

//----- (00000001402E0680) ----------------------------------------------------
void __fastcall sub_1402E0680(_QWORD* a1)
{
	unsigned __int64 v1; // r12
	unsigned __int64 i; // r14
	_DWORD* v4; // rdi
	__int64 v5; // rsi
	unsigned __int64 v6; // rbp
	_QWORD* v7; // rbx
	__int64 v8; // [rsp+50h] [rbp+8h]

	v1 = a1[680];
	for (i = 0i64; i < v1; ++i)
	{
		v4 = *(_DWORD**)(a1[679] + 8 * i);
		LODWORD(v8) = *v4 & 0x7F;
		HIDWORD(v8) = (*v4 >> 7) & 0x7F;
		if (a1[4] == v8)
		{
			v5 = a1[2];
			v6 = (*(__int64(__fastcall**)(_DWORD*))(v5 + 1808))(v4);
			v7 = *(_QWORD**)(*(_QWORD*)(v5 + 1800) + 8 * (v6 % *(_QWORD*)(v5 + 1792)));
			if (v7)
			{
				while (v6 != *v7 || !(*(unsigned int(__fastcall**)(_DWORD*, _QWORD*))(v5 + 1816))(v4, v7 + 2))
				{
					v7 = (_QWORD*)v7[1];
					if (!v7)
						goto LABEL_10;
				}
				if (v7 != (_QWORD*)-24i64)
					sub_1402E4700(v7[3], (__int64)v4, *(void(__fastcall****)(_QWORD))(a1[681] + 8 * i));
			}
		}
	LABEL_10:
		;
	}
}

