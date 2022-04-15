//----- (00000001407C0770) ----------------------------------------------------
__int64 __fastcall sub_1407C0770(_QWORD** a1, __int64 a2, unsigned int* a3)
{
	__int64 result; // rax
	__int64 v7; // rbx
	__int64 i; // rbp

	sub_1407C06C0(a1, a2, *((__int16**)a3 + 1), 2i64 * *a3, (__int64)(a3 + 2));
	result = sub_1407C05C0(a1, a2, *((__m128i**)a3 + 4), 24i64 * a3[6], (__int64)(a3 + 8));
	v7 = 0i64;
	for (i = result; (unsigned int)v7 < a3[6]; v7 = (unsigned int)(v7 + 1))
		result = sub_1407C06C0(
			a1,
			i,
			*(__int16**)(*((_QWORD*)a3 + 4) + 8i64 + 24 * v7),
			2i64 * *(unsigned int*)(*((_QWORD*)a3 + 4) + 24 * v7),
			*((_QWORD*)a3 + 4) + 8i64 + 24 * v7);
	return result;
}

