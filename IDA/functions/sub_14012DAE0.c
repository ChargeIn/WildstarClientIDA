//----- (000000014012DAE0) ----------------------------------------------------
__int64 __fastcall sub_14012DAE0(_QWORD* a1)
{
	int* v2; // rax
	void(__fastcall * **v3)(_QWORD); // rax
	void(__fastcall * **v4)(_QWORD); // rsi
	unsigned __int64 v5; // rdx
	_DWORD* v6; // r8
	_DWORD* v7; // rcx
	unsigned __int64 v8; // rcx
	_QWORD* v9; // r8
	__int64 v10; // rax
	_QWORD* v11; // rbp
	__int64 v12; // rax
	_QWORD* v13; // rdi
	__int64 v15; // [rsp+20h] [rbp-38h] BYREF
	__int64 v16; // [rsp+28h] [rbp-30h]

	for (; a1[2] < (unsigned __int64)(a1[3] + 16i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] = a1[3] + 16i64;
	v2 = sub_14018B280(872i64, 0);
	if (v2)
	{
		v3 = (void(__fastcall***)(_QWORD))sub_140129AF0((__int64)v2, 0i64);
		v4 = v3;
		if (v3)
		{
			(**v3)(v3);
			*(_QWORD*)sub_140059170(a1, 8ui64) = v4;
			((void(__fastcall*)(void(__fastcall***)(_QWORD), _QWORD*))(*v4)[3])(v4, a1);
			goto LABEL_8;
		}
	}
	else
	{
		v4 = 0i64;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
LABEL_8:
	v5 = a1[2];
	v6 = dword_140A12138;
	v7 = dword_140A12138;
	if (a1[3] < v5)
		v7 = (_DWORD*)a1[3];
	*(_QWORD*)v5 = *(_QWORD*)v7;
	*(_DWORD*)(v5 + 8) = v7[2];
	a1[2] += 16i64;
	v8 = a1[2];
	if (a1[3] < v8)
		v6 = (_DWORD*)a1[3];
	v9 = v6 + 4;
	if ((unsigned __int64)v9 < v8)
	{
		do
		{
			v10 = *v9;
			v9 += 2;
			*(v9 - 4) = v10;
			*((_DWORD*)v9 - 6) = *((_DWORD*)v9 - 2);
		} while ((unsigned __int64)v9 < a1[2]);
	}
	a1[2] -= 16i64;
	v11 = *(_QWORD**)(((__int64(__fastcall*)(_QWORD))(*v4)[2])(v4) + 8);
	v12 = (*(__int64(__fastcall**)(_QWORD*))(v11[16] + 16i64))(v11 + 16);
	v13 = (_QWORD*)v12;
	if (v12)
	{
		*(_QWORD*)(v12 + 8) = v11;
		*(_QWORD*)(v12 + 16) = 0i64;
		*(_DWORD*)(v12 + 24) = 0;
		*(_QWORD*)(v12 + 32) = 0i64;
		*(_QWORD*)(v12 + 40) = 0i64;
		*(_QWORD*)(v12 + 48) = 0i64;
		*(_QWORD*)(v12 + 56) = 0i64;
		*(_QWORD*)(v12 + 64) = 0i64;
		*(_QWORD*)(v12 + 72) = 0i64;
		*(_QWORD*)(v12 + 80) = 0i64;
		*(_DWORD*)(v12 + 88) = 0;
		*(_QWORD*)v12 = off_140B5EBA0;
		*(_QWORD*)(v12 + 96) = 0i64;
	}
	else
	{
		v13 = 0i64;
	}
	v13[10] = v11 + 16;
	sub_1401A4C50((__int64)(v13 + 3), (int*)L"Document");
	sub_1401A5A70(v11, v13);
	sub_14012CF90(&v15, (__int64)a1, v13);
	if (v16)
		sub_14018B900(v16, 0);
	(*v4)[1](v4);
	a1[2] -= 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A20A20: using guessed type wchar_t aDocument[9];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();

