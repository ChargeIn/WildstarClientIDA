//----- (00000001401E1A80) ----------------------------------------------------
__int64 __fastcall sub_1401E1A80(__int64 a1)
{
	__int64 result; // rax
	unsigned __int64 v3; // r15
	__int64* v4; // r14
	unsigned int* i; // rsi
	_DWORD* v6; // rbx
	bool v7; // zf
	__int64 v8; // rdx
	int v9; // eax
	__int64* v10; // r9
	__int64 v11; // r10
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rdx
	int v15; // ebx
	double v16; // xmm0_8
	double v17; // xmm0_8
	float v18; // xmm7_4
	unsigned int v19; // edi
	int v20; // eax
	int v21; // eax
	_DWORD* v22; // [rsp+20h] [rbp-558h] BYREF
	unsigned __int64 v23; // [rsp+30h] [rbp-548h] BYREF
	int v24; // [rsp+38h] [rbp-540h]
	int v25; // [rsp+3Ch] [rbp-53Ch]
	__int64 v26; // [rsp+40h] [rbp-538h]
	__int64 v27[145]; // [rsp+48h] [rbp-530h]

	if (!*(_DWORD*)(a1 + 2868))
		return 0i64;
	if ((*(_BYTE*)(a1 + 3168) & 4) != 0 || (result = sub_1401E1E50(a1), (int)result >= 0))
	{
		v3 = 0i64;
		v4 = (__int64*)(a1 + 2872);
		for (i = (unsigned int*)(a1 + 2904); ; ++i)
		{
			v6 = 0i64;
			v7 = (*(_BYTE*)(a1 + 3168) & 4) == 0;
			v22 = 0i64;
			if (v7)
			{
				if (v4[12])
					goto LABEL_27;
				v8 = 0i64;
				v23 = __PAIR64__(*(_DWORD*)(a1 + 36), v3);
				v9 = *(_DWORD*)(a1 + 40);
				v26 = 0i64;
				v24 = v9;
				v10 = (__int64*)(a1 + 328);
				v25 = *(_DWORD*)(a1 + 32);
				v11 = 72i64;
				do
				{
					v12 = *v10;
					if (*v10)
					{
						v13 = *(_QWORD*)(v12 + 24);
						if ((*(unsigned int*)((_BYTE*)i + (_QWORD)dword_140C637A0 - a1 - 2904) & *(_DWORD*)(v13 + 144)) != 0)
						{
							v14 = 2 * v8;
							v27[v14] = v13;
							v27[v14 + 1] = *(_QWORD*)(v12 + 32);
							v8 = ++v26;
						}
					}
					++v10;
					--v11;
				} while (v11);
				v15 = sub_1401DD190(*(_QWORD*)(a1 + 16), (__int64*)&v23, (__int64*)&v22);
				if (v15 < 0)
				{
					if (v22)
						(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v22 + 8i64))(v22);
					return (unsigned int)v15;
				}
				v6 = v22;
			}
			else
			{
				if (!*v4)
					goto LABEL_27;
				(**(void(__fastcall***)(__int64)) * v4)(*v4);
				v6 = (_DWORD*)*v4;
			}
			if (v6)
			{
				*(_QWORD*)&v16 = i[40];
				*(float*)&v16 = (float)(*(float*)&v16 * 1024.0) * *(float*)(a1 + 3120);
				v17 = sub_1408FE170(v16);
				v18 = fmaxf((float)(*(float*)&v17 * 1.442695) + *(float*)(a1 + 3116), (float)*(int*)(a1 + 3112));
				if (dword_140C636A8 - *(_DWORD*)(a1 + 3128) >= 0
					|| v6 != (_DWORD*)*v4
					|| (v19 = *i, v18 >= (float)((float)(int)*i + 2.0))
					|| v18 < (float)(int)*i)
				{
					if (v18 > 0.0)
					{
						if (v18 < 6.0)
							v19 = (int)v18;
						else
							v19 = 6;
					}
					else
					{
						v19 = 0;
					}
				}
				goto LABEL_28;
			}
		LABEL_27:
			v19 = 7;
		LABEL_28:
			if (v19 != *i || v6 != (_DWORD*)*v4)
			{
				*(_DWORD*)(a1 + 3128) = dword_140C636A8 + 5000;
				if (v6)
				{
					if (v19 < 7)
					{
						++v6[v19 + 306];
						if (v19 < v6[304])
							sub_1401E5690((__int64)v6, v19);
					}
				}
				if (*v4)
					sub_1401E5490(*v4, *i);
				*i = v19;
				if (v6)
					v20 = v6[303] - 1;
				else
					v20 = 0;
				i[4] = v20;
				if (v6 != (_DWORD*)*v4)
				{
					if (v6)
						(**(void(__fastcall***)(_DWORD*))v6)(v6);
					if (*v4)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)*v4 + 8i64))(*v4);
					*v4 = (__int64)v6;
					if (v6)
						v21 = v6[303] - 1;
					else
						v21 = 0;
					i[4] = v21;
				}
			}
			if (v6)
				(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 8i64))(v6);
			++v3;
			++v4;
			if (v3 >= 4)
			{
				*(_DWORD*)(a1 + 3168) |= 4u;
				return 0i64;
			}
		}
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C637A0: using guessed type _DWORD dword_140C637A0[4];

