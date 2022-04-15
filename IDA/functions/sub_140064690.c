//----- (0000000140064690) ----------------------------------------------------
__int64 __fastcall sub_140064690(__int64 a1, __int64 a2, int* a3, unsigned __int64 a4, int a5, char* a6)
{
	int v6; // ebx
	int v8; // ecx
	__int64 v10; // rdi
	__int64 v11; // r14
	__int64 v12; // rbp
	__int64 result; // rax

	v6 = a5;
	v8 = *a3;
	if (*a3 < a5 / 2)
	{
		v6 = 2 * v8;
		if (2 * v8 < 4)
			v6 = 4;
	}
	else if (v8 >= a5)
	{
		sub_14005ABE0(a1, a6);
	}
	if (v6 + 1 > 0xFFFFFFFFFFFFFFFDui64 / a4)
		sub_14005ABE0(a1, aMemoryAllocati);
	v10 = a4 * v6;
	v11 = a4 * *a3;
	v12 = *(_QWORD*)(a1 + 32);
	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64))(v12 + 16))(
		*(_QWORD*)(v12 + 24),
		a2,
		v11,
		v10);
	if (!result && v10)
		sub_140061040(a1, 4);
	*(_QWORD*)(v12 + 120) += v10 - v11;
	*a3 = v6;
	return result;
}

