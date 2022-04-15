//----- (00000001400F10D0) ----------------------------------------------------
void __fastcall sub_1400F10D0(__int64 a1, __int64 a2, int a3)
{
	_DWORD* v5; // rax
	_QWORD* v6; // r10
	__int64 v7; // rbp
	_DWORD* v8; // rax
	__int64 v9; // rbx
	char* v10; // rdx
	int* v11; // rdi
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	int* v13; // [rsp+28h] [rbp-20h]

	v5 = sub_1400580E0(a2, a3);
	if (v5 == dword_140A12138 || (unsigned int)(v5[2] - 3) > 1)
	{
		*v6 += 8i64;
		sub_14001C480(*(_QWORD*)(*v6 - 8i64), (int*)&word_140B7B704, (int*)&word_140B7B704);
		return;
	}
	*v6 += 8i64;
	v7 = *(_QWORD*)(*v6 - 8i64);
	v8 = sub_1400580E0(a2, a3);
	v9 = 0i64;
	if (v8[2] == 4)
		goto LABEL_9;
	if ((unsigned int)sub_14005E620(a2, (__int64)v8))
	{
		if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
			sub_14005E2C0(a2);
		v8 = sub_1400580E0(a2, a3);
	LABEL_9:
		v10 = (char*)(*(_QWORD*)v8 + 32i64);
		goto LABEL_10;
	}
	v10 = 0i64;
LABEL_10:
	sub_14018F2D0(&v12, v10);
	v11 = v13;
	if (*(_WORD*)v13)
	{
		do
			++v9;
		while (*((_WORD*)v13 + v9));
	}
	sub_14001C480(v7, v13, (int*)((char*)v13 + 2 * v9));
	sub_14018B900((__int64)v11, 0);
}
// 1400F110D: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7B704: using guessed type __int16 word_140B7B704;

