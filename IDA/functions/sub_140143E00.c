//----- (0000000140143E00) ----------------------------------------------------
__int64 __fastcall sub_140143E00(__int64 a1)
{
	unsigned int* v2; // rdi
	unsigned int* v3; // rax
	int v4; // edx
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // r8
	__int64 v7; // rcx
	__m128* v8; // rax
	__m128 v9; // xmm0
	unsigned __int64 v10; // rax
	__m128* v11; // rax
	BOOL v12; // eax
	_DWORD* v13; // rcx
	bool v14; // zf
	__int64 result; // rax

	v2 = (unsigned int*)sub_140143AE0(a1, 1);
	v3 = (unsigned int*)sub_140143AE0(a1, 2);
	v4 = 0;
	v12 = 1;
	if (v2 != v3)
	{
		if (!v2
			|| !v3
			|| ((v5 = *v3, v6 = *(_QWORD*)(qword_140C63678 + 48), v7 = *(_QWORD*)(qword_140C63678 + 40), v5 >= v6)
				? (v8 = *(__m128**)(qword_140C63678 + 40))
				: (v8 = (__m128*)(v7 + 32 * v5)),
				(v9 = *v8, v10 = *v2, v10 >= v6)
				? (v11 = *(__m128**)(qword_140C63678 + 40))
				: (v11 = (__m128*)(v7 + 32 * v10)),
				_mm_movemask_ps(_mm_cmpneq_ps(v9, *v11))))
		{
			v12 = 0;
		}
	}
	v13 = *(_DWORD**)(a1 + 16);
	v14 = !v12;
	result = 1i64;
	LOBYTE(v4) = !v14;
	v13[2] = 1;
	*v13 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C63678: using guessed type __int64 qword_140C63678;

