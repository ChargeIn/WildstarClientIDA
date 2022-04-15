//----- (00000001402BEA10) ----------------------------------------------------
__int64 __fastcall sub_1402BEA10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int** a7, _DWORD* a8)
{
	_DWORD* v8; // r14
	__int64 v9; // r13
	unsigned int v10; // ebp
	unsigned int v11; // r12d
	__int64 v13; // rbx
	int* v14; // rcx
	unsigned int v15; // edx
	int* v16; // r15
	unsigned int v17; // ebp
	__int64 result; // rax
	int* v19; // rsi
	unsigned int v20; // r10d
	int* v21; // r11
	__int16 v22; // r8
	unsigned __int8 v23; // di
	int v24; // eax
	int v25; // edx
	int v26; // eax
	int v27; // r9d
	int v28; // eax
	int v29; // [rsp+20h] [rbp-568h]
	int* v30; // [rsp+28h] [rbp-560h]
	__int64 v33[5]; // [rsp+48h] [rbp-540h] BYREF
	char v34[384]; // [rsp+70h] [rbp-518h] BYREF
	__int64 v35[106]; // [rsp+1F0h] [rbp-398h] BYREF

	v8 = a8;
	v9 = a1;
	v10 = (unsigned int)(a6 + 7) >> 3;
	v11 = (unsigned int)(a5 + 7) >> 3;
	v33[1] = a4;
	*a7 = sub_14018B280(4i64 * ((v11 * v10) << 6), 8u);
	LODWORD(v13) = 0;
	v33[0] = a3;
	*a8 = 32 * v11;
	v33[2] = a3;
	v33[3] = 0i64;
	sub_1402C0750(v35, (__int64)v33);
	v14 = *a7;
	v29 = 0;
	v30 = *a7;
	if (!v10)
		return 0i64;
	v15 = (unsigned int)(a6 + 7) >> 3;
	while (1)
	{
		v16 = v14;
		v17 = v13;
		if (v11)
			break;
	LABEL_23:
		v14 = (int*)((char*)v14 + (unsigned int)(8 * *v8));
		v30 = v14;
		if (++v29 >= v15)
			return 0i64;
	}
	while (1)
	{
		result = sub_1402BD040((__int64)v34, (__int64)v35, a2, v9);
		if ((int)result < 0)
			return result;
		v19 = v16;
		v20 = 0;
		do
		{
			v21 = v19;
			v13 = 8i64;
			do
			{
				v22 = *(_WORD*)&v34[2 * v20 + 64];
				v23 = v34[v20 + 320];
				v24 = (__int16)((unsigned __int8)v34[v20] - (*(__int16*)&v34[2 * v20 + 192] >> 1));
				v25 = v24 + *(__int16*)&v34[2 * v20 + 192];
				if (v25 >= 0)
				{
					if (v25 > 255)
						LOWORD(v25) = 255;
				}
				else
				{
					LOWORD(v25) = 0;
				}
				v26 = v24 - (v22 >> 1);
				if (v26 >= 0)
				{
					if (v26 > 255)
						LOWORD(v26) = 255;
				}
				else
				{
					LOWORD(v26) = 0;
				}
				v27 = (__int16)v26;
				v28 = (__int16)v26 + v22;
				if (v28 >= 0)
				{
					if (v28 > 255)
						LOWORD(v28) = 255;
				}
				else
				{
					LOWORD(v28) = 0;
				}
				++v21;
				++v20;
				*(v21 - 1) = v27 | (((__int16)v25 | (((__int16)v28 | (v23 << 8)) << 8)) << 8);
				--v13;
			} while (v13);
			v8 = a8;
			v19 = (int*)((char*)v19 + (unsigned int)*a8);
		} while (v20 < 0x40);
		v9 = a1;
		++v17;
		v16 += 8;
		if (v17 >= v11)
		{
			v14 = v30;
			v15 = (unsigned int)(a6 + 7) >> 3;
			goto LABEL_23;
		}
	}
}
// 1402BEA10: using guessed type __int64 var_398[106];

