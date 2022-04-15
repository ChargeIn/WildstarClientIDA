//----- (00000001403FCF80) ----------------------------------------------------
void __fastcall sub_1403FCF80(unsigned int a1, _DWORD* a2, __int64 a3)
{
	__int64 v3; // r9
	__int64 v6; // rax
	__int64 v7; // rdx
	unsigned __int64 v8; // rbx
	__int64 v9; // rax
	unsigned __int64 v10; // rsi
	__int64* v11; // r14
	unsigned __int64 v12; // r9
	__int64 v13; // r11
	unsigned __int64 v14; // rcx
	_DWORD* v15; // rdx
	int v16; // eax
	int v17; // eax
	int v18; // r8d
	__int64 v19; // r9
	_DWORD* v20; // rdx
	int v21; // r8d
	int v22; // eax
	unsigned __int64 v23; // rdx
	_QWORD* v24; // r8
	_DWORD* v25; // rcx
	int v26; // r9d
	int v27; // eax
	__int64 v28; // [rsp+20h] [rbp-48h] BYREF
	unsigned int v29; // [rsp+30h] [rbp-38h] BYREF
	__int64 v30; // [rsp+38h] [rbp-30h]
	__int64 v31; // [rsp+40h] [rbp-28h]
	_DWORD* v32; // [rsp+78h] [rbp+10h] BYREF
	__int64 v33; // [rsp+88h] [rbp+20h]

	if (!a2)
		return;
	v32 = a2;
	v3 = *(_QWORD*)(a3 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	v7 = v3;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a1)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == v3 || (v33 = v7, a1 < *(_DWORD*)(v7 + 32)))
		v33 = v3;
	v8 = 0i64;
	v9 = v33;
	if (v33 == v3)
	{
		v29 = a1;
		v31 = 0i64;
		v30 = 0i64;
		sub_1403FE760(a3, (__int64)&v28, (int*)&v29);
		v9 = v28;
		if (v28 == *(_QWORD*)(a3 + 8))
			return;
	}
	v10 = *(_QWORD*)(v9 + 48);
	v11 = (__int64*)(v9 + 40);
	v12 = v10;
	if (!v10)
	{
	LABEL_34:
		v23 = v8;
		goto LABEL_35;
	}
	v13 = *v11;
	while (1)
	{
		v14 = v8 + ((v12 - v8) >> 1);
		v15 = *(_DWORD**)(v13 + 8 * v14);
		if (!v15)
		{
		LABEL_32:
			v12 = v8 + ((v12 - v8) >> 1);
			goto LABEL_33;
		}
		v16 = a2[3] - v15[3];
		if (v16 || (v16 = a2[4] - v15[4]) != 0)
		{
			if (v16 < 0)
				goto LABEL_32;
			goto LABEL_31;
		}
		v17 = a2[5];
		v18 = v15[5];
		if (v17 == v18)
			break;
		if (v18 == 2)
			goto LABEL_32;
		if (v17 != 2)
			break;
	LABEL_31:
		v8 = v14 + 1;
	LABEL_33:
		if (v8 >= v12)
			goto LABEL_34;
	}
	v8 += (v12 - v8) >> 1;
	if (v14)
	{
		v19 = v13 + 8 * v14;
		while (1)
		{
			v20 = *(_DWORD**)(v19 - 8);
			v19 -= 8i64;
			--v8;
			if (!v20)
				break;
			if (a2[3] != v20[3])
				break;
			if (a2[4] != v20[4])
				break;
			v21 = a2[5];
			v22 = v20[5];
			if (v21 != v22 && (v22 == 2 || v21 == 2))
				break;
			if (!v8)
				goto LABEL_40;
		}
		++v8;
	}
LABEL_40:
	v23 = v14 + 1;
	if (v14 + 1 < v10)
	{
		v24 = (_QWORD*)(v13 + 8 * v23);
		do
		{
			v25 = (_DWORD*)*v24;
			if (!*v24)
				break;
			if (a2[3] != v25[3])
				break;
			if (a2[4] != v25[4])
				break;
			v26 = a2[5];
			v27 = v25[5];
			if (v26 != v27 && (v27 == 2 || v26 == 2))
				break;
			++v23;
			++v24;
		} while (v23 < v10);
	}
LABEL_35:
	if (a2[5] != 2)
		v23 = v8;
	sub_1400B4DE0(v11, v23, &v32);
}
// 1403FD0E0: conditional instruction was optimized away because eax.4>=1

