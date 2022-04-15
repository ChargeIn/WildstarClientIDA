//----- (00000001407B1D40) ----------------------------------------------------
__int64 __fastcall sub_1407B1D40(_WORD* a1, int** a2)
{
	WCHAR v3; // cx
	int** v4; // rdi
	__int64 v5; // rax
	int v6; // esi
	int* v7; // rsi
	int* v8; // r14
	__int64 v9; // rdi
	__int64 v10; // rbx
	char* v11; // r15
	unsigned __int64 v12; // rax
	unsigned __int64 v13; // rdi
	char* v14; // rax
	__int64 v15; // rsi
	__int64* v16; // rax
	__int64 v17; // rcx
	_WORD* v18; // rax
	__int64 v19; // rax
	int* v20; // r13
	int* v21; // r12
	int* v22; // rbp
	__int64 v23; // rdi
	__int64 v24; // rax
	unsigned __int64 v25; // rdi
	int* v26; // rdi
	int* v27; // rdi
	__int64 v28; // rcx
	char* v29; // rax
	unsigned int v30; // ebx
	unsigned __int64 v32; // rax
	unsigned __int64 v33; // rdx
	int v34; // r9d
	unsigned __int64 v35; // r10
	int v36; // r11d
	__int16 v37; // r8
	bool v38; // zf
	float v39; // xmm0_4
	int** v40; // rdx
	int v41; // ecx
	int v42; // eax
	__int64 v43; // rax
	__int64 v44; // [rsp+30h] [rbp-58h] BYREF
	int* v45; // [rsp+38h] [rbp-50h]
	char* v46; // [rsp+40h] [rbp-48h]
	__int64 v47; // [rsp+48h] [rbp-40h]
	unsigned __int64 v48; // [rsp+90h] [rbp+8h] BYREF
	int** v49; // [rsp+98h] [rbp+10h]
	__int64 v50; // [rsp+A0h] [rbp+18h] BYREF

	v49 = a2;
	v3 = *a1;
	v4 = a2;
	v5 = 0i64;
	if (!v3)
		return 2147942487i64;
	do
		++v5;
	while (a1[v5]);
	if (!v5)
		return 2147942487i64;
	v6 = 0;
	if (v3 == 34)
	{
		if (a1[v5 - 1] == 34)
		{
			v7 = (int*)(a1 + 1);
			v8 = 0i64;
			v45 = 0i64;
			v9 = (2 * v5 - 4) >> 1;
			v47 = 0i64;
			if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v8 = sub_14018B280(2 * (v9 + 1), 0);
				v45 = v8;
				v47 = (__int64)v8 + 2 * v9 + 2;
			}
			v10 = 2 * v9;
			sub_1407DB590(v8, v7, 2 * v9);
			v11 = (char*)v8 + 2 * v9;
			v46 = v11;
			if (v11)
				*(_WORD*)v11 = 0;
			v12 = 0i64;
			do
				++v12;
			while (asc_140B53990[v12]);
			v13 = v10 >> 1;
			if (v12 > v10 >> 1
				|| (v14 = (char*)sub_14010A450(v8, (int*)((char*)v8 + v10), L"\\\\", (__int16*)&asc_140B53990[v12]),
					v14 == v11))
			{
				v15 = -1i64;
			}
			else
			{
				v15 = (v14 - (char*)v8) >> 1;
			}
			if (v15 != -1)
			{
				v50 = 2i64;
				do
				{
					v16 = (__int64*)&v48;
					v48 = v13 - v15;
					if (v13 - v15 >= 2)
						v16 = &v50;
					v17 = *v16;
					v18 = &unk_1409FAEE4;
					do
					{
						v38 = v18[1] == 0;
						++v18;
					} while (!v38);
					v19 = 0i64;
					do
						v38 = *((_WORD*)&unk_1409FAEE4 + ++v19) == 0;
					while (!v38);
					v20 = (int*)((char*)&unk_1409FAEE4 + 2 * v19);
					v21 = (int*)((char*)v8 + 2 * v15);
					v22 = (int*)((char*)v8 + 2 * v17 + 2 * v15);
					v23 = (2 * v19) >> 1;
					v24 = ((char*)v22 - (char*)v21) >> 1;
					if (v24 < v23)
					{
						v27 = (int*)((char*)&unk_1409FAEE4 + 2 * v24);
						sub_1407DB590(v21, (int*)&unk_1409FAEE4, 2 * ((2 * v24) >> 1));
						sub_1401905C0(&v44, v22, v27, v20);
						v11 = v46;
						v8 = v45;
					}
					else
					{
						v25 = 2 * v23;
						sub_1407DB590(v21, (int*)&unk_1409FAEE4, v25);
						v26 = (int*)((char*)v21 + v25);
						if (v26 != v22)
						{
							sub_1407DB590(v26, v22, 2 * ((v11 - (char*)v22) >> 1) + 2);
							v11 -= 2 * (((char*)v22 - (char*)v26) >> 1);
							v46 = v11;
						}
					}
					v28 = 0i64;
					do
						v38 = asc_140B53A2C[++v28] == 0;
					while (!v38);
					v13 = (v11 - (char*)v8) >> 1;
					if (v15 + v28 + 1 > v13
						|| (v29 = (char*)sub_14010A450((_WORD*)v8 + v15 + 1, v11, L"\\\\", (__int16*)&asc_140B53A2C[v28]),
							v29 == v11))
					{
						v15 = -1i64;
					}
					else
					{
						v15 = (v29 - (char*)v8) >> 1;
					}
				} while (v15 != -1);
			}
			v30 = sub_1407B21F0(v8, v49);
			if (v8)
				sub_14018B900((__int64)v8, 0);
			return v30;
		}
		v4 = v49;
	}
	if (((v3 - 43) & 0xFFFD) != 0 && (unsigned __int16)(v3 - 48) > 9u)
		goto LABEL_56;
	v32 = sub_14018E200(a1);
	if (v33 >= v32)
	{
	LABEL_62:
		v43 = sub_14018E8F0(a1);
		return sub_1407B2380(v43, v4);
	}
	do
	{
		v37 = a1[v35];
		if ((unsigned __int16)(v37 - 48) > 9u)
			v34 = 0;
		if (v37 == 46)
		{
			v38 = v36 == 0;
			v36 = 1;
		}
		else
		{
			if (((v37 - 69) & 0xFFDF) != 0)
				goto LABEL_50;
			v38 = v6 == 0;
			v6 = 1;
		}
		if (!v38)
			LODWORD(v33) = 0;
	LABEL_50:
		if (!v34 && !(_DWORD)v33)
			goto LABEL_56;
		++v35;
	} while (v35 < v32);
	if (v34)
		goto LABEL_62;
	if ((_DWORD)v33)
	{
		v39 = *(double*)sub_1407DFE80(a1, 0i64).m128_u64;
		return sub_1407B2460(v39, v4);
	}
LABEL_56:
	if (!(unsigned int)sub_14018E2C0((__int64)a1, L"true"))
	{
		v40 = v4;
		v41 = 1;
		return sub_1407B2310(v41, v40);
	}
	v42 = sub_14018E2C0((__int64)a1, L"false");
	v40 = v4;
	if (v42)
		return sub_1407B21F0((int*)a1, v4);
	v41 = 0;
	return sub_1407B2310(v41, v40);
}
// 1407B2067: variable 'v33' is possibly undefined
// 1407B2073: variable 'v35' is possibly undefined
// 1407B208B: variable 'v36' is possibly undefined
// 1407B20AE: variable 'v34' is possibly undefined
// 140B53990: using guessed type wchar_t asc_140B53990[3];
// 140B53A2C: using guessed type wchar_t asc_140B53A2C[3];
// 140B53A38: using guessed type wchar_t aTrue_5[5];
// 140B53A48: using guessed type wchar_t aFalse_5[6];

