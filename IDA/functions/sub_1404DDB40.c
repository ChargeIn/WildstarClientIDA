//----- (00000001404DDB40) ----------------------------------------------------
__int64 __fastcall sub_1404DDB40(__int64 a1, int* a2)
{
	__int64 v4; // rax
	int* v5; // rbp
	__int64 v6; // r14
	int* v7; // rax
	char v9[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v10; // [rsp+28h] [rbp-30h]
	int* v11; // [rsp+30h] [rbp-28h]
	__int64 v12; // [rsp+38h] [rbp-20h]

	sub_1400B6390((_QWORD*)a1);
	*(_DWORD*)(a1 + 88) = 1;
	*(_QWORD*)a1 = off_140B69170;
	v4 = 0i64;
	v5 = 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v12 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v4;
		while (*((_WORD*)a2 + v4));
	}
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v6 + 1), 0);
		v10 = v5;
		v11 = v5;
		v12 = (__int64)v5 + 2 * v6 + 2;
	}
	sub_1407DB590(v5, a2, 2 * v6);
	v7 = (int*)((char*)v5 + 2 * v6);
	v11 = v7;
	if (v7)
		*(_WORD*)v7 = 0;
	sub_1400B68F0(a1, (__int64)v9);
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return a1;
}
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 1404DDB40: using guessed type char var_38[8];

