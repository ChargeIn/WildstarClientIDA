//----- (0000000140341B40) ----------------------------------------------------
void __fastcall sub_140341B40(__int64 a1, __int64 a2, unsigned int a3, float(__fastcall* a4)(_QWORD, _QWORD, _QWORD))
{
	float(__fastcall * v4)(_QWORD, _QWORD, _QWORD); // rbx
	__int64 v5; // rbp
	_QWORD* v6; // rdi
	__int64* v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rbx
	float v11; // xmm0_4
	__int64 v12; // rdi
	__int64 v13; // rbx
	int* v14; // rax
	__int64 v15; // rax
	bool v16; // zf
	float** i; // rdi
	float v18; // xmm0_4
	unsigned __int64 v19; // rbx
	unsigned __int64 v20; // rbp
	int v21; // edx
	int v22; // eax
	unsigned __int64 v23; // rdi
	int* v24; // rax
	int* v25; // rbx
	__int64 v26; // [rsp+20h] [rbp-48h]
	__int64 v27; // [rsp+28h] [rbp-40h]
	int* v28; // [rsp+30h] [rbp-38h]

	v4 = a4;
	v5 = a1;
	if (*(_DWORD*)(a1 + 56) != a3)
	{
		v6 = (_QWORD*)(a1 + 24);
		sub_1402877C0((__int64*)(a1 + 24), *(_QWORD*)(a1 + 16));
		v7 = (__int64*)(v5 + 40);
		sub_14004EED0((__int64*)(v5 + 40), 0i64);
		v9 = *(_QWORD*)(v5 + 16);
		*(_DWORD*)v5 = 2139095039;
		v27 = v9;
		if (v9)
		{
			v10 = 0i64;
			v26 = 0i64;
			do
			{
				v11 = a4(v10 + *v6, v10 + *(_QWORD*)(v5 + 8), a2);
				if (v11 < *(float*)v5)
					*(float*)v5 = v11;
				v12 = v10 + *v6;
				v13 = *(_QWORD*)(v5 + 48);
				v14 = sub_14018DB00(*v7, v13 + 1, 8i64);
				v28 = v14;
				*(_QWORD*)&v14[2 * v13] = v12;
				if ((int*)*v7 != v14)
				{
					sub_1407DB590(v14, (int*)*v7, 8i64 * *(_QWORD*)(v5 + 48));
					v8 = *v7;
					if (*v7)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
					*v7 = (__int64)v28;
				}
				v15 = v13 + 1;
				v6 = (_QWORD*)(v5 + 24);
				v10 = v26 + 32;
				v16 = v27-- == 1;
				*(_QWORD*)(v5 + 48) = v15;
				v26 += 32i64;
			} while (!v16);
			v4 = a4;
		}
		for (i = *(float***)(v5 + 80); i; v4 = a4)
		{
			sub_140341B40(*i, a2, a3, v4);
			v18 = **i;
			if (v18 < *(float*)v5)
				*(float*)v5 = v18;
			v19 = 0i64;
			v20 = *((_QWORD*)*i + 6);
			if (v20)
			{
				do
					sub_140033260(v7, (_QWORD*)(*((_QWORD*)*i + 5) + 8 * v19++));
				while (v19 < v20);
			}
			i = (float**)i[3];
			v5 = a1;
		}
		sub_1403438A0(v8, (__m128**) * v7, *(_QWORD*)(v5 + 48));
		v21 = dword_140C42D90;
		v22 = dword_140C42D90;
		if (*(_DWORD*)qword_140C63750 < dword_140C42D90)
			v22 = *(_DWORD*)qword_140C63750;
		if ((unsigned __int64)*((unsigned int*)&off_140C42D80 + v22 + 8) < *(_QWORD*)(v5 + 48))
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C42D90)
				v21 = *(_DWORD*)qword_140C63750;
			v23 = *((unsigned int*)&off_140C42D80 + v21 + 8);
			if (v7[1] <= v23)
			{
				v24 = sub_14018DB00(*v7, (unsigned int)v23, 8i64);
				v25 = v24;
				if ((int*)*v7 != v24)
				{
					sub_1407DB590(v24, (int*)*v7, 8 * v7[1]);
					if (*v7)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v7 - 16) + 8i64))(*v7 - 16);
					*v7 = (__int64)v25;
				}
			}
			v7[1] = v23;
		}
		*(_DWORD*)(v5 + 56) = a3;
	}
}
// 140341CF8: variable 'v8' is possibly undefined
// 140C42D80: using guessed type __int64 (__fastcall **off_140C42D80)();
// 140C42D90: using guessed type int dword_140C42D90;
// 140C63750: using guessed type __int64 qword_140C63750;

