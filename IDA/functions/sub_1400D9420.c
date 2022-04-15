//----- (00000001400D9420) ----------------------------------------------------
__int64 __fastcall sub_1400D9420(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // r15
	int* v4; // rsi
	int* v5; // rdi
	__int64 v6; // rax
	char* v8; // r14
	unsigned __int64 v9; // rbp
	_BYTE* v10; // rax
	_QWORD* v11; // rax
	bool v12; // di
	_DWORD* v13; // rax
	_DWORD* v14; // rcx
	__int64 v15; // [rsp+20h] [rbp-38h] BYREF
	__int64 v16; // [rsp+28h] [rbp-30h]

	result = sub_1400D66A0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = 0i64;
		v5 = (int*)sub_140056BB0(a1, 2u, 0i64);
		v6 = -1i64;
		while (*((_BYTE*)v5 + ++v6) != 0)
			;
		v8 = (char*)v5 + v6;
		v9 = v6;
		if (v6 != -2)
			v4 = sub_14018B280(v6 + 1, 0);
		sub_1407DB590(v4, v5, v9);
		v10 = (char*)v4 + v8 - (char*)v5;
		if (v10)
			*v10 = 0;
		v11 = sub_14018F2D0(&v15, (char*)v4);
		v12 = (int)sub_1400CBD70(v3, (__int64)v11) < 0;
		if (v16)
			sub_14018B900(v16, 0);
		if (v12)
		{
			v13 = (_DWORD*)a1[2];
			*v13 = 0;
			v13[2] = 1;
		}
		else
		{
			v14 = (_DWORD*)a1[2];
			*v14 = 1;
			v14[2] = 1;
		}
		a1[2] += 16i64;
		if (v4)
			sub_14018B900((__int64)v4, 0);
		return 1i64;
	}
	return result;
}

