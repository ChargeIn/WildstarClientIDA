//----- (00000001401C4930) ----------------------------------------------------
__int64 __fastcall sub_1401C4930(__int64 a1, __int64 a2)
{
	int* v2; // r12
	int* v3; // r13
	__int64 v4; // r15
	__int64 v5; // r14
	unsigned __int128 v6; // kr10_16
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	int* v10; // rax
	int v11; // ebx
	__int64 v12; // rax
	bool v13; // cf
	__int64 v14; // rax
	int* v15; // rax
	int v16; // edi
	int* v17; // rbp
	_QWORD* v18; // rbx
	__int64 v19; // rax
	int* v20; // rax
	unsigned __int64 v21; // r8
	__int64 v22; // rdi
	__int64 v23; // rbx
	unsigned __int64 v24; // r14
	__int64 v25; // rax
	__int64 result; // rax
	int* v27; // [rsp+28h] [rbp-50h]
	__int64 v28; // [rsp+80h] [rbp+8h]
	__int64 v30; // [rsp+90h] [rbp+18h]

	v3 = (int*)*((_QWORD*)&xmmword_140C78590 + 1);
	v2 = (int*)xmmword_140C78590;
	v4 = *((_QWORD*)&xmmword_140C785A0 + 1);
	v27 = (int*)xmmword_140C785A0;
	v5 = qword_140C78560;
	v28 = qword_140C78560++;
	v6 = xmmword_140C78590;
	v30 = *((_QWORD*)&xmmword_140C785A0 + 1);
	v7 = 8 * qword_140C78560;
	if (!is_mul_ok(qword_140C78560, 8ui64))
		v7 = -1i64;
	*(_QWORD*)&xmmword_140C78590 = sub_14018B280(v7, 0);
	v8 = 56 * qword_140C78560;
	if (!is_mul_ok(qword_140C78560, 0x38ui64))
		v8 = -1i64;
	*((_QWORD*)&xmmword_140C78590 + 1) = sub_14018B280(v8, 0);
	v9 = 16 * qword_140C78560;
	if (!is_mul_ok(qword_140C78560, 0x10ui64))
		v9 = -1i64;
	v10 = sub_14018B280(v9, 0);
	v11 = qword_140C78560;
	*(_QWORD*)&xmmword_140C785A0 = v10;
	v12 = 40 * qword_140C78560;
	if (!is_mul_ok(qword_140C78560, 0x28ui64))
		v12 = -1i64;
	v13 = __CFADD__(v12, 8i64);
	v14 = v12 + 8;
	if (v13)
		v14 = -1i64;
	v15 = sub_14018B280(v14, 0);
	if (v15)
	{
		v16 = v11 - 1;
		*v15 = v11;
		v17 = v15 + 2;
		if (v11 - 1 >= 0)
		{
			v18 = v15 + 4;
			do
			{
				*(v18 - 1) = 0i64;
				*v18 = 13i64;
				v19 = 104i64;
				if (!is_mul_ok(0xDui64, 8ui64))
					v19 = -1i64;
				v20 = sub_14018B280(v19, 0);
				v21 = 8i64 * *v18;
				v18[1] = v20;
				sub_1407E4830(v20, 0i64, v21);
				--v16;
				v18[2] = sub_1400522D0;
				v18[3] = sub_1400522E0;
				v18 += 5;
			} while (v16 >= 0);
			v5 = v28;
			v4 = v30;
			v3 = (int*)(v6 >> 64);
			v2 = (int*)v6;
		}
	}
	else
	{
		v17 = 0i64;
	}
	v22 = 8 * v5;
	*((_QWORD*)&xmmword_140C785A0 + 1) = v17;
	sub_1407DB590((int*)xmmword_140C78590, v2, 8 * v5);
	v23 = 56 * v5;
	sub_1407DB590(*((int**)&xmmword_140C78590 + 1), v3, 56 * v5);
	v24 = 16 * v5;
	sub_1407DB590((int*)xmmword_140C785A0, v27, v24);
	sub_14018B900((__int64)v2, 0);
	sub_14018B900((__int64)v3, 0);
	sub_14018B900((__int64)v27, 0);
	if (v4)
		sub_1401C5500(v4);
	*(_QWORD*)(v22 + xmmword_140C78590) = a2;
	v25 = *((_QWORD*)&xmmword_140C78590 + 1);
	*(_QWORD*)(v23 + *((_QWORD*)&xmmword_140C78590 + 1)) = 0i64;
	*(_QWORD*)(v23 + v25 + 8) = 0i64;
	*(_QWORD*)(v23 + v25 + 16) = 0i64;
	*(_QWORD*)(v23 + v25 + 24) = 0i64;
	*(_QWORD*)(v23 + v25 + 32) = 0i64;
	*(_QWORD*)(v23 + v25 + 40) = 0i64;
	*(_QWORD*)(v23 + v25 + 48) = 0i64;
	result = xmmword_140C785A0;
	*(_QWORD*)(v24 + xmmword_140C785A0) = 0i64;
	*(_QWORD*)(v24 + result + 8) = 0i64;
	return result;
}
// 140C78560: using guessed type __int64 qword_140C78560;
// 140C78590: using guessed type __int128 xmmword_140C78590;
// 140C785A0: using guessed type __int128 xmmword_140C785A0;

