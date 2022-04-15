#include "../winhttp.h"

//----- (000000014002B690) ----------------------------------------------------
__int64 __fastcall sub_14002B690(_QWORD* a1)
{
	char* v2; // rax
	_DWORD* v3; // rbp
	_DWORD* v4; // rax
	_DWORD* v5; // rax
	__int64 v6; // r14
	__int64 v7; // rax
	_DWORD* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // rdi
	char* v11; // rdi
	unsigned __int16* v12; // rsi
	__int64 v13; // rcx
	_DWORD* v14; // rdi
	unsigned __int64 v15; // r8
	int v16; // eax
	int v17; // eax
	int v18; // edx
	int v19; // r8d
	unsigned __int64 v20; // r8
	_DWORD* v21; // rdx
	char* v22; // rdi
	__int64 v23; // rax
	char* v24; // rsi
	_BYTE* v25; // rax
	__int64 v26; // rax
	_DWORD* v27; // rdx
	unsigned __int64 v28; // r8
	__int64 v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rcx
	unsigned __int64 v32; // r8
	int v33; // eax
	int v34; // eax
	int v35; // eax
	int v36; // edx
	__int64 v38; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v39; // [rsp+28h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v38, v2);
	v3 = dword_140A12138;
	v4 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(_DWORD*)(a1[3] + 40i64) != 5)
		sub_140056570(a1, 3u, "not table");
	v5 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(_DWORD*)(a1[3] + 56i64) != 5)
		sub_140056570(a1, 4u, "not table");
	v6 = (__int64)v39;
	if ((unsigned int)sub_14018E2C0((__int64)v39, L"SliderBarChanged"))
	{
		if ((unsigned int)sub_14018E2C0(v6, L"ButtonSignal"))
			goto LABEL_60;
		sub_140058710((__int64)a1, (unsigned __int64*)"Button", 6ui64);
		v20 = a1[2];
		v21 = dword_140A12138;
		if (a1[3] + 32i64 < v20)
			v21 = (_DWORD*)(a1[3] + 32i64);
		sub_14005E8E0((__int64)a1, (__int64)v21, (int*)(v20 - 16), v20 - 16);
		v22 = 0i64;
		v23 = a1[2] - 16i64;
		if (*(_DWORD*)(v23 + 8) != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
			{
				v24 = 0i64;
				goto LABEL_37;
			}
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v23 = a1[2] - 16i64;
		}
		v24 = (char*)(*(_QWORD*)v23 + 32i64);
	LABEL_37:
		a1[2] -= 16i64;
		v25 = sub_1400E8DD0(1u);
		if ((unsigned int)sub_14018E260(v24, (__int64)v25))
			goto LABEL_60;
		v26 = a1[2];
		v27 = dword_140A12138;
		*(_QWORD*)v26 = 0x3FF0000000000000i64;
		*(_DWORD*)(v26 + 8) = 3;
		a1[2] += 16i64;
		v28 = a1[2];
		if (a1[3] + 48i64 < v28)
			v27 = (_DWORD*)(a1[3] + 48i64);
		sub_14005E8E0((__int64)a1, (__int64)v27, (int*)(v28 - 16), v28 - 16);
		v29 = a1[2] - 16i64;
		if (*(_DWORD*)(v29 + 8) != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
				goto LABEL_46;
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v29 = a1[2] - 16i64;
		}
		v22 = (char*)(*(_QWORD*)v29 + 32i64);
	LABEL_46:
		sub_14018F2D0(&v38, v22);
		v12 = v39;
		a1[2] -= 16i64;
		v14 = (_DWORD*)sub_14019D200(v30, v12);
		if (!v14)
			goto LABEL_58;
		v31 = a1[2];
		*(_QWORD*)v31 = 0x4000000000000000i64;
		*(_DWORD*)(v31 + 8) = 3;
		a1[2] += 16i64;
		v32 = a1[2];
		if (a1[3] + 48i64 < v32)
			v3 = (_DWORD*)(a1[3] + 48i64);
		sub_14005E8E0((__int64)a1, (__int64)v3, (int*)(v32 - 16), v32 - 16);
		v33 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v14 + 8i64))(v14) - 1;
		if (v33)
		{
			if (v33 != 2)
				goto LABEL_57;
			v34 = sub_1400584E0((__int64)a1, -1);
			v18 = v14[4];
			v19 = v34;
			if (*(_DWORD*)qword_140C63750 < v18)
				v18 = *(_DWORD*)qword_140C63750;
			goto LABEL_26;
		}
	LABEL_54:
		v35 = sub_1400584E0((__int64)a1, -1);
		v36 = v14[4];
		if (*(_DWORD*)qword_140C63750 < v36)
			v36 = *(_DWORD*)qword_140C63750;
		sub_14002C690((__int64)v14, v36, v35);
		goto LABEL_57;
	}
	v7 = a1[2];
	v8 = dword_140A12138;
	*(_QWORD*)v7 = 0x3FF0000000000000i64;
	*(_DWORD*)(v7 + 8) = 3;
	a1[2] += 16i64;
	v9 = a1[2];
	if (a1[3] + 48i64 < v9)
		v8 = (_DWORD*)(a1[3] + 48i64);
	sub_14005E8E0((__int64)a1, (__int64)v8, (int*)(v9 - 16), v9 - 16);
	v10 = a1[2] - 16i64;
	if (*(_DWORD*)(v10 + 8) != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
		{
			v11 = 0i64;
			goto LABEL_19;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v10 = a1[2] - 16i64;
	}
	v11 = (char*)(*(_QWORD*)v10 + 32i64);
LABEL_19:
	sub_14018F2D0(&v38, v11);
	v12 = v39;
	a1[2] -= 16i64;
	v14 = (_DWORD*)sub_14019D200(v13, v12);
	if (!v14)
		goto LABEL_58;
	sub_140058710((__int64)a1, (unsigned __int64*)"Value", 5ui64);
	v15 = a1[2];
	if (a1[3] + 32i64 < v15)
		v3 = (_DWORD*)(a1[3] + 32i64);
	sub_14005E8E0((__int64)a1, (__int64)v3, (int*)(v15 - 16), v15 - 16);
	v16 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v14 + 8i64))(v14) - 1;
	if (!v16)
		goto LABEL_54;
	if (v16 == 2)
	{
		v17 = sub_1400584E0((__int64)a1, -1);
		v18 = v14[4];
		v19 = v17;
		if (*(_DWORD*)qword_140C63750 < v18)
			v18 = *(_DWORD*)qword_140C63750;
	LABEL_26:
		sub_14001A770((__int64)v14, v18, v19);
	}
LABEL_57:
	a1[2] -= 16i64;
LABEL_58:
	if (v12)
		sub_14018B900((__int64)v12, 0);
LABEL_60:
	if (v6)
		sub_14018B900(v6, 0);
	return 0i64;
}
// 14002B7E5: variable 'v13' is possibly undefined
// 14002B9CB: variable 'v30' is possibly undefined
// 1409EE920: using guessed type wchar_t aSliderbarchang_0[17];
// 1409EE958: using guessed type wchar_t aButtonsignal_0[13];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63750: using guessed type __int64 qword_140C63750;

