//----- (00000001400DEF30) ----------------------------------------------------
__int64 __fastcall sub_1400DEF30(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // r12
	_DWORD* v4; // rax
	int* v5; // rdi
	unsigned int v6; // ebp
	int v7; // r15d
	__int64 v8; // rax
	int* v9; // rsi
	char* v11; // r14
	unsigned __int64 v12; // r13
	int* v13; // r14
	__int64 v14; // rax
	__int64 v15; // rcx

	result = sub_1400D66A0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v5 = (int*)&unk_1409D02BE;
		else
			v5 = (int*)sub_140056BB0(a1, 2u, 0i64);
		v6 = 0;
		v7 = -1;
		v8 = -1i64;
		v9 = 0i64;
		while (*((_BYTE*)v5 + ++v8) != 0)
			;
		v11 = (char*)v5 + v8;
		v12 = v8;
		if (v8 != -2)
			v9 = sub_14018B280(v8 + 1, 0);
		sub_1407DB590(v9, v5, v12);
		v13 = (int*)((char*)v9 + v11 - (char*)v5);
		if (v13)
			*(_BYTE*)v13 = 0;
		if (v13 != v9)
		{
			v14 = sub_140151290(*(_QWORD*)(v3 + 528), v9);
			if (v14)
				v7 = *(_DWORD*)(v14 + 48);
			v15 = a1[2];
			v6 = 1;
			*(_DWORD*)(v15 + 8) = 3;
			*(double*)v15 = (double)(v7 + 1);
			a1[2] += 16i64;
		}
		if (v9)
			sub_14018B900((__int64)v9, 0);
		return v6;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

