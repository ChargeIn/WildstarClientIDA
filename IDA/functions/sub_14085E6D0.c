//----- (000000014085E6D0) ----------------------------------------------------
__int64 __fastcall sub_14085E6D0(__int64 a1, int a2, _DWORD* a3)
{
	__int64 v3; // r11
	bool v4; // di
	char v5; // r9
	bool v8; // si
	int* v9; // rax
	int v10; // ecx
	int v11; // xmm0_4
	int v12; // xmm1_4
	int v13; // xmm2_4
	int v14; // xmm3_4
	__int64 result; // rax
	int v16; // eax
	unsigned __int16 v17; // cx
	unsigned int v18; // r9d
	unsigned int v19; // r10d
	__int64 v20; // r8
	int* v21; // rdx
	int v22; // xmm1_4
	__int64 v23; // rcx
	int v24; // xmm0_4
	int v25; // xmm1_4
	__int64 v26; // [rsp+30h] [rbp-30h] BYREF
	__int64 v27; // [rsp+38h] [rbp-28h]
	char v28; // [rsp+40h] [rbp-20h]
	char v29; // [rsp+41h] [rbp-1Fh]
	int v30; // [rsp+44h] [rbp-1Ch]
	int v31; // [rsp+48h] [rbp-18h]
	int v32; // [rsp+4Ch] [rbp-14h]
	int v33; // [rsp+50h] [rbp-10h]

	v3 = *(_QWORD*)(a1 + 176);
	v4 = 1;
	v5 = v28 & 0xFC;
	v27 = 0i64;
	v26 = 0i64;
	v29 = 0;
	v30 = 1065353216;
	v31 = 1065353216;
	v28 &= 0xFCu;
	v32 = 1065353216;
	v33 = 1065353216;
	v8 = 1;
	if ((*(_DWORD*)(v3 + 136) & 0x40000000) == 0)
	{
		v9 = *(int**)(v3 + 104);
		v10 = 0;
		if (a2)
		{
			do
			{
				if (v9 == *(int**)(v3 + 112))
					break;
				++v10;
				v9 += 5;
			} while (v10 != a2);
		}
		if (v9 != *(int**)(v3 + 112))
		{
			v11 = *v9;
			LODWORD(v26) = *v9;
			v12 = v9[1];
			HIDWORD(v26) = v12;
			v13 = v9[2];
			LODWORD(v27) = v13;
			v14 = v9[3];
			HIDWORD(v27) = v14;
			v28 = (v5 ^ *((_BYTE*)v9 + 16)) & 1 ^ v5;
			v28 ^= (v28 ^ *((_BYTE*)v9 + 16)) & 2;
			v8 = (v28 & 1) == 0;
			v29 = *((_BYTE*)v9 + 17);
			v4 = (v28 & 2) == 0;
			if ((v28 & 2) != 0 && (v28 & 1) != 0)
			{
				*a3 = v11;
				a3[1] = v12;
				a3[2] = v13;
				result = 1i64;
				a3[3] = v14;
				return result;
			}
		}
	}
	v16 = 0;
	v17 = 1;
	if ((*(_BYTE*)(v3 + 19) & 7) != 0)
		v17 = *(_WORD*)(v3 + 16);
	v18 = *(unsigned __int8*)(v3 + 18);
	v19 = 0;
	if (!*(_BYTE*)(v3 + 18))
		return 2i64;
	while ((v18 & 1) == 0)
	{
		v18 >>= 1;
		++v19;
	LABEL_17:
		if (!v18)
			return 2i64;
	}
	v20 = 0i64;
	if (!v17)
		goto LABEL_17;
	while (a2 != v16)
	{
		v20 = (unsigned int)(v20 + 1);
		++v16;
		if ((unsigned int)v20 >= v17)
			goto LABEL_17;
	}
	v21 = &dword_140C10FB0;
	v29 = 1 << v19;
	if (*(_QWORD*)(v3 + 8))
		v21 = *(int**)(v3 + 8);
	sub_14085D600(
		(float*)&byte_140C62000[128 * (unsigned __int64)v19],
		(float*)&v21[6 * v20],
		*(float*)(v3 + 100),
		v4,
		v8,
		(__int64)&v26);
	v22 = HIDWORD(v26);
	v23 = *(_QWORD*)(a1 + 176);
	*a3 = v26;
	v24 = v27;
	a3[1] = v22;
	v25 = HIDWORD(v27);
	a3[2] = v24;
	a3[3] = v25;
	sub_14084BE70(v23, (__int64)&v26);
	return 1i64;
}
// 140C10FB0: using guessed type int dword_140C10FB0;
// 140C62000: using guessed type _BYTE byte_140C62000[80];

