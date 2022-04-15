#include "../winhttp.h"

//----- (0000000140403850) ----------------------------------------------------
__int64 __fastcall sub_140403850(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rsi
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	_DWORD* v6; // rcx
	int v7; // eax
	int v8; // edx
	__int16* v9; // rax
	__int64 v10; // rcx
	int* v12[5]; // [rsp+30h] [rbp-28h] BYREF

	v2 = (_QWORD*)qword_140C658A0;
	v4 = sub_140407590((__int64*)qword_140C658A0, (int*)a2);
	if (v4 < v2[1])
	{
		v5 = *(_QWORD*)(*v2 + 8 * v4);
		v6 = *(_DWORD**)(v5 + 8);
		if (*v6 == *(_DWORD*)a2 && *(_QWORD*)(v5 + 16) == *(_QWORD*)(a2 + 8) && v5)
		{
			if ((v6[13] & 0x100) == 0)
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v5, *(_DWORD*)(a2 + 16));
			if (v2[26] && **(_DWORD**)(v5 + 8) == 19)
			{
				v7 = *(_DWORD*)(a2 + 16);
				if (v7 != 4)
				{
					if (v7 == 17)
					{
						v8 = 569564;
					LABEL_13:
						memset(v12, 0, 32);
						v9 = sub_14034BDD0((__int64)v6, v8);
						v10 = v2[26];
						v12[0] = (int*)v9;
						if (qword_140C65C30 == v10)
							sub_140645BB0(v10, dword_1409E8524, v12, 0);
						goto LABEL_15;
					}
					if (v7 != 22)
						goto LABEL_15;
				}
				v8 = 433839;
				goto LABEL_13;
			}
		}
	}
LABEL_15:
	sub_140405E00((__int64)v2, *(_WORD*)(a2 + 20));
	return 0i64;
}
// 14040391B: variable 'v6' is possibly undefined
// 1409E8524: using guessed type int dword_1409E8524[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65C30: using guessed type __int64 qword_140C65C30;

