//----- (00000001400DF1A0) ----------------------------------------------------
__int64 __fastcall sub_1400DF1A0(_QWORD* a1)
{
	__int64 v2; // r13
	_DWORD* v3; // rax
	int* v4; // rsi
	int v5; // r15d
	__int64 v6; // rax
	int* v7; // rdi
	char* v9; // r14
	unsigned __int64 v10; // rbp
	int* v11; // r14
	_DWORD* v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rax

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = (int*)&unk_1409D028E;
		else
			v4 = (int*)sub_140056BB0(a1, 2u, 0i64);
		v5 = 0;
		v6 = -1i64;
		v7 = 0i64;
		while (*((_BYTE*)v4 + ++v6) != 0)
			;
		v9 = (char*)v4 + v6;
		v10 = v6;
		if (v6 != -2)
			v7 = sub_14018B280(v6 + 1, 0);
		sub_1407DB590(v7, v4, v10);
		v11 = (int*)((char*)v7 + v9 - (char*)v4);
		if (v11)
			*(_BYTE*)v11 = 0;
		if (v11 != v7)
		{
			v12 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v12 < a1[2] && v12 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
				v5 = sub_140056D60(a1, 3u);
			v13 = *(_QWORD*)(v2 + 528);
			if (sub_140151290(v13, v7))
			{
				v14 = sub_140151100(v13, v7);
				sub_140150A60(v14, v5 - 1);
			}
		}
		if (v7)
			sub_14018B900((__int64)v7, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

