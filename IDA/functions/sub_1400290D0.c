//----- (00000001400290D0) ----------------------------------------------------
void __fastcall sub_1400290D0(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rax
	int* v4; // rsi
	unsigned __int64 i; // r9
	__int64 j; // rcx
	_QWORD* v7; // r8
	unsigned __int64 v8; // rdx

	v2 = sub_1401A40C0(*(_QWORD*)(a1 + 8) + 1i64);
	v3 = 8 * v2;
	if (!is_mul_ok(v2, 8ui64))
		v3 = -1i64;
	v4 = sub_14018B280(v3, 0);
	sub_1407E4830(v4, 0i64, 8 * v2);
	for (i = 0i64; i < *(_QWORD*)(a1 + 8); ++i)
	{
		for (j = *(_QWORD*)(a1 + 16); *(_QWORD*)(j + 8 * i); *(_QWORD*)&v4[2 * v8] = v7)
		{
			v7 = *(_QWORD**)(j + 8 * i);
			*(_QWORD*)(j + 8 * i) = v7[1];
			v8 = *v7 % v2;
			v7[1] = *(_QWORD*)&v4[2 * v8];
		}
	}
	sub_14018B900(*(_QWORD*)(a1 + 16), 0);
	*(_QWORD*)(a1 + 16) = v4;
	*(_QWORD*)(a1 + 8) = v2;
}

