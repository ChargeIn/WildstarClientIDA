//----- (00000001402CEAA0) ----------------------------------------------------
void __fastcall sub_1402CEAA0(__int64 a1, char* a2, unsigned __int64 a3, _OWORD* a4)
{
	__int64 v4; // rbp
	unsigned __int64 v5; // rbx
	char* v9; // rsi
	__int128 v10; // xmm6
	unsigned __int64 v11; // rbp
	__int128 v12; // xmm7
	__int128 v13; // xmm8
	__int128 v14; // xmm9
	unsigned __int64 v15; // rbx
	char* v16; // rbp
	__int64 v17; // rcx
	_OWORD* v18; // rax
	__int128 v19; // xmm0
	_OWORD* v20; // rcx
	_OWORD* v21; // rax
	unsigned __int64 v22; // rcx
	_OWORD* v23; // rcx
	__int64* v24; // rax
	unsigned __int64 v25; // rbp
	__int64 v26; // r15
	int* v27; // rbp
	char* v28; // rax
	char* v29; // rax
	__int64 v30; // rcx
	char* v31; // rbx
	unsigned __int64 v32; // [rsp+20h] [rbp-68h] BYREF
	unsigned __int64 v33; // [rsp+A0h] [rbp+18h] BYREF

	if (a3)
	{
		v33 = a3;
		v4 = *(_QWORD*)(a1 + 16);
		v5 = a3;
		if ((*(_QWORD*)(a1 + 24) - v4) >> 6 < a3)
		{
			v24 = (__int64*)&v33;
			v25 = (v4 - *(_QWORD*)(a1 + 8)) >> 6;
			v32 = v25;
			if (v25 >= a3)
				v24 = (__int64*)&v32;
			v26 = sub_14018A3E0((v25 + *v24) << 6) & 0xFFFFFFFFFFFFFFC0ui64;
			v27 = sub_14018B280(v26, 0);
			v28 = sub_1402CF200(*(_OWORD**)(a1 + 8), a2, (char*)v27);
			do
			{
				if (v28)
				{
					*(_OWORD*)v28 = *a4;
					*((_OWORD*)v28 + 1) = a4[1];
					*((_OWORD*)v28 + 2) = a4[2];
					*((_OWORD*)v28 + 3) = a4[3];
				}
				v28 += 64;
				--v5;
			} while (v5);
			v29 = sub_1402CF200(a2, *(_OWORD**)(a1 + 16), v28);
			v30 = *(_QWORD*)(a1 + 8);
			v31 = v29;
			if (v30)
				sub_14018B900(v30, 0);
			*(_QWORD*)(a1 + 8) = v27;
			*(_QWORD*)(a1 + 24) = (char*)v27 + v26;
			*(_QWORD*)(a1 + 16) = v31;
		}
		else
		{
			v9 = *(char**)(a1 + 16);
			v10 = *a4;
			v11 = (v4 - (__int64)a2) >> 6;
			v12 = a4[1];
			v13 = a4[2];
			v14 = a4[3];
			if (v11 <= a3)
			{
				v21 = *(_OWORD**)(a1 + 16);
				v22 = a3 - v11;
				if (a3 != v11)
				{
					do
					{
						if (v21)
						{
							*v21 = v10;
							v21[1] = v12;
							v21[2] = v13;
							v21[3] = v14;
						}
						v21 += 4;
						--v22;
					} while (v22);
				}
				*(_QWORD*)(a1 + 16) += (a3 - v11) << 6;
				sub_1402CF200(a2, v9, *(char**)(a1 + 16));
				*(_QWORD*)(a1 + 16) += v11 << 6;
				if (a2 != v9)
				{
					v23 = a2 + 32;
					do
					{
						*(v23 - 2) = v10;
						*(v23 - 1) = v12;
						*v23 = v13;
						v23[1] = v14;
						v23 += 4;
					} while (v23 - 2 != (_OWORD*)v9);
				}
			}
			else
			{
				v15 = a3 << 6;
				v16 = &v9[-64 * a3];
				sub_1402CF200(v16, v9, v9);
				*(_QWORD*)(a1 + 16) += v15;
				v17 = (v16 - a2) >> 6;
				if (v17 > 0)
				{
					v18 = v16 + 32;
					do
					{
						v19 = *(v18 - 6);
						v18 -= 4;
						--v17;
						*(_OWORD*)((char*)v18 + v15 - 32) = v19;
						*(_OWORD*)((char*)v18 + v15 - 16) = *(v18 - 1);
						*(_OWORD*)((char*)v18 + v15) = *v18;
						*(_OWORD*)((char*)v18 + v15 + 16) = v18[1];
					} while (v17 > 0);
				}
				if (a2 != &a2[v15])
				{
					v20 = a2 + 32;
					do
					{
						*(v20 - 2) = v10;
						*(v20 - 1) = v12;
						*v20 = v13;
						v20[1] = v14;
						v20 += 4;
					} while (v20 - 2 != (_OWORD*)&a2[v15]);
				}
			}
		}
	}
}
// 1402CECC1: conditional instruction was optimized away because rbx.8!=0

