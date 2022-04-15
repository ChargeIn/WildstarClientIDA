//----- (00000001408EF8D0) ----------------------------------------------------
__int64 __fastcall sub_1408EF8D0(char* a1, int a2, _DWORD* a3, int a4, unsigned int* a5, __int64 a6, int a7)
{
	unsigned int v7; // r14d
	int v8; // esi
	char* v10; // r13
	int v12; // eax
	signed int v13; // r10d
	__int64 v14; // r13
	int v15; // ebx
	__int64 v16; // rdi
	unsigned int v17; // ebp
	unsigned int v18; // r9d
	char v19; // r11
	__int64 v20; // r10
	int v21; // edx
	__int64 v22; // rcx
	int v23; // r14d
	int v24; // eax
	__int64 v25; // rcx
	__int64 v26; // rdx
	int v27; // ecx
	int v28; // eax
	int v29; // r8d
	int v30; // edx
	int* v31; // rax
	int v32; // r9d
	signed int v33; // [rsp+30h] [rbp-D8h]
	unsigned int v34; // [rsp+34h] [rbp-D4h]
	int v35; // [rsp+40h] [rbp-C8h] BYREF
	int v36[49]; // [rsp+44h] [rbp-C4h] BYREF
	char* v37; // [rsp+110h] [rbp+8h]

	v37 = a1;
	v7 = 0;
	v8 = 0;
	v10 = a1;
	v34 = 0;
	if (a2 < 2)
	{
		*a3 = 0x80000000;
		return 0i64;
	}
	v35 = 0;
	sub_1407E4830(v36, 0i64, 0x80ui64);
	v12 = a2;
	v13 = 0;
	v33 = 0;
	if (a2 <= 0)
		return 0i64;
	while (1)
	{
		v14 = *v10;
		if ((_DWORD)v14)
			break;
	LABEL_28:
		++v13;
		v10 = v37 + 1;
		v33 = v13;
		++v37;
		if (v13 >= v12)
			return 0i64;
	}
	v15 = 0;
	v16 = v14;
	v17 = v36[v14 - 1];
	if (!v7 || v17)
	{
		v18 = v14 - 1;
		v19 = 0;
		if ((int)v14 - 1 > 0)
		{
			v19 = v14 - 1;
			v20 = v18;
			do
			{
				v21 = (v17 >> v18) & 1;
				if (v15 < v8)
				{
					v22 = v21 + 2i64 * v15;
					if (!a3[v22])
						a3[v22] = v8;
				}
				else
				{
					*(_QWORD*)&a3[2 * v15] = (unsigned int)++v8;
				}
				LOBYTE(v18) = v18 - 1;
				v15 = a3[2 * v15 + v21];
				--v20;
			} while (v20);
			v13 = v33;
		}
		v23 = (v17 >> (v14 - v19 - 1)) & 1;
		if (v15 >= v8)
		{
			++v8;
			a3[2 * v15 + 1] = 0;
		}
		v24 = sub_1408EFD00(v13, v34, a4, a5, a6, a7);
		v25 = v23;
		v7 = v34 + 1;
		v26 = v25 + 2i64 * v15;
		++v34;
		v27 = v14;
		a3[v26] = v24 | 0x80000000;
		if ((int)v14 > 0)
		{
			while (1)
			{
				v28 = v36[v16 - 1];
				if ((v28 & 1) != 0)
					break;
				--v16;
				--v27;
				v36[v16] = v28 + 1;
				if (v16 <= 0)
					goto LABEL_23;
			}
			v36[v27 - 1] = 2 * v36[v27 - 2];
		}
	LABEL_23:
		v29 = v36[v14 - 1];
		v30 = v14 + 1;
		if ((int)v14 + 1 < 33)
		{
			v31 = &v36[v30 - 1];
			do
			{
				v32 = *v31;
				if ((unsigned int)*v31 >> 1 != v17)
					break;
				v29 *= 2;
				++v30;
				*v31++ = v29;
				v17 = v32;
			} while (v30 < 33);
		}
		v12 = a2;
		v13 = v33;
		goto LABEL_28;
	}
	return 0xFFFFFFFFi64;
}
// 1408EF8D0: using guessed type int var_C4[49];

