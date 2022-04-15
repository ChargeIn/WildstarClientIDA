//----- (00000001408EFE10) ----------------------------------------------------
void __fastcall sub_1408EFE10(int* a1, __int64 a2, int* a3, int a4, int a5)
{
	__int64 v8; // rbx
	__int64 v9; // r15
	unsigned int v10; // eax
	__int64 v11; // rsi
	unsigned int v12; // edx
	int v13; // ecx
	__int64 v14; // r8
	int v15; // eax
	int v16; // ecx
	__int64 v17; // r10
	int v18; // r9d
	__int64 v19; // r8
	unsigned int v20; // eax
	__int64 v21; // r11
	int* v22; // r8
	__int64 v23; // rax
	__int64 v24; // r9
	__int64 v25; // rax
	int v26; // r9d
	int v27; // ecx
	int v28; // r8d
	int v29; // r9d
	int v30; // r11d
	int v31; // r10d
	__int64 v32; // rdx
	int* v33; // rdx
	int v34; // eax
	int v35; // r8d
	int v36; // eax
	__int64 v37; // rax
	int v38; // ecx
	int v40[18]; // [rsp+20h] [rbp-48h] BYREF

	if (a4 > 0)
	{
		v8 = 0i64;
		v9 = a4;
		do
		{
			v10 = sub_1408EFB20((__int64)a1, a3);
			v11 = *a1;
			v12 = v10;
			if (a1[8] == 1)
			{
				v13 = a1[13];
				v14 = 0i64;
				do
				{
					++v14;
					v15 = v12 & ((1 << v13) - 1);
					v12 >>= v13;
					v40[v14 - 1] = v15;
				} while (v14 < v11);
			}
			else
			{
				v16 = a1[14];
				v17 = *((_QWORD*)a1 + 8);
				v18 = 0;
				v19 = 0i64;
				v20 = (1 << v16) - 1;
				if (a1[13] > 8)
				{
					v24 = v20;
					do
					{
						v25 = v12;
						++v19;
						v12 >>= v16;
						v40[v19 - 1] = *(unsigned __int16*)(v17 + 2 * (v24 & v25));
					} while (v19 < v11);
				}
				else
				{
					v21 = v20;
					v22 = v40;
					do
					{
						v23 = v12;
						++v18;
						v12 >>= v16;
						*v22++ = *(unsigned __int8*)((v21 & v23) + v17);
					} while (v18 < (int)v11);
				}
			}
			v26 = a1[9];
			v27 = a5 - a1[10];
			v28 = a5 - a1[12];
			if (v27 <= 0)
				v29 = v26 << -(char)v27;
			else
				v29 = v26 >> v27;
			v30 = a1[11];
			v31 = 0;
			v32 = 0i64;
			if (v28 <= 0)
			{
				v35 = a1[12] - a5;
				do
				{
					v36 = v40[v32++];
					v40[v32 - 1] = v29 + ((v30 * v36) << v35);
				} while (v32 < v11);
			}
			else
			{
				v33 = v40;
				do
				{
					++v31;
					v34 = *v33++ * v30;
					*(v33 - 1) = v29 + (v34 >> v28);
				} while (v31 < (int)v11);
			}
			v37 = 0i64;
			do
			{
				v38 = v40[v37++];
				++v8;
				*(_DWORD*)(a2 + 4 * v8 - 4) += v38;
			} while (v37 < v11);
		} while (v8 < v9);
	}
}
// 1408EFE10: using guessed type int var_48[18];

