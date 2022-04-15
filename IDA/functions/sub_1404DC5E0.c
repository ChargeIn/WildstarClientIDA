//----- (00000001404DC5E0) ----------------------------------------------------
__int64 __fastcall sub_1404DC5E0(unsigned int a1, __int64 a2, char a3)
{
	__int64 v4; // rax
	__int64 v5; // rdi
	int* v6; // rax
	__int64 v7; // rbx
	int* v8; // rax
	__int64 v10; // rax
	int* v11; // rax
	int* v12; // rdi
	__int64 v13; // r8
	unsigned int v14; // ecx
	__int64 v15; // rax
	__int64 v16; // rbx
	int* v17; // rax
	__int64 v18; // rbx
	int v19; // esi
	__int64 v20; // rax
	int* v21; // rax
	int* v22; // rax
	__int64 v23[2]; // [rsp+20h] [rbp-28h] BYREF
	int v24; // [rsp+30h] [rbp-18h]
	int v25; // [rsp+34h] [rbp-14h]

	v4 = sub_1401E8C20(a1);
	v5 = v4;
	if (!v4)
		goto LABEL_21;
	v6 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v4 + 8), 0i64);
	v7 = (__int64)v6;
	if (v6 && v6[119])
	{
		v8 = sub_14018B280(88i64, 0);
		if (v8)
			return sub_1404DC4F0((__int64)v8, v7, 1);
		return 0i64;
	}
	if (*(_DWORD*)(v5 + 28))
	{
		v10 = *(_QWORD*)(v5 + 32);
		v25 = *(_DWORD*)(v5 + 28);
		v23[1] = 15i64;
		v23[0] = v10;
		v24 = 0;
		v11 = sub_14018B280(88i64, 0);
		v12 = v11;
		if (!v11)
			return 0i64;
		sub_1400B6390(v11);
		*(_QWORD*)v12 = off_140B69300;
		sub_1404DD8F0((__int64)v12, (__int64)v23, v13, a3);
		return (__int64)v12;
	}
	v14 = *(_DWORD*)(v5 + 12);
	if (!v14 || (v15 = sub_1401FE020(v14), (v16 = v15) == 0) || !*(_DWORD*)(v15 + 20))
	{
		if (*(_DWORD*)(v5 + 80))
		{
			v19 = 0;
			v20 = sub_14044F9A0(qword_140C65908, *(_DWORD*)(v5 + 56));
			if (v20)
				v19 = *(_DWORD*)(*(_QWORD*)v20 + 16i64);
			v21 = sub_14018B280(96i64, 0);
			if (v21)
				return sub_1404DDAF0((__int64)v21, v19);
			return 0i64;
		}
	LABEL_21:
		v22 = sub_14018B280(88i64, 0);
		if (v22)
			return sub_1404DC4F0((__int64)v22, 0i64, 1);
		return 0i64;
	}
	v17 = sub_14018B280(96i64, 0);
	if (v17)
	{
		v18 = sub_1404DDAF0((__int64)v17, *(_DWORD*)(v16 + 20));
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v18 + 104i64))(v18, *(unsigned int*)(v5 + 16));
		return v18;
	}
	else
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(MEMORY[0] + 104i64))(0i64, *(unsigned int*)(v5 + 16));
		return 0i64;
	}
}
// 1404DC6B1: variable 'v13' is possibly undefined
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65908: using guessed type __int64 qword_140C65908;

