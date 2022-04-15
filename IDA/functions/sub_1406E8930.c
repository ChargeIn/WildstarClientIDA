#include "../winhttp.h"

//----- (00000001406E8930) ----------------------------------------------------
__int64 __fastcall sub_1406E8930(__int64 a1, int a2)
{
	__int64 v4; // r12
	unsigned int v6; // ebx
	__int64 v7; // rbp
	__int64 v8; // rdi
	unsigned int v9; // r14d
	_DWORD* v10; // rax

	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4)
		return 0i64;
	v6 = 0;
	v7 = 0i64;
	if (*(_QWORD*)(a1 + 2464))
	{
		while (1)
		{
			v8 = *(_QWORD*)(*(_QWORD*)(a1 + 2456) + 8 * v7);
			v9 = sub_1406DFA40(v8, v4);
			if (qword_140C63840)
				break;
			if (!dword_140C64FC4 && (int)sub_140225FE0() >= 0)
			{
				v10 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65078 + 24i64))(
					qword_140C65078,
					v9);
			LABEL_9:
				if (v10)
				{
					if (v10[1] == 4 && v10[5] == a2)
						v6 += *(unsigned __int8*)(v8 + 68);
					if (v10[2] == 4 && v10[6] == a2)
						v6 += *(unsigned __int8*)(v8 + 68);
					if (v10[3] == 4 && v10[7] == a2)
						v6 += *(unsigned __int8*)(v8 + 68);
					if (v10[4] == 4 && v10[8] == a2)
						v6 += *(unsigned __int8*)(v8 + 68);
				}
			}
			if ((unsigned __int64)++v7 >= *(_QWORD*)(a1 + 2464))
				return v6;
		}
		v10 = (_DWORD*)qword_140C63840(off_140A6C350, v9, qword_140C63858);
		goto LABEL_9;
	}
	return v6;
}
// 140A6C350: using guessed type wchar_t *off_140A6C350[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64FC4: using guessed type int dword_140C64FC4;
// 140C65078: using guessed type __int64 qword_140C65078;
// 140C65898: using guessed type __int64 qword_140C65898;

