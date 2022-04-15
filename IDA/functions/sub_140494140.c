//----- (0000000140494140) ----------------------------------------------------
void __fastcall sub_140494140(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rsi
	__int64 k; // rbx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // r15
	int* v14; // rax
	__int64 v15; // rdi
	int* v16; // r12
	__int64 i; // rbx
	__int64 v18; // r14
	__int64 v19; // rdi
	__int64 v20; // rbx
	__int64 v21; // rbp
	__int64 j; // rbx
	__int64 v23; // rcx
	char v24[8]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v25; // [rsp+28h] [rbp-30h]

	v3 = a1[2];
	if (v3 == a1[3])
	{
		v11 = (v3 - a1[1]) >> 5;
		v12 = 2 * v11;
		if (!v11)
			v12 = 1i64;
		v13 = sub_14018A3E0(32 * v12) & 0xFFFFFFFFFFFFFFE0ui64;
		v14 = sub_14018B280(v13, 0);
		v15 = a1[1];
		v16 = v14;
		for (i = (__int64)v14; v15 != a2; i += 32i64)
		{
			if (i)
				sub_14048B2A0(i, v15);
			v15 += 32i64;
		}
		if (i)
			sub_14048B2A0(i, a3);
		v18 = a1[2];
		v19 = i + 32;
		if (a2 != v18)
		{
			v20 = a2;
			do
			{
				if (v19)
					sub_14048B2A0(v19, v20);
				v20 += 32i64;
				v19 += 32i64;
			} while (v20 != v18);
		}
		v21 = a1[2];
		for (j = a1[1]; j != v21; j += 32i64)
		{
			sub_140008410(j);
			sub_14018B900(*(_QWORD*)(j + 8), 0);
		}
		v23 = a1[1];
		if (v23)
			sub_14018B900(v23, 0);
		a1[1] = v16;
		a1[3] = (char*)v16 + v13;
		a1[2] = v19;
	}
	else
	{
		if (v3)
			sub_14048B2A0(a1[2], v3 - 32);
		a1[2] += 32i64;
		sub_14048B2A0((__int64)v24, a3);
		v7 = a1[2];
		v8 = v7 - 64;
		v9 = v7 - 32;
		for (k = (v7 - 64 - a2) >> 5; k > 0; --k)
		{
			v8 -= 32i64;
			v9 -= 32i64;
			sub_1404956E0(v9, v8);
		}
		sub_1404956E0(a2, (__int64)v24);
		sub_140008410((__int64)v24);
		sub_14018B900(v25, 0);
	}
}
// 140494140: using guessed type char var_38[8];

