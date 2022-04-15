#include "../winhttp.h"

//----- (0000000140867230) ----------------------------------------------------
__int64 __fastcall sub_140867230(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int8 v4; // bp
	__int64 v6; // r8
	__int64 v7; // r9
	unsigned int v8; // edx
	char v9; // al
	_DWORD* v10; // r15
	_DWORD* v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rax
	__int64 v14; // rax
	_QWORD* v15; // r14
	int v16; // eax
	unsigned int v17; // eax
	__int64 v18; // r10
	int v19; // eax
	int v20; // eax
	__int64 v21; // r8
	int v22; // edx
	int v23; // ebx
	char v24; // al
	__int64 v25; // rcx
	char v26; // al
	__int64 v28; // [rsp+50h] [rbp+8h]

	v4 = a2;
	sub_14085E090(a1, a2, a3, a4);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 136i64))(a1, 0i64);
	if (!*(_DWORD*)(a1 + 636) && qword_140C61B68)
		sub_14082B880((__int64)qword_140C61B68, a1);
	v8 = *(_DWORD*)(a1 + 636);
	if (v8)
	{
		v9 = *(_BYTE*)(a1 + 381);
		if ((v9 & 4) == 0 && ((v9 & 0x20) == 0 || (unsigned int)(((int)(*(_DWORD*)(a1 + 640) << 28) >> 28) - 1) > 1))
		{
			v10 = (_DWORD*)sub_140830F00(qword_140C61BA8, v8, 0);
			if (v10)
			{
				v11 = (_DWORD*)sub_140856D40(1283, 0, (__int64*)(a1 + 544));
				v12 = (__int64)v11;
				if (!v11)
				{
				LABEL_31:
					v24 = *(_BYTE*)(a1 + 381);
					if ((v24 & 1) != 0)
						*(_BYTE*)(a1 + 381) = v24 | 2;
					(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v10 + 16i64))(v10);
					goto LABEL_34;
				}
				v11[60] = *(_DWORD*)(a1 + 404);
				sub_140857160(v11, (_DWORD*)(a1 + 552));
				LODWORD(v28) = v10[6];
				BYTE4(v28) = 0;
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 40i64))(v12, v28);
				sub_140857210(v12, *(_QWORD*)(a1 + 624));
				v13 = sub_1408819F0(dword_140C10F20, 80i64);
				if (v13)
				{
					v14 = sub_14082B2C0(v13, *(_QWORD*)(a1 + 176));
					v15 = (_QWORD*)v14;
					if (v14)
					{
						if ((unsigned int)sub_140857370(v12, *(_QWORD*)(a1 + 128), *(_BYTE*)(a1 + 144) & 1, v14) == 1
							&& (unsigned int)sub_1408572D0(v12, *(_QWORD*)(a1 + 136), (*(_BYTE*)(a1 + 144) & 2) != 0, (__int64)v15) == 1)
						{
							sub_140857240(v12, a1 + 504);
							if ((*(_BYTE*)(a1 + 381) & 8) != 0 || v4)
							{
								sub_140857230(v12, *(_BYTE*)(a1 + 644) & 1);
								v20 = sub_1408666A0(*(float*)(a1 + 632));
								v21 = (unsigned int)v20;
								v22 = (HIDWORD(qword_140C61B20) + 10) << 10;
								if ((*(_BYTE*)(a1 + 640) & 0xF) != 3 || v20 < v22)
									v21 = (unsigned int)v22;
								v19 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v12 + 48i64))(v12, 14i64, v21);
							}
							else
							{
								v16 = (int)(*(_DWORD*)(a1 + 640) << 28) >> 28;
								if (v16 != 3)
								{
									if (v16 == 4)
										sub_140857400(v12, *(_DWORD*)(a1 + 152));
									goto LABEL_25;
								}
								v17 = sub_1408666A0(*(float*)(a1 + 632));
								v19 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(v18 + 48))(v12, 14i64, v17);
							}
							if (v19 == 1)
							{
							LABEL_25:
								v15[1] = v12;
								sub_14082B460((__int64)(v15 + 4), a1 + 96);
								sub_14082BB80((__int64)qword_140C61B68, (__int64)v15);
								if (*(float*)(a1 + 632) != 0.0 && *(_DWORD*)(a1 + 404) && !*(_QWORD*)(a1 + 136))
									sub_14082C2B0((__int64)qword_140C61B68, (__int64)v15);
								goto LABEL_30;
							}
						}
						v23 = dword_140C10F20;
						(*(void(__fastcall**)(_QWORD*, _QWORD))(*v15 + 8i64))(v15, 0i64);
						sub_140881720(v23, (__int64)v15);
					}
				}
			LABEL_30:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
				goto LABEL_31;
			}
		}
	}
LABEL_34:
	v25 = *(_QWORD*)(a1 + 544);
	*(_QWORD*)(a1 + 544) = 0i64;
	if (v25)
		sub_140866000(v25);
	v26 = *(_BYTE*)(a1 + 381);
	if ((v26 & 1) != 0 && (v26 & 2) != 0)
		*(_BYTE*)(a1 + 381) = v26 & 0xFE;
	return sub_1408601D0(a1, v4, v6, v7);
}
// 140867413: variable 'v18' is possibly undefined
// 140867575: variable 'v6' is possibly undefined
// 140867575: variable 'v7' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B20: using guessed type __int64 qword_140C61B20;

