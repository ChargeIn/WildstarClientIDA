//----- (00000001408BEE90) ----------------------------------------------------
__int64 __fastcall sub_1408BEE90(__int64 a1)
{
	unsigned __int64 v1; // rax
	__int64 v3; // rcx
	void* v4; // rsp
	__int64 v5; // rdi
	void* v6; // rsp
	int v7; // r13d
	__int128 v8; // rax
	__int64 v9; // r14
	float v10; // xmm6_4
	int v11; // r12d
	void(__fastcall * *v12)(__int64, _QWORD); // rax
	__int64 v13; // rbx
	int v14; // ecx
	float v15; // xmm0_4
	__int64 i; // rbx
	unsigned int v17; // edx
	float v18; // xmm2_4
	int v19; // ebx
	__int128 v21; // [rsp+30h] [rbp+0h] BYREF
	__int128 v22; // [rsp+40h] [rbp+10h]
	int v23; // [rsp+90h] [rbp+60h] BYREF
	int v24; // [rsp+94h] [rbp+64h]

	v1 = 8i64 * *(unsigned int*)(a1 + 8);
	v3 = v1 + 15;
	if (v1 + 15 <= v1)
		v3 = 0xFFFFFFFFFFFFFF0i64;
	*(_QWORD*)&v8 = v3 & 0xFFFFFFFFFFFFFFF0ui64;
	v4 = alloca(v3 & 0xFFFFFFFFFFFFFFF0ui64);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = alloca(v3 & 0xFFFFFFFFFFFFFFF0ui64);
	v7 = 0;
	*((_QWORD*)&v8 + 1) = 0i64;
	v9 = 0i64;
	while (v5)
	{
		v10 = *(float*)(v5 + 60);
		v11 = *(_DWORD*)(v5 + 100);
		if (*(_BYTE*)(v5 + 104))
		{
			*(_QWORD*)&v8 = *(_QWORD*)(v5 + 8);
			v10 = *(float*)(v5 + 96);
			v21 = v8;
			if (v5 == *(_QWORD*)(a1 + 16))
				*(_QWORD*)(a1 + 16) = v8;
			else
				*(_QWORD*)(*((_QWORD*)&v8 + 1) + 8i64) = v8;
			if (v5 == *(_QWORD*)(a1 + 24))
				*(_QWORD*)(a1 + 24) = *((_QWORD*)&v8 + 1);
			--* (_DWORD*)(a1 + 8);
			v12 = *(void(__fastcall***)(__int64, _QWORD))v5;
			v13 = *(_QWORD*)a1;
			v22 = v21;
			(*v12)(v5, 0i64);
			*(_QWORD*)&v8 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 16i64))(v13, v5);
			*((_QWORD*)&v8 + 1) = *((_QWORD*)&v22 + 1);
			v5 = v22;
		}
		else
		{
			*((_QWORD*)&v8 + 1) = v5;
			v5 = *(_QWORD*)(v5 + 8);
		}
		if (v11)
		{
			v14 = 0;
			*(_QWORD*)&v8 = 0i64;
			if (v9 > 0)
			{
				while (*((_DWORD*)&v21 + 2 * v8) != v11)
				{
					*(_QWORD*)&v8 = v8 + 1;
					++v14;
					if ((__int64)v8 >= v9)
						goto LABEL_20;
				}
				v15 = *((float*)&v21 + 2 * v8 + 1);
				if (v15 <= v10)
					v15 = v10;
				*((float*)&v21 + 2 * v8 + 1) = v15;
			}
		LABEL_20:
			if (v14 == v7)
			{
				*((float*)&v21 + 2 * v9 + 1) = v10;
				*((_DWORD*)&v21 + 2 * v9) = v11;
				++v7;
				++v9;
			}
		}
	}
	for (i = 0i64; i < v7; ++i)
	{
		v17 = *((_DWORD*)&v21 + 2 * i);
		v18 = *((float*)&v21 + 2 * i + 1);
		v23 = 0;
		v24 = 4;
		*(_QWORD*)&v8 = sub_1408380A0(qword_140C61BB0, v17, v18, 0i64, &v23, 1);
	}
	if (!*(_QWORD*)(a1 + 16))
	{
		v19 = dword_140C10F28;
		sub_1408284C0((__int64)sub_1408BF070);
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_DWORD*)(a1 + 8) = 0;
		qword_140C62B00 = 0i64;
		*(_QWORD*)&v8 = sub_140881720(v19, a1);
	}
	return v8;
}
// 1408BF070: using guessed type __int64 __fastcall sub_1408BF070();
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;
// 140C62B00: using guessed type __int64 qword_140C62B00;

