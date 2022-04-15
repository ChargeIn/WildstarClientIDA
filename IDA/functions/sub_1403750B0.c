//----- (00000001403750B0) ----------------------------------------------------
__int64 __fastcall sub_1403750B0(__m128* a1, __int32 a2)
{
	__int64 result; // rax
	__int64 v4; // rbx
	unsigned __int64 v5; // rbp
	int** v6; // r14
	int* v7; // rax
	int* v8; // rcx

	a1[1].m128_i32[2] = a2;
	result = sub_140375160(a1);
	if ((int)result >= 0)
	{
		v4 = a1[1].m128_u64[0] + 2120;
		if (*(_QWORD*)v4 == *(_QWORD*)(a1[1].m128_u64[0] + 2128))
			sub_1400290D0(v4);
		v5 = (*(__int64(__fastcall**)(__int64*))(v4 + 24))(&a1[1].m128_i64[1]);
		v6 = (int**)(*(_QWORD*)(v4 + 16) + 8 * (v5 % *(_QWORD*)(v4 + 8)));
		v7 = sub_14018B280(32i64, 0);
		if (v7)
		{
			v8 = *v6;
			*(_QWORD*)v7 = v5;
			*((_QWORD*)v7 + 1) = v8;
			LODWORD(v8) = a1[1].m128_i32[2];
			*((_QWORD*)v7 + 3) = a1;
			v7[4] = (int)v8;
		}
		*v6 = v7;
		++* (_QWORD*)v4;
		return 0i64;
	}
	return result;
}

