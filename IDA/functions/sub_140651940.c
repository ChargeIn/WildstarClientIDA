#include "../winhttp.h"

//----- (0000000140651940) ----------------------------------------------------
__int64 __fastcall sub_140651940(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // r14
	int v4; // edx
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // r15d
	unsigned int i; // esi
	unsigned int v11; // eax
	__int64 v12; // rax
	__int64 v13; // rbx
	unsigned __int64 v14; // rcx
	_WORD* v15; // rax
	int v16; // edi
	unsigned __int64 v17; // rcx
	__int64 v18; // rdx
	int v19; // ebx
	__int64 v20; // rdx
	_QWORD* v21; // rax
	__int64 v22; // rdx
	__int64(__fastcall * *v24)(); // [rsp+20h] [rbp-58h] BYREF
	int v25; // [rsp+28h] [rbp-50h]
	__int64 v26; // [rsp+30h] [rbp-48h]
	int v27; // [rsp+38h] [rbp-40h]
	char v28[8]; // [rsp+40h] [rbp-38h] BYREF
	int v29; // [rsp+48h] [rbp-30h]
	__int64 v30; // [rsp+50h] [rbp-28h]

	v2 = sub_1406499E0(a1);
	v3 = v2;
	if (v2)
	{
		v4 = *(_DWORD*)(v2 + 128);
		if (v4 == 20 || v4 == 23)
		{
			v5 = *(_QWORD*)(a1 + 32);
			v24 = off_140B569F0;
			v6 = *(_QWORD*)(v5 + 112);
			v26 = a1;
			v27 = 1;
			if (*(_QWORD*)(v5 + 120) >= v6)
				sub_14005E2C0(a1);
			v7 = *(_QWORD*)(a1 + 16);
			v8 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v7 + 8) = 5;
			*(_QWORD*)v7 = v8;
			*(_QWORD*)(a1 + 16) += 16i64;
			v9 = sub_1400578C0(a1);
			v25 = v9;
			for (i = 0; ; ++i)
			{
				if (qword_140C63838)
				{
					v11 = qword_140C63838(off_140A6DEE0, qword_140C63858);
				}
				else
				{
					if (dword_140C64070 || (int)sub_140247760() < 0)
					{
					LABEL_39:
						v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v9);
						v22 = *(_QWORD*)(a1 + 16);
						*(_QWORD*)v22 = *v21;
						*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
						*(_QWORD*)(a1 + 16) += 16i64;
						sub_1400579E0(a1, v22, v9);
						return 1i64;
					}
					v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64930 + 40i64))(qword_140C64930);
				}
				if (i >= v11)
					goto LABEL_39;
				if (qword_140C63848)
				{
					v12 = qword_140C63848(off_140A6DEE0, i, qword_140C63858);
				}
				else
				{
					if (dword_140C64070)
					{
						v13 = 0i64;
						goto LABEL_21;
					}
					if ((int)sub_140247760() < 0)
					{
						v13 = 0i64;
						goto LABEL_21;
					}
					v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64930 + 32i64))(qword_140C64930, i);
				}
				v13 = v12;
			LABEL_21:
				v14 = *(_QWORD*)(v13 + 16);
				if (v14 && v14 <= qword_140C3FE70 && qword_140C3FE68 + v14)
				{
					v15 = v14 <= qword_140C3FE70 ? (_WORD*)(qword_140C3FE68 + v14) : 0i64;
					if (*v15)
					{
						v16 = *(_DWORD*)(v13 + 36);
						if ((v16 & 0x20) != 0 || sub_1403B51D0(v3) && (v16 & 0x40) != 0)
						{
							sub_140651400((__int64)v28, a1, v3, (int*)v13);
							v17 = *(_QWORD*)(v13 + 16);
							if (v17)
							{
								if (v17 <= qword_140C3FE70)
									v18 = v17 + qword_140C3FE68;
								else
									v18 = 0i64;
							}
							else
							{
								v18 = 0i64;
							}
							v19 = v29;
							sub_1400FB2A0((__int64)&v24, v18, v29);
							if (v30)
								sub_1400579E0(v30, v20, v19);
						}
					}
				}
			}
		}
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140651ABE: conditional instruction was optimized away because rcx.8!=0
// 140651B47: variable 'v20' is possibly undefined
// 140A6DEE0: using guessed type wchar_t *off_140A6DEE0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64070: using guessed type int dword_140C64070;
// 140C64930: using guessed type __int64 qword_140C64930;
// 140651940: using guessed type char var_38[8];

