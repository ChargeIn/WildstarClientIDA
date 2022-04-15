//----- (00000001402BDC20) ----------------------------------------------------
__int64 __fastcall sub_1402BDC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int** a7, _DWORD* a8)
{
	_DWORD* v8; // r15
	__int64 v9; // r14
	unsigned int v10; // r12d
	unsigned int v11; // ebp
	__int64 v13; // r8
	int* v14; // rcx
	unsigned int v15; // edx
	int* v16; // r13
	__int64 result; // rax
	int* v18; // rbp
	unsigned int v19; // r14d
	unsigned int i; // edi
	unsigned int v21; // r10d
	int* v22; // r11
	unsigned __int8 v23; // si
	__int64 v24; // rax
	int v25; // edx
	__int16 v26; // r8
	int v27; // eax
	int v28; // edx
	int v29; // eax
	int v30; // r9d
	int v31; // eax
	int v32; // [rsp+24h] [rbp-6D4h]
	int v33; // [rsp+28h] [rbp-6D0h]
	unsigned int v34; // [rsp+2Ch] [rbp-6CCh]
	int* v35; // [rsp+30h] [rbp-6C8h]
	__int64 v37[5]; // [rsp+48h] [rbp-6B0h] BYREF
	char v38[768]; // [rsp+70h] [rbp-688h] BYREF
	__int64 v39[106]; // [rsp+370h] [rbp-388h] BYREF

	v8 = a8;
	v9 = a1;
	v10 = (unsigned int)(a6 + 15) >> 4;
	v11 = (unsigned int)(a5 + 15) >> 4;
	v34 = v11;
	v37[1] = a4;
	*a7 = sub_14018B280(4i64 * ((v11 * v10) << 8), 8u);
	v37[0] = a3;
	*a8 = v11 << 6;
	v37[2] = a3;
	v37[3] = 0i64;
	sub_1402C0750(v39, (__int64)v37);
	v14 = *a7;
	v32 = 0;
	v35 = *a7;
	if (!v10)
		return 0i64;
	v15 = (unsigned int)(a6 + 15) >> 4;
	while (1)
	{
		v16 = v14;
		v33 = 0;
		if (v11)
			break;
	LABEL_23:
		v14 = (int*)((char*)v14 + (unsigned int)(16 * *v8));
		v35 = v14;
		if (++v32 >= v15)
			return 0i64;
	}
	while (1)
	{
		result = sub_1402BCB70((__int64)v38, (__int64)v39, v13, v9);
		if ((int)result < 0)
			return result;
		v18 = v16;
		v19 = 0;
		for (i = 0; i < 0x100; i += 16)
		{
			v21 = 0;
			v22 = v18;
			do
			{
				v23 = v38[i + 512 + v21];
				v24 = 8 * (v19 >> 1) + (v21 >> 1);
				v25 = *(__int16*)&v38[2 * v24 + 384];
				v26 = *(_WORD*)&v38[2 * v24 + 256];
				v27 = (__int16)((unsigned __int8)v38[i + v21] - (*(__int16*)&v38[2 * v24 + 384] >> 1));
				v28 = v27 + v25;
				if (v28 >= 0)
				{
					if (v28 > 255)
						LOWORD(v28) = 255;
				}
				else
				{
					LOWORD(v28) = 0;
				}
				v13 = (unsigned int)v26;
				v29 = v27 - ((int)v13 >> 1);
				if (v29 >= 0)
				{
					if (v29 > 255)
						LOWORD(v29) = 255;
				}
				else
				{
					LOWORD(v29) = 0;
				}
				v30 = (__int16)v29;
				v31 = (__int16)v29 + (_DWORD)v13;
				if (v31 >= 0)
				{
					if (v31 > 255)
						LOWORD(v31) = 255;
				}
				else
				{
					LOWORD(v31) = 0;
				}
				++v21;
				*v22++ = v30 | (((__int16)v28 | (((__int16)v31 | (v23 << 8)) << 8)) << 8);
			} while (v21 < 0x10);
			v8 = a8;
			++v19;
			v18 = (int*)((char*)v18 + (unsigned int)*a8);
		}
		v11 = v34;
		v9 = a1;
		v16 += 16;
		if (++v33 >= v34)
		{
			v14 = v35;
			v15 = (unsigned int)(a6 + 15) >> 4;
			goto LABEL_23;
		}
	}
}
// 1402BDD20: variable 'v13' is possibly undefined
// 1402BDC20: using guessed type __int64 var_388[106];

