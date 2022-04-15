//----- (000000014015B820) ----------------------------------------------------
__int64 __fastcall sub_14015B820(_QWORD* a1)
{
	unsigned int v2; // edx
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	int v5; // edi
	__int64 v6; // rsi
	char* v7; // rax
	_DWORD* v8; // rcx
	int v9; // eax
	int* v10; // rbx
	__int64 v11; // rax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	int* v14; // [rsp+28h] [rbp-20h]

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	v5 = 1;
	v6 = sub_14015B0A0((__int64)a1, 1);
	if (v6)
	{
		v7 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v13, v7);
		v8 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
			v8 = (_DWORD*)(a1[3] + 32i64);
		v9 = v8[2];
		if (!v9 || v9 == 1 && !*v8)
			v5 = 0;
		v10 = v14;
		v11 = sub_14015AD50(v6, v14);
		if (v11)
			*(_BYTE*)(v11 + 10) = v5 != 0;
		if (v10)
			sub_14018B900((__int64)v10, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

