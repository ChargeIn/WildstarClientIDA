//----- (0000000140654400) ----------------------------------------------------
__int64 __fastcall sub_140654400(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	unsigned __int16* v8; // rsi
	int* v9; // rax
	unsigned __int64* v10; // rbx
	int* v11; // rbp
	int* v12; // r14
	_QWORD* v13; // rcx
	unsigned __int64* v14; // rax
	unsigned __int64 v15; // r8
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	__int64 v17; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		goto LABEL_17;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	v4 = v3;
	if (!v3)
		goto LABEL_17;
	v5 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v3 + 5632));
	if (!v5
		&& (*(_QWORD*)(qword_140C65898 + 120) != v4
			|| (v6 = sub_14039DF50(qword_140C65898)) == 0
			|| (v5 = sub_1404695E0(v6)) == 0))
	{
		sub_140058710(a1, (unsigned __int64*)&unk_1409D143E, 0i64);
		return 1i64;
	}
	v8 = *(unsigned __int16**)(v5 + 408);
	v9 = sub_14018B280(8i64, 0);
	v10 = (unsigned __int64*)v9;
	v11 = v9;
	v12 = v9 + 2;
	if (v9)
		*(_BYTE*)v9 = 0;
	if (v8)
	{
		v13 = sub_14018F0E0(&v16, v8);
		v14 = v10;
		v10 = (unsigned __int64*)v13[1];
		v13[1] = v14;
		v13[2] = v11;
		v13[3] = v12;
		if (v17)
			sub_14018B900(v17, 0);
	}
	if (v10)
	{
		v15 = -1i64;
		do
			++v15;
		while (*((_BYTE*)v10 + v15));
		sub_140058710(a1, v10, v15);
		sub_14018B900((__int64)v10, 0);
		return 1i64;
	}
	else
	{
	LABEL_17:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

