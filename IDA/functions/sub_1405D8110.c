#include "../winhttp.h"

//----- (00000001405D8110) ----------------------------------------------------
unsigned int* __fastcall sub_1405D8110(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r12
	unsigned int v4; // edi
	unsigned __int64 v5; // r15
	int* v6; // rsi
	unsigned int v8; // ebp
	unsigned __int64 v9; // r8
	unsigned int v10; // eax
	unsigned int v11; // r13d
	unsigned int i; // r14d
	__int64 v13; // rax
	_DWORD* v14; // rbx
	int v15; // eax
	int v16; // eax
	int* v17; // rax
	int* v18; // rbp
	__int64 v19; // r9
	unsigned int* v20; // rbx
	unsigned int v21; // ecx
	__int64 v22; // rax
	unsigned int* v23; // rax
	unsigned int v24; // [rsp+70h] [rbp+8h]
	__int64 v27; // [rsp+88h] [rbp+20h]

	v3 = *(_QWORD*)(a3 + 3336);
	v4 = 0;
	v5 = 0i64;
	v6 = 0i64;
	v27 = v3;
	if (!v3)
		return 0i64;
	v8 = (int)(float)(sub_14047A940((_QWORD*)a3) * *(float*)(v3 + 140));
	v24 = v8;
	if (qword_140C63838)
	{
		v10 = qword_140C63838(off_140A6A398, qword_140C63858);
	}
	else
	{
		if (dword_140C641A0)
		{
			v11 = 0;
			goto LABEL_11;
		}
		if ((int)sub_1401FF740() < 0)
		{
			v11 = 0;
			goto LABEL_11;
		}
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A58 + 40i64))(qword_140C64A58);
	}
	v11 = v10;
LABEL_11:
	for (i = 0; i < v11; ++i)
	{
		if (qword_140C63848)
		{
			v13 = qword_140C63848(off_140A6A398, i, qword_140C63858);
		}
		else
		{
			if (dword_140C641A0)
			{
				v14 = 0i64;
				goto LABEL_20;
			}
			if ((int)sub_1401FF740() < 0)
			{
				v14 = 0i64;
				goto LABEL_20;
			}
			v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A58 + 32i64))(qword_140C64A58, i);
		}
		v14 = (_DWORD*)v13;
	LABEL_20:
		if (v8 >= v14[3] && v8 <= v14[4])
		{
			v15 = v14[2];
			if (_bittest(&v15, *(_DWORD*)(a2 + 36)))
			{
				v16 = v14[6];
				if (_bittest(&v16, *(_DWORD*)(a3 + 4232)))
				{
					if (*(_DWORD*)(v3 + 132) == v14[5])
					{
						v17 = sub_14018DB00((__int64)v6, v5 + 1, 8i64);
						v9 = 8 * v5;
						*(_QWORD*)&v17[2 * v5] = v14;
						v18 = v17;
						if (v6 != v17)
						{
							sub_1407DB590(v17, v6, v9);
							if (v6)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
							v6 = v18;
						}
						v8 = v24;
						v3 = v27;
						++v5;
					}
				}
			}
		}
	}
	v19 = 0xFFFFFFFFi64;
	v20 = 0i64;
	v21 = 0;
	if (v5)
	{
		v22 = 0i64;
		do
		{
			v23 = *(unsigned int**)&v6[2 * v22];
			v9 = v23[1];
			if ((unsigned int)v9 >= v4 && *v23 < (unsigned int)v19)
			{
				v4 = v23[1];
				v19 = *v23;
				v20 = v23;
			}
			v22 = ++v21;
		} while (v21 < v5);
	}
	if (v6)
		(*(void(__fastcall**)(int*, _QWORD, unsigned __int64, __int64))(*((_QWORD*)v6 - 2) + 8i64))(
			v6 - 4,
			*((_QWORD*)v6 - 2),
			v9,
			v19);
	return v20;
}
// 1405D8333: variable 'v9' is possibly undefined
// 140A6A398: using guessed type wchar_t *off_140A6A398[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C641A0: using guessed type int dword_140C641A0;
// 140C64A58: using guessed type __int64 qword_140C64A58;

