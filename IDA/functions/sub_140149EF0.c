//----- (0000000140149EF0) ----------------------------------------------------
__int64 __fastcall sub_140149EF0(_QWORD* a1)
{
	float* v2; // rbx
	float* v3; // rax
	unsigned __int64 v4; // rbp
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned __int64 v7; // rbx
	char* v8; // rsi
	__int64 v9; // rcx
	char v11[288]; // [rsp+20h] [rbp-138h] BYREF

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (float*)sub_140056AB0(a1, 2u);
	v4 = sub_1401B2BA0(v2, v3, (__int64)v11);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v5 = a1[2];
	v6 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	a1[2] += 16i64;
	v7 = 0i64;
	if (v4)
	{
		v8 = v11;
		do
		{
			v9 = a1[2];
			*(_DWORD*)(v9 + 8) = 3;
			*(double*)v9 = (double)((int)v7 + 1);
			a1[2] += 16i64;
			sub_1401491E0(a1, v8);
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			++v7;
			v8 += 32;
		} while (v7 < v4);
	}
	return 1i64;
}

