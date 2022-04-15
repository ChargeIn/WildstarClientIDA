//----- (0000000140496140) ----------------------------------------------------
int* __fastcall sub_140496140(_QWORD* a1, int* a2)
{
	_DWORD* v2; // r8
	__int64 v5; // rax
	_DWORD* v6; // r8
	_DWORD* v7; // r9
	unsigned __int64 v8; // rdx
	__int64 j; // rdx
	int v10; // eax
	int* result; // rax
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // r14
	int* v15; // rax
	int* v16; // r8
	int* v17; // rbp
	int* i; // rdx
	int* v19; // r8
	int* v20; // rbx
	int* v21; // rcx
	__int64 v22; // rcx
	int v23; // [rsp+20h] [rbp-28h]
	int v24; // [rsp+24h] [rbp-24h]
	int v25; // [rsp+28h] [rbp-20h]
	int v26; // [rsp+2Ch] [rbp-1Ch]
	int v27; // [rsp+30h] [rbp-18h]
	unsigned int v28; // [rsp+34h] [rbp-14h]

	v2 = (_DWORD*)a1[2];
	if (v2 == (_DWORD*)a1[3])
	{
		v12 = ((__int64)v2 - a1[1]) / 24;
		if (v12)
			v13 = 2 * v12;
		else
			v13 = 1i64;
		v14 = 6 * (sub_14018A3E0(24 * v13) / 0x18ui64);
		v15 = sub_14018B280(v14 * 4, 0);
		v16 = (int*)a1[1];
		v17 = v15;
		for (i = v15; v16 != a2; i += 6)
		{
			if (i)
			{
				*i = *v16;
				i[1] = v16[1];
				i[2] = v16[2];
				i[3] = v16[3];
				i[4] = v16[4];
				i[5] = v16[5];
			}
			v16 += 6;
		}
		v19 = (int*)a1[2];
		v20 = i + 6;
		if (a2 != v19)
		{
			v21 = a2;
			do
			{
				if (v20)
				{
					*v20 = *v21;
					v20[1] = v21[1];
					v20[2] = v21[2];
					v20[3] = v21[3];
					v20[4] = v21[4];
					v20[5] = v21[5];
				}
				v21 += 6;
				v20 += 6;
			} while (v21 != v19);
		}
		v22 = a1[1];
		if (v22)
			sub_14018B900(v22, 0);
		result = &v17[v14];
		a1[1] = v17;
		a1[2] = v20;
		a1[3] = &v17[v14];
	}
	else
	{
		if (v2)
		{
			*v2 = *(v2 - 6);
			v2[1] = *(v2 - 5);
			v2[2] = *(v2 - 4);
			v2[3] = *(v2 - 3);
			v2[4] = *(v2 - 2);
			v2[5] = *(v2 - 1);
		}
		a1[2] += 24i64;
		v5 = a1[2];
		v6 = (_DWORD*)(v5 - 48);
		v7 = (_DWORD*)(v5 - 24);
		v8 = (__int64)((unsigned __int128)((v5 - 48 - (__int64)a2) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 2;
		for (j = (v8 >> 63) + v8; j > 0; v7[5] = v6[5])
		{
			v10 = *(v6 - 6);
			v6 -= 6;
			v7 -= 6;
			*v7 = v10;
			--j;
			v7[1] = v6[1];
			v7[2] = v6[2];
			v7[3] = v6[3];
			v7[4] = v6[4];
		}
		*a2 = v23;
		a2[1] = v24;
		a2[2] = v25;
		a2[3] = v26;
		a2[4] = v27;
		result = (int*)v28;
		a2[5] = v28;
	}
	return result;
}
// 140496213: variable 'v23' is possibly undefined
// 140496219: variable 'v24' is possibly undefined
// 140496220: variable 'v25' is possibly undefined
// 140496227: variable 'v26' is possibly undefined
// 14049622E: variable 'v27' is possibly undefined
// 140496231: variable 'v28' is possibly undefined

