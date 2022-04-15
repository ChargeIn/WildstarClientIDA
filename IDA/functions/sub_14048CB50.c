#include "../winhttp.h"

//----- (000000014048CB50) ----------------------------------------------------
__int64 __fastcall sub_14048CB50(__int64 a1)
{
	unsigned int v1; // edi
	_QWORD* v2; // rbp
	unsigned int v3; // eax
	unsigned int v4; // r13d
	unsigned int v5; // r12d
	__int64 v6; // rax
	_DWORD* v7; // rsi
	int* v8; // rax
	__int64 v9; // r14
	unsigned int v10; // ebx
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // r15
	unsigned int v14; // esi
	__int64 v15; // rax
	unsigned int v16; // r8d
	__int64 v17; // r9
	__int64 v18; // rdx
	__int64 v19; // rbx
	bool v20; // al
	int* v21; // rcx
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 i; // rax
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v29; // [rsp+20h] [rbp-38h]

	v1 = 0;
	v2 = (_QWORD*)a1;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A69640, qword_140C63858);
	}
	else
	{
		if (dword_140C63878)
		{
			v4 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1401EF400() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63860 + 40i64))(qword_140C63860);
	}
	v4 = v3;
LABEL_9:
	v5 = 0;
	if (!v4)
		goto LABEL_71;
	do
	{
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A69640, v5, qword_140C63858);
		LABEL_17:
			v7 = (_DWORD*)v6;
			goto LABEL_18;
		}
		if (dword_140C63878)
		{
			v7 = 0i64;
		}
		else
		{
			if ((int)sub_1401EF400() >= 0)
			{
				v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63860 + 32i64))(qword_140C63860, v5);
				goto LABEL_17;
			}
			v7 = 0i64;
		}
	LABEL_18:
		v8 = sub_14018B280(96i64, 0);
		v9 = (__int64)v8;
		if (v8)
			sub_1407E4830(v8, 0i64, 0x38ui64);
		else
			v9 = 0i64;
		*(_DWORD*)v9 = *v7;
		*(_DWORD*)(v9 + 4) = v7[1];
		*(_DWORD*)(v9 + 8) = v7[2];
		*(_DWORD*)(v9 + 12) = v7[3];
		*(_DWORD*)(v9 + 24) = v7[9];
		*(_DWORD*)(v9 + 28) = v7[4];
		*(_DWORD*)(v9 + 32) = v7[5];
		*(_DWORD*)(v9 + 20) = v7[21];
		*(_DWORD*)(v9 + 56) = v7[6];
		*(_DWORD*)(v9 + 60) = v7[7];
		*(_DWORD*)(v9 + 36) = v7[8];
		*(_DWORD*)(v9 + 68) = v7[13];
		*(_DWORD*)(v9 + 72) = v7[14];
		*(_DWORD*)(v9 + 76) = v7[15];
		*(_DWORD*)(v9 + 80) = v7[16];
		*(_DWORD*)(v9 + 64) = v7[17];
		*(_DWORD*)(v9 + 84) = v7[18];
		*(_DWORD*)(v9 + 88) = v7[19];
		*(_DWORD*)(v9 + 92) = v7[20];
		v10 = v7[10];
		if (qword_140C63840)
		{
			v11 = qword_140C63840(off_140A69678, v10, qword_140C63858);
		}
		else
		{
			if (dword_140C647B8 || (int)sub_1401EF840() < 0)
			{
			LABEL_68:
				sub_14018B900(v9, 0);
				goto LABEL_70;
			}
			v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64450 + 24i64))(qword_140C64450, v10);
		}
		if (!v11)
			goto LABEL_68;
		v12 = v9 + 44;
		*(_QWORD*)(v9 + 44) = -1i64;
		*(_DWORD*)(v9 + 52) = -1;
		v13 = (__int64)v7 - v9 - 4;
		while (1)
		{
			v14 = *(_DWORD*)(v13 + v12);
			if (qword_140C63840)
			{
				v15 = qword_140C63840(off_140A69678, v14, qword_140C63858);
				goto LABEL_33;
			}
			if (dword_140C647B8 || (int)sub_1401EF840() < 0)
				break;
			v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64450 + 24i64))(qword_140C64450, v14);
		LABEL_33:
			if (v15)
			{
				++v1;
				v12 += 4i64;
				*(_DWORD*)(v12 - 4) = *(_DWORD*)(v15 + 4);
				if (v1 < 3)
					continue;
			}
			break;
		}
		v16 = *(_DWORD*)v9;
		*(_DWORD*)(v9 + 40) = v1;
		v17 = v2[2];
		v18 = *(_QWORD*)(v17 + 8);
		LODWORD(v29) = v16;
		v19 = v17;
		v20 = 1;
		while (v18)
		{
			v19 = v18;
			v20 = v16 < *(_DWORD*)(v18 + 32);
			if (v16 >= *(_DWORD*)(v18 + 32))
				v18 = *(_QWORD*)(v18 + 24);
			else
				v18 = *(_QWORD*)(v18 + 16);
		}
		a1 = v19;
		if (v20)
		{
			if (v19 == *(_QWORD*)(v17 + 16))
			{
				if (v19 != v17 && v16 >= *(_DWORD*)(v19 + 32))
					goto LABEL_44;
			LABEL_48:
				v21 = sub_14018B280(48i64, 0);
				if (v21 != (int*)-32i64)
				{
					*((_QWORD*)v21 + 4) = v29;
					*((_QWORD*)v21 + 5) = v9;
				}
				*(_QWORD*)(v19 + 16) = v21;
				v23 = v2[2];
				if (v19 == v23)
				{
					*(_QWORD*)(v23 + 8) = v21;
					*(_QWORD*)(v2[2] + 24i64) = v21;
				}
				else if (v19 == *(_QWORD*)(v23 + 16))
				{
					*(_QWORD*)(v23 + 16) = v21;
				}
				goto LABEL_54;
			}
			if (*(_BYTE*)v19 || *(_QWORD*)(*(_QWORD*)(v19 + 8) + 8i64) != v19)
			{
				a1 = *(_QWORD*)(v19 + 16);
				if (a1)
				{
					for (i = *(_QWORD*)(a1 + 24); i; i = *(_QWORD*)(i + 24))
						a1 = i;
				}
				else
				{
					a1 = *(_QWORD*)(v19 + 8);
					if (v19 == *(_QWORD*)(a1 + 16))
					{
						do
						{
							v25 = a1;
							a1 = *(_QWORD*)(a1 + 8);
						} while (v25 == *(_QWORD*)(a1 + 16));
					}
				}
			}
			else
			{
				a1 = *(_QWORD*)(v19 + 24);
			}
		}
		if (*(_DWORD*)(a1 + 32) >= v16)
		{
			v1 = 0;
		}
		else
		{
			if (v19 == v17 || v16 < *(_DWORD*)(v19 + 32))
				goto LABEL_48;
		LABEL_44:
			v21 = sub_14018B280(48i64, 0);
			if (v21 != (int*)-32i64)
			{
				*((_QWORD*)v21 + 4) = v29;
				*((_QWORD*)v21 + 5) = v9;
			}
			*(_QWORD*)(v19 + 24) = v21;
			v22 = v2[2];
			if (v19 == *(_QWORD*)(v22 + 24))
				*(_QWORD*)(v22 + 24) = v21;
		LABEL_54:
			*((_QWORD*)v21 + 1) = v19;
			v1 = 0;
			*((_QWORD*)v21 + 2) = 0i64;
			*((_QWORD*)v21 + 3) = 0i64;
			sub_1400081C0((__int64)v21, (_QWORD*)(v2[2] + 8i64));
			++v2[3];
		}
	LABEL_70:
		++v5;
	} while (v5 < v4);
