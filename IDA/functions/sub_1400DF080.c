//----- (00000001400DF080) ----------------------------------------------------
__int64 __fastcall sub_1400DF080(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // r13
	_DWORD* v4; // rax
	int* v5; // rbx
	unsigned int v6; // r14d
	__int64 v7; // rax
	int* v8; // rsi
	char* v10; // rdi
	unsigned __int64 v11; // r15
	int* v12; // rdi
	__int64 v13; // rcx
	__int64 v14; // rax

	result = sub_1400D66A0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v5 = (int*)&unk_1409D02BF;
		else
			v5 = (int*)sub_140056BB0(a1, 2u, 0i64);
		v6 = 0;
		v7 = -1i64;
		v8 = 0i64;
		while (*((_BYTE*)v5 + ++v7) != 0)
			;
		v10 = (char*)v5 + v7;
		v11 = v7;
		if (v7 != -2)
			v8 = sub_14018B280(v7 + 1, 0);
		sub_1407DB590(v8, v5, v11);
		v12 = (int*)((char*)v8 + v10 - (char*)v5);
		if (v12)
			*(_BYTE*)v12 = 0;
		if (v12 != v8)
		{
			v13 = *(_QWORD*)(v3 + 528);
			if (v13)
			{
				v14 = sub_140151420(v13, v8);
				v6 = sub_1400D62A0(a1, v14);
			}
		}
		if (v8)
			sub_14018B900((__int64)v8, 0);
		return v6;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

