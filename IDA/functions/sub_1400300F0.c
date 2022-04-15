//----- (00000001400300F0) ----------------------------------------------------
__int64 __fastcall sub_1400300F0(__int64 a1, int** a2)
{
	unsigned int v2; // r14d
	int* v4; // rax
	unsigned __int8* v5; // rcx
	unsigned __int8* v6; // rsi
	unsigned __int64 v7; // rbp
	__int64 v8; // rdi
	__int64 v9; // rbx
	unsigned __int64 v10; // r15
	int* v11; // rax
	int* v12; // r12
	__int64 v13; // rax
	__int64 i; // rax
	__int64 j; // rax
	unsigned __int64 v16; // rbx
	unsigned __int64 v17; // r12
	unsigned __int64 v18; // r14
	int* v19; // rax
	int* v20; // rdi
	int v21; // eax
	int v22; // eax
	unsigned __int8* v23; // rbx
	unsigned __int8* v25; // [rsp+20h] [rbp-58h] BYREF
	unsigned __int64 v26; // [rsp+28h] [rbp-50h]

	v2 = 0;
	v26 = 0i64;
	v4 = sub_14018DBC0(
		0i64,
		8i64 * *(_QWORD*)(a1 + 4736)
		+ 2 * (3 * ((__int64)(*(_QWORD*)(a1 + 4832) - *(_QWORD*)(a1 + 4824)) >> 3) + 14),
		1i64);
	v5 = 0i64;
	if (v4)
		v5 = (unsigned __int8*)v4;
	v25 = v5;
	sub_140033620((__int64)&v25, 0x1Cui64);
	v6 = v25;
	v7 = v26;
	*(_QWORD*)v25 = 0i64;
	*((_QWORD*)v6 + 1) = 0i64;
	*((_QWORD*)v6 + 2) = 0i64;
	*((_DWORD*)v6 + 6) = 0;
	*((_DWORD*)v6 + 1) = 2;
	*(_DWORD*)v6 = 61453;
	*((_DWORD*)v6 + 3) = *(_DWORD*)(a1 + 4856);
	*((_DWORD*)v6 + 2) = *(_DWORD*)(a1 + 4852);
	*((_DWORD*)v6 + 4) = *(_DWORD*)(a1 + 4860);
	*(_QWORD*)(v6 + 20) = 0i64;
	v8 = *(_QWORD*)(a1 + 4728);
	v9 = *(_QWORD*)(v8 + 16);
	if (v9 != v8)
	{
		do
		{
			v10 = v7;
			if (v7 <= v7 + 8)
			{
				v11 = sub_14018DB00((__int64)v6, v7 + 8, 1i64);
				v12 = v11;
				if (v6 != (unsigned __int8*)v11)
				{
					sub_1407DB590(v11, (int*)v6, v7);
					(*(void(__fastcall**)(unsigned __int8*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 16);
					v6 = (unsigned __int8*)v12;
				}
			}
			v7 += 8i64;
			*(_QWORD*)&v6[v10] = 0i64;
			*(_DWORD*)&v6[v10] = *(_DWORD*)(v9 + 32);
			*(_DWORD*)&v6[v10 + 4] = *(_DWORD*)(v9 + 36);
			++* ((_DWORD*)v6 + 5);
			v13 = *(_QWORD*)(v9 + 24);
			if (v13)
			{
				v9 = *(_QWORD*)(v9 + 24);
				for (i = *(_QWORD*)(v13 + 16); i; i = *(_QWORD*)(i + 16))
					v9 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = j;
				if (*(_QWORD*)(v9 + 24) != j)
					v9 = j;
			}
		} while (v9 != v8);
		v2 = 0;
	}
	v16 = 0i64;
	v17 = (__int64)(*(_QWORD*)(a1 + 4832) - *(_QWORD*)(a1 + 4824)) >> 3;
	if (v17)
	{
		do
		{
			if (*(float*)(*(_QWORD*)(a1 + 4824) + 8 * v16 + 4) != 0.0)
			{
				v18 = v7;
				if (v7 <= v7 + 6)
				{
					v19 = sub_14018DB00((__int64)v6, v7 + 6, 1i64);
					v20 = v19;
					if (v6 != (unsigned __int8*)v19)
					{
						sub_1407DB590(v19, (int*)v6, v7);
						if (v6)
							(*(void(__fastcall**)(unsigned __int8*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 16);
						v6 = (unsigned __int8*)v20;
					}
				}
				v7 += 6i64;
				*(_DWORD*)&v6[v18] = 0;
				*(_WORD*)&v6[v18 + 4] = 0;
				*(_DWORD*)&v6[v18] = *(_DWORD*)(*(_QWORD*)(a1 + 4824) + 8 * v16);
				v21 = (int)(float)(*(float*)(*(_QWORD*)(a1 + 4824) + 8 * v16 + 4) * 32767.0);
				if ((_WORD)v21 == 0x8000)
					LOWORD(v21) = -32767;
				*(_WORD*)&v6[v18 + 4] = v21;
				++* ((_DWORD*)v6 + 6);
			}
			++v16;
		} while (v16 < v17);
		v2 = 0;
	}
	v26 = 0i64;
	v25 = 0i64;
	v22 = sub_14002D9D0((__int64)&v25, (__int64)v6, v7);
	v23 = v25;
	if (v22 >= 0)
		sub_14002DCF0(v25, v26, a2);
	else
		v2 = -2147467259;
	if (v23)
		(*(void(__fastcall**)(unsigned __int8*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 16);
	if (v6)
		(*(void(__fastcall**)(unsigned __int8*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 16);
	return v2;
}