LABEL_71:
	if (qword_140C63850)
	{
		qword_140C63850(off_140A69640, qword_140C63858);
		goto LABEL_76;
	}
	if (dword_140C63878)
		goto LABEL_84;
	a1 = qword_140C63860;
	dword_140C63878 = 1;
	if (!qword_140C63860)
		goto LABEL_84;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C63860 + 8i64))(qword_140C63860);
	qword_140C63860 = 0i64;
LABEL_76:
	if (qword_140C63850)
	{
		qword_140C63850(off_140A69678, qword_140C63858);
	}
	else
	{
	LABEL_84:
		if (!dword_140C647B8)
		{
			a1 = qword_140C64450;
			dword_140C647B8 = 1;
			if (qword_140C64450)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C64450 + 8i64))(qword_140C64450);
				qword_140C64450 = 0i64;
			}
		}
	}
	v2[13] = 0i64;
	v2[14] = 0i64;
	v2[15] = 0i64;
	v2[16] = 0i64;
	v2[17] = 0i64;
	v2[18] = 0i64;
	v2[19] = 0i64;
	v2[20] = 0i64;
	v2[29] = sub_14034BDD0(a1, 145582);
	v2[30] = sub_14034BDD0(v26, 145583);
	v2[31] = sub_14034BDD0(v27, 145584);
	return 0i64;
}
// 14048CDFA: conditional instruction was optimized away because rdx.8==0
// 14048CF0F: conditional instruction was optimized away because rdx.8==0
// 14048CE1D: variable 'v29' is possibly undefined
// 14048D026: variable 'a1' is possibly undefined
// 14048D037: variable 'v26' is possibly undefined
// 14048D048: variable 'v27' is possibly undefined
// 140A69640: using guessed type wchar_t *off_140A69640[2];
// 140A69678: using guessed type wchar_t *off_140A69678[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63850: using guessed type __int64 (__fastcall *qword_140C63850)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63860: using guessed type __int64 qword_140C63860;
// 140C63878: using guessed type int dword_140C63878;
// 140C64450: using guessed type __int64 qword_140C64450;
// 140C647B8: using guessed type int dword_140C647B8;

