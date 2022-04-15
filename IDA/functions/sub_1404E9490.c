#include "../winhttp.h"

//----- (00000001404E9490) ----------------------------------------------------
__int64 __fastcall sub_1404E9490(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64* v3; // rax
	__int64* v4; // rcx
	int v5; // eax
	BOOL v6; // eax
	unsigned int v7; // ebp
	int v8; // edx
	int v9; // eax
	__int64 v10; // rax
	char* v11; // rbx
	int v12; // ebp
	__int64 v13; // rdi
	__int64 v14; // rax
	int v15; // r14d
	_QWORD* v16; // rax
	__int64 v17; // rdx
	unsigned __int16* v18; // r10
	__int64 v19; // rcx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	__int64 v26; // [rsp+20h] [rbp-38h] BYREF
	__int64 v27; // [rsp+28h] [rbp-30h]
	__int64 v28; // [rsp+68h] [rbp+10h] BYREF

	v1 = qword_140C63658;
	if (!qword_140C63658)
		sub_140056830(a1, (unsigned __int64*)"AlienFx not loaded.");
	v3 = (__int64*)a1[3];
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)v3 < a1[2])
		v4 = v3;
	v5 = *((_DWORD*)v4 + 2);
	if (v5 == 3)
		goto LABEL_9;
	if (v5 == 4)
	{
		v6 = sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v28);
		v1 = qword_140C63658;
		if (v6)
		{
			LODWORD(v27) = 3;
			v4 = &v26;
			v26 = v28;
		LABEL_9:
			v7 = (int)*(double*)v4;
			goto LABEL_10;
		}
	}
	v7 = 0;
LABEL_10:
	v8 = dword_140C3CB80;
	v9 = dword_140C3CB80;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v9 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v9 + 32) || !*(_QWORD*)(v1 + 32) || !*(_DWORD*)(v1 + 44))
		goto LABEL_26;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v8 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v8 + 32)
		|| !*(_QWORD*)(v1 + 104)
		|| (v10 = sub_14018DC50(0i64),
			*(_BYTE*)(v10 + 255) = 0,
			LOBYTE(v28) = 0,
			v11 = (char*)v10,
			(*(unsigned int(__fastcall**)(_QWORD, __int64, _QWORD, __int64*, __int64))(v1 + 104))(
				v7,
				v10,
				*(unsigned int*)(v10 - 8),
				&v28,
				v26)))
	{
	LABEL_26:
		sub_140056830(a1, (unsigned __int64*)"GetDeviceDescription failed to get device %d description", v7);
	}
	v12 = (unsigned __int8)v28;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v13 = a1[2];
	v14 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	a1[2] += 16i64;
	v15 = sub_1400578C0((__int64)a1);
	sub_14018F2D0(&v26, v11);
	v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
	v17 = a1[2];
	*(_QWORD*)v17 = *v16;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
	a1[2] += 16i64;
	sub_1400F0870((__int64)a1, v17, L"strDescription", v18);
	v19 = v27;
	a1[2] -= 16i64;
	if (v19)
		sub_14018B900(v19, 0);
	v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
	v21 = a1[2];
	*(_QWORD*)v21 = *v20;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v21, L"eType", v12);
	a1[2] -= 16i64;
	v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v24, v15);
	if (v11)
		(*(void(__fastcall**)(char*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 16);
	return 1i64;
}
// 1404E9645: variable 'v18' is possibly undefined
// 1404E96C1: variable 'v23' is possibly undefined
// 1404E96D3: variable 'v24' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0CC78: using guessed type wchar_t aEtype_2[6];
// 140B0CD80: using guessed type wchar_t aStrdescription_4[15];
// 140C3CB70: using guessed type __int64 (__fastcall *off_140C3CB70)();
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;

