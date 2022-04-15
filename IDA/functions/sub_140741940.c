#include "../winhttp.h"

//----- (0000000140741940) ----------------------------------------------------
__int64 __fastcall sub_140741940(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // edi
	__int64 v6; // rax
	int* v7; // rax
	unsigned int v8; // ebx
	__int64 v9; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = sub_14022BFC0(*(_DWORD*)(v3 + 8))) != 0)
	{
		v5 = 0;
		v6 = sub_14024B980(*(_DWORD*)(v4 + 4));
		if (v6)
		{
			v7 = (int*)sub_14024DB80(*(_DWORD*)(v6 + 44));
			if (v7)
			{
				while (1)
				{
					v8 = v7[2];
					if (!v8)
						break;
					if (qword_140C63840)
					{
						v7 = (int*)qword_140C63840(off_140A6E3E8, v8, qword_140C63858);
					}
					else
					{
						if (dword_140C64634 || (int)sub_14024D920() < 0)
							goto LABEL_15;
						v7 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(
							qword_140C64270,
							v8);
					}
					if (!v7)
						goto LABEL_15;
				}
				v5 = *v7;
			}
		}
	LABEL_15:
		v9 = a1[2];
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v5;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;

