#include "../winhttp.h"

//----- (0000000140851F80) ----------------------------------------------------
void __fastcall sub_140851F80(__int64 a1, _WORD* a2, char a3)
{
	float v3; // xmm0_4
	__int64 v4; // rax
	int v7; // edx
	__int64 v8; // rax
	unsigned __int16 v9; // cx
	unsigned __int16 v10; // r8
	char v11; // r9
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // [rsp+50h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 56);
	if (!v4)
		return;
	--* (_WORD*)(v4 + 78);
	if (a3)
	{
		LOWORD(v7) = *(_WORD*)(a1 + 88);
		if ((*(_DWORD*)(a1 + 96) & 0x200i64) == 0)
		{
		LABEL_6:
			if ((_WORD)v7)
			{
				v8 = *(_QWORD*)(a1 + 56);
				v9 = v8 ? *(_WORD*)(v8 + 76) : 0;
				v10 = v8 ? *(_WORD*)(v8 + 78) : 0;
				if (v9 - (unsigned __int16)*a2 - v10 > (unsigned __int16)v7)
				{
					v11 = *(_BYTE*)(a1 + 90);
					v12 = *(unsigned int*)(a1 + 24);
					v14 = 0i64;
					sub_140843FB0(101.0, 0i64, v12, v11 & 1, (v11 & 2) != 0, &v14, 0);
					++* a2;
				}
			}
			goto LABEL_15;
		}
		if ((_WORD)v7)
		{
			sub_140836340(qword_140C61BB0, a1, 9, 0i64);
			v7 = (int)v3;
			goto LABEL_6;
		}
	}
LABEL_15:
	v13 = *(_QWORD*)(a1 + 56);
	if (!*(_WORD*)(v13 + 72)
		&& !*(_WORD*)(v13 + 74)
		&& !*(_WORD*)(v13 + 76)
		&& !*(_WORD*)(v13 + 78)
		&& !*(_QWORD*)(v13 + 24)
		&& *(_QWORD*)(v13 + 8) == *(_QWORD*)v13)
	{
		sub_1408520B0(a1);
	}
}
// 140851FDD: variable 'v3' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

