//----- (00000001400D7D90) ----------------------------------------------------
__int64 __fastcall sub_1400D7D90(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // rdx
	__int64 v8; // rcx
	double v9; // xmm0_8
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	result = sub_1400D66A0(a1, 1u);
	v7 = result;
	if (result)
	{
		v8 = *(_QWORD*)(v1 + 400);
		v9 = (double)*(int*)(result + 264);
		v10 = *(_QWORD*)(v8 + 16);
		*(double*)v10 = v9;
		*(_DWORD*)(v10 + 8) = 3;
		*(_QWORD*)(v8 + 16) += 16i64;
		v11 = *(_QWORD*)(v1 + 400);
		v12 = *(_QWORD*)(v11 + 16);
		*(double*)v12 = (double)*(int*)(v7 + 268);
		*(_DWORD*)(v12 + 8) = 3;
		*(_QWORD*)(v11 + 16) += 16i64;
		return 2i64;
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

