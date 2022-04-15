//----- (00000001408E75E0) ----------------------------------------------------
int* __fastcall sub_1408E75E0(
	__int64 a1,
	int* a2,
	unsigned int a3,
	__m128* a4,
	__m128* a5,
	int a6,
	unsigned int a7,
	unsigned int a8)
{
	int v8; // ebx
	__int64 v9; // rdi
	unsigned int v12; // ecx
	__m128* v13; // rsi
	__int64 v14; // r12
	unsigned int v15; // eax
	__int64 v16; // rdi
	__int64 v17; // rbx
	int v18; // edi
	unsigned int v19; // edx
	__int64 v20; // rdi
	int v21; // ebx
	int* v22; // rbp

	v8 = *(_DWORD*)(a1 + 84);
	v9 = a3;
	sub_1407DB590((int*)a4, a2, 4 * a3);
	sub_1407E4830(&a4->m128_i32[v9], 0i64, (unsigned int)(4 * (v8 - v9)));
	sub_1408E8C80(*(int***)(a1 + 8), a4, (__int64)a5);
	v12 = *(_DWORD*)(a1 + 108);
	v13 = *(__m128**)(a1 + 8i64 * a8 + 40);
	v14 = *(_QWORD*)(a1 + 136);
	v15 = a7;
	v16 = 0i64;
	if (v12)
	{
		do
		{
			v17 = *(unsigned __int16*)(v14 + 2 * v16);
			sub_1408E7920(
				(_BYTE*)a1,
				*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64 * a7)
				+ 8 * *(unsigned __int16*)(a1 + 116) * (((int)v16 + *(_DWORD*)(a1 + 64)) % v12),
				a5,
				v13,
				*(unsigned __int16*)(v14 + 2 * v16));
			v12 = *(_DWORD*)(a1 + 108);
			v16 = (unsigned int)(v16 + 1);
			v13 = (__m128*)((char*)v13 + 8 * v17);
		} while ((unsigned int)v16 < v12);
		v15 = a7;
	}
	v18 = *(unsigned __int16*)(a1 + 116);
	v19 = 8 * v18 * (*(_DWORD*)(a1 + 64) % *(_DWORD*)(a1 + 108));
	v20 = (unsigned int)(8 * v18);
	v21 = 8 * (*(_DWORD*)(a1 + 84) >> 1) + 8;
	v22 = (int*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64 * v15) + v19);
	sub_1407DB590((int*)a5, v22, (unsigned int)v20);
	sub_1407E4830((int*)((char*)a5 + v20), 0i64, (unsigned int)(v21 - v20));
	sub_1408E8DC0(*(int***)(a1 + 16), a5->m128_f32, (__int64)a4);
	sub_1408E7850(
		a4,
		COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(1.0 / (float)*(int*)(a1 + 84))),
		*(_DWORD*)(a1 + 84));
	sub_1407DB590(a2, &a4->m128_i32[*(unsigned int*)(a1 + 80)], (unsigned int)(4 * *(_DWORD*)(a1 + 80)));
	return sub_1407E4830(v22, 0i64, (unsigned int)v20);
}
// 140B79ED0: using guessed type int dword_140B79ED0;

