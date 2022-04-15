//----- (00000001403D9760) ----------------------------------------------------
__int64 __fastcall sub_1403D9760(_QWORD* a1, int* a2, double a3, double a4)
{
	int* v7; // rax
	__m128* v8; // rdi
	__int64 v9; // rcx
	int v10; // ebx
	__int64 v11; // r8
	__int64 v12; // rax
	bool v13; // zf
	__int64 v14; // rdx
	__int64 v15; // rax
	unsigned int v16; // eax
	__int64 v17; // rbx
	__int64 v18; // [rsp+48h] [rbp+10h] BYREF

	if (sub_1403D90D0((__int64)a1, *a2))
		return 0i64;
	v7 = sub_14018B280(14256i64, 0);
	if (v7)
		v8 = (__m128*)sub_140454380((__int64)v7);
	else
		v8 = 0i64;
	v10 = sub_140456960(v8, (__int64)a2, a3, a4);
	if (v10 >= 0)
	{
		v11 = qword_140C65898;
		if (*(_DWORD*)(qword_140C65898 + 25728) == *a2)
		{
			v12 = a1[3218];
			if (v12)
				*(_DWORD*)(v12 + 3408) = 0;
			sub_1403968B0(v9, v8);
			v11 = qword_140C65898;
			*(_DWORD*)(qword_140C65898 + 25728) = 0;
			v13 = v8[223].m128_i32[1] == 1;
			v8[213].m128_i32[1] = 1;
			if (!v13 && !v8[213].m128_i32[0])
			{
				sub_14057A450(v9, (__int64)v8, a3);
				v11 = qword_140C65898;
			}
		}
		if (a1[3321])
		{
			v14 = a1[3320];
			v9 = v14;
			v15 = *(_QWORD*)(v14 + 8);
			while (v15)
			{
				if (*(_DWORD*)(v15 + 32) < (unsigned int)*a2)
				{
					v15 = *(_QWORD*)(v15 + 24);
				}
				else
				{
					v9 = v15;
					v15 = *(_QWORD*)(v15 + 16);
				}
			}
			if (v9 == v14 || (v16 = *(_DWORD*)(v9 + 32), v18 = v9, *a2 < v16))
				v18 = v14;
			v17 = v18;
			if (v18 != v14)
			{
				sub_1403DC1E0(v11, (int*)(v18 + 36));
				v18 = v17;
				sub_1403DF5E0((__int64)(a1 + 3319), &v18);
			}
		}
		sub_1404CA550(v9, (__int64)v8);
		return 0i64;
	}
	else
	{
		if (v8)
			(*(void(__fastcall**)(__m128*, __int64))v8->m128_u64[0])(v8, 1i64);
		return (unsigned int)v10;
	}
}
// 1403D9809: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

