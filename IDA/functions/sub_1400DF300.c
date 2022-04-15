//----- (00000001400DF300) ----------------------------------------------------
__int64 __fastcall sub_1400DF300(_QWORD* a1)
{
	__int64 v2; // r15
	_DWORD* v3; // rax
	int* v4; // rbx
	int* v5; // rdi
	__int64 v6; // rax
	char* v8; // rsi
	unsigned __int64 v9; // r14
	int* v10; // rsi
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rsi
	__int64 v14; // rax

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = (int*)&unk_1409D028F;
		else
			v4 = (int*)sub_140056BB0(a1, 2u, 0i64);
		v5 = 0i64;
		v6 = -1i64;
		while (*((_BYTE*)v4 + ++v6) != 0)
			;
		v8 = (char*)v4 + v6;
		v9 = v6;
		if (v6 != -2)
			v5 = sub_14018B280(v6 + 1, 0);
		sub_1407DB590(v5, v4, v9);
		v10 = (int*)((char*)v5 + v8 - (char*)v4);
		if (v10)
			*(_BYTE*)v10 = 0;
		if (v10 != v5)
		{
			v11 = sub_140131630(a1, 3u);
			v12 = *(_QWORD*)(v2 + 528);
			v13 = v11;
			if (sub_140151290(v12, v5))
			{
				v14 = sub_140151100(v12, v5);
				sub_140150B90(v14, v13);
			}
		}
		if (v5)
			sub_14018B900((__int64)v5, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

