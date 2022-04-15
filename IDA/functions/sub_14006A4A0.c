//----- (000000014006A4A0) ----------------------------------------------------
__int64 __fastcall sub_14006A4A0(unsigned int* a1, int* a2, __int64 a3)
{
	__int64 v3; // rbp
	_QWORD* v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rbx
	__int64 result; // rax
	__m128i v10; // xmm0
	__int64 v11; // rcx
	__int64 v12; // rcx
	char v13; // r8
	__int64 v14; // rax

	v3 = *((_QWORD*)a1 + 4);
	v6 = sub_14005C560(v3, *((_QWORD*)a1 + 1), a2);
	v7 = *(_QWORD*)a1;
	v8 = *(int*)(*(_QWORD*)a1 + 76i64);
	if (*((_DWORD*)v6 + 2) == 3)
		return (unsigned int)(int)*(double*)v6;
	v10 = _mm_cvtsi32_si128(a1[16]);
	*((_DWORD*)v6 + 2) = 3;
	*v6 = *(_OWORD*)&_mm_cvtepi32_pd(v10);
	if ((signed int)(a1[16] + 1) > *(_DWORD*)(v7 + 76))
		*(_QWORD*)(v7 + 16) = sub_140064690(
			v3,
			*(_QWORD*)(v7 + 16),
			(int*)(v7 + 76),
			0x10ui64,
			0x3FFFF,
			aConstantTableO_0);
	if ((int)v8 < *(_DWORD*)(v7 + 76))
	{
		v11 = 16 * v8;
		do
		{
			LODWORD(v8) = v8 + 1;
			v11 += 16i64;
			*(_DWORD*)(v11 + *(_QWORD*)(v7 + 16) - 8) = 0;
		} while ((int)v8 < *(_DWORD*)(v7 + 76));
	}
	v12 = *(_QWORD*)(v7 + 16) + 16i64 * (int)a1[16];
	*(_QWORD*)v12 = *(_QWORD*)a3;
	*(_DWORD*)(v12 + 8) = *(_DWORD*)(a3 + 8);
	if (*(int*)(a3 + 8) >= 4 && (*(_BYTE*)(*(_QWORD*)a3 + 9i64) & 3) != 0)
	{
		v13 = *(_BYTE*)(v7 + 9);
		if ((v13 & 4) != 0)
		{
			v14 = *(_QWORD*)(v3 + 32);
			if (*(_BYTE*)(v14 + 33) == 1)
				sub_14005C960(*(_QWORD*)(v3 + 32), *(_QWORD*)a3);
			else
				*(_BYTE*)(v7 + 9) = v13 & 0xF8 | *(_BYTE*)(v14 + 32) & 3;
		}
	}
	result = a1[16];
	a1[16] = result + 1;
	return result;
}

