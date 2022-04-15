//----- (0000000140109F90) ----------------------------------------------------
void __fastcall sub_140109F90(__int64* a1, __int64* a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v7; // rcx
	bool v8; // zf
	__int64 v9; // rcx
	__int64 v10; // r12
	int* v11; // rax
	__int64 v12; // rdi
	int* v13; // r15
	__int64 i; // rbx
	__int64* v15; // r14
	__int64 v16; // rdi
	__int64 v17; // rbx
	__int64 v18; // rcx
	__int64 v19[11]; // [rsp+30h] [rbp-178h] BYREF
	unsigned int v20; // [rsp+88h] [rbp-120h]
	unsigned int v21; // [rsp+8Ch] [rbp-11Ch]

	v4 = a1[2];
	if (v4 == a1[3])
	{
		v7 = v4 - a1[1];
		v8 = v7 / 304 == 0;
		v9 = 2 * (v7 / 304);
		if (v8)
			v9 = 1i64;
		v10 = 76 * (sub_14018A3E0(304 * v9) / 0x130ui64);
		v11 = sub_14018B280(v10 * 4, 0);
		v12 = a1[1];
		v13 = v11;
		for (i = (__int64)v11; (__int64*)v12 != a2; i += 304i64)
		{
			if (i)
				sub_1400FEB20(i, v12);
			v12 += 304i64;
		}
		if (i)
			sub_1400FEB20(i, a3);
		v15 = (__int64*)a1[2];
		v16 = i + 304;
		if (a2 != v15)
		{
			v17 = (__int64)a2;
			do
			{
				if (v16)
					sub_1400FEB20(v16, v17);
				v17 += 304i64;
				v16 += 304i64;
			} while ((__int64*)v17 != v15);
		}
		sub_14010A3E0((unsigned int*)a1[1], (unsigned int*)a1[2]);
		v18 = a1[1];
		if (v18)
			sub_14018B900(v18, 0);
		a1[1] = (__int64)v13;
		a1[2] = v16;
		a1[3] = (__int64)&v13[v10];
	}
	else
	{
		if (v4)
			sub_1400FEB20(v4, v4 - 304);
		a1[2] += 304i64;
		sub_1400FEB20((__int64)v19, a3);
		sub_14010A760((__int64)a2, a1[2] - 608, (_QWORD*)(a1[2] - 304));
		sub_1400FEE50(a2, v19);
		if (v19[0])
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19[0] + 8i64))(v19[0]);
		sub_1401429A0(qword_140C63678, v21);
		sub_1401429A0(qword_140C63678, v20);
	}
}
// 140C63678: using guessed type __int64 qword_140C63678;

