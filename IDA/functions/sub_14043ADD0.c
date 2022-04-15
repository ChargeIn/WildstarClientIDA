#include "../winhttp.h"

//----- (000000014043ADD0) ----------------------------------------------------
void sub_14043ADD0()
{
	unsigned int v0; // edi
	unsigned int v1; // eax
	unsigned int v2; // esi
	__int64 v3; // rax
	__int64 v4; // rcx
	int* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned int v11; // r8d

	v0 = 0;
	if (qword_140C63838)
	{
		v1 = qword_140C63838(off_140A69AD8, qword_140C63858);
	}
	else
	{
		if (dword_140C64E70)
		{
			v2 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1401F4D40() < 0)
		{
			v2 = 0;
			goto LABEL_9;
		}
		v1 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64B78 + 40i64))(qword_140C64B78);
	}
	v2 = v1;
LABEL_9:
	if (v2)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C64E70 && (int)sub_1401F4D40() >= 0)
			{
				v3 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B78 + 32i64))(qword_140C64B78, v0);
			LABEL_15:
				v5 = (int*)v3;
				if (v3)
				{
					if ((*(_BYTE*)(v3 + 12) & 1) == 0)
					{
						sub_14043B280(v4, *(_DWORD*)v3, *(_DWORD*)(v3 + 24), (__int64)&unk_140C7CCB0);
						sub_14043B280(v6, *v5, v5[7], (__int64)&unk_140C7CCD0);
						sub_14043B280(v7, *v5, v5[18], (__int64)&unk_140C7CCF0);
						sub_14043B280(v8, *v5, v5[9], (__int64)&unk_140C7CD10);
						sub_14043B280(v9, *v5, v5[10], (__int64)&unk_140C7CD10);
						sub_14043B280(v10, *v5, v5[11], (__int64)&unk_140C7CD10);
					}
					v11 = v5[21];
					if (v11)
						sub_14043B280(v4, *v5, v11, (__int64)&unk_140C7CD30);
				}
			}
			if (++v0 >= v2)
				return;
		}
		v3 = qword_140C63848(off_140A69AD8, v0, qword_140C63858);
		goto LABEL_15;
	}
}
// 14043AE98: variable 'v4' is possibly undefined
// 14043AEAA: variable 'v6' is possibly undefined
// 14043AEBC: variable 'v7' is possibly undefined
// 14043AECE: variable 'v8' is possibly undefined
// 14043AEE0: variable 'v9' is possibly undefined
// 14043AEF2: variable 'v10' is possibly undefined
// 140A69AD8: using guessed type wchar_t *off_140A69AD8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B78: using guessed type __int64 qword_140C64B78;
// 140C64E70: using guessed type int dword_140C64E70;

