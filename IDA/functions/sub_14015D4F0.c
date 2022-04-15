//----- (000000014015D4F0) ----------------------------------------------------
__int64 __fastcall sub_14015D4F0(
	__int64* a1,
	int a2,
	void* a3,
	unsigned int* a4,
	__m128i* a5,
	__int64 a6,
	unsigned int a7)
{
	__int64 v7; // r15
	unsigned int* v8; // rbp
	int* v11; // rax
	__int64 v12; // rbp
	__int64 v13; // rdi
	__int64 v14; // r14
	int* v15; // rax
	int* v16; // rsi
	int* v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rsi
	_QWORD* v20; // rax
	__int64 v21; // rcx
	void* v22; // rdx
	__int64* v23; // rcx
	__int64 v24; // rdx
	int* v25; // rdi
	__int64 result; // rax

	v7 = a2;
	v8 = a4;
	if (a2 >= *((_DWORD*)a1 + 6))
	{
		do
		{
			v11 = sub_14018B280(200i64, 0);
			if (v11)
				v12 = sub_14015CCD0((__int64)v11, *a1, &unk_1409DC4F4, stru_1409DC554);
			else
				v12 = 0i64;
			v13 = a1[3];
			v14 = v13 + 1;
			v15 = sub_14018DB00(a1[2], v13 + 1, 8i64);
			v16 = v15;
			*(_QWORD*)&v15[2 * v13] = v12;
			v17 = (int*)a1[2];
			if (v17 != v15)
			{
				sub_1407DB590(v15, v17, 8 * a1[3]);
				v18 = a1[2];
				if (v18)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
				a1[2] = (__int64)v16;
			}
			a1[3] = v14;
		} while ((int)v7 >= (int)v14);
		v8 = a4;
	}
	v19 = 8 * v7;
	v20 = *(_QWORD**)(8 * v7 + a1[2]);
	v21 = v20[24];
	if (v21)
	{
		v22 = a3;
		if (!a3)
			v22 = &unk_1409DC304;
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)v21 + 56i64))(v21, v22, -1i64);
	}
	else
	{
		(*(void(__fastcall**)(__int64, _QWORD, void*, __int64, _QWORD*))(*(_QWORD*)qword_140C65680 + 40i64))(
			qword_140C65680,
			*(_QWORD*)(*(_QWORD*)(*v20 + 696i64) + 96i64),
			a3,
			-1i64,
			v20 + 24);
	}
	v23 = *(__int64**)(v19 + a1[2]);
	v24 = *(_QWORD*)(*v23 + 32);
	if (v24)
		sub_140109710(v23 + 14, v24 + 240, a5, 0);
	*(_QWORD*)(*(_QWORD*)(v19 + a1[2]) + 168i64) = a6;
	v25 = *(int**)(v19 + a1[2]);
	sub_1400579E0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v25 + 32i64) + 400i64), v24, v25[44]);
	result = a7;
	v25[44] = a7;
	if (v8)
		return sub_14015CB70(*(_QWORD*)(v19 + a1[2]), v8);
	return result;
}
// 14015D69E: variable 'v24' is possibly undefined
// 1409DC554: using guessed type __m128i stru_1409DC554[29];
// 140C65680: using guessed type __int64 qword_140C65680;

