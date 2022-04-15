//----- (0000000140030E30) ----------------------------------------------------
_QWORD* __fastcall sub_140030E30(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	unsigned __int64 v3; // rcx
	unsigned __int64 i; // rax
	_QWORD* result; // rax
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // rdx
	unsigned __int64 j; // rcx
	_QWORD* v9; // rdi
	_QWORD* k; // rbx
	int* v11; // rax
	_QWORD* v12; // rdi
	_QWORD* v13; // rbx
	unsigned int v14; // edx
	__int64 v15; // r8
	__int64 v16; // rcx
	__int64 v17; // rsi
	int* v18; // rax
	__int64 v19; // rax
	_QWORD* v20; // rdi
	_QWORD* v21; // rbx
	__int64 v22; // rax
	char v23[56]; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v24; // [rsp+60h] [rbp+8h] BYREF
	int* v25; // [rsp+68h] [rbp+10h] BYREF
	int* v26; // [rsp+70h] [rbp+18h] BYREF

	sub_140008410((__int64)(a1 + 3));
	if (a1[9])
	{
		sub_140032150((__int64)(a1 + 7), *(_QWORD**)(a1[8] + 8i64));
		*(_QWORD*)(a1[8] + 16i64) = a1[8];
		*(_QWORD*)(a1[8] + 8i64) = 0i64;
		*(_QWORD*)(a1[8] + 24i64) = a1[8];
		a1[9] = 0i64;
	}
	v2 = *(_QWORD*)(a1[2] + 8i64);
	v3 = v2;
	for (i = *(_QWORD*)(v2 + 8); i; i = *(_QWORD*)(i + 16))
		v3 = i;
	if (v3 == v2 || (v24 = v3, *(_DWORD*)(v3 + 32)))
		v24 = v2;
	result = (_QWORD*)v24;
	if (v24 != v2)
	{
		v6 = *(_QWORD*)(v24 + 48);
		v7 = v6;
		for (j = *(_QWORD*)(v6 + 8); j; j = *(_QWORD*)(j + 16))
			v7 = j;
		if (v7 == v6 || (v24 = v7, *(_DWORD*)(v7 + 32)))
			v24 = v6;
		if (v24 != v6)
		{
			v9 = *(_QWORD**)(v24 + 48);
			for (k = (_QWORD*)*v9; k != v9; k = (_QWORD*)*k)
			{
				v24 = k[2];
				v11 = sub_1400326C0((__int64)(a1 + 7), (int*)(v24 + 12));
				result = (_QWORD*)sub_140007810((__int64)v11, (__int64)v23, &v24);
			}
		}
	}
	v12 = *(_QWORD**)(a1[2] + 8i64);
	v13 = (_QWORD*)v12[2];
	while (v13 != v12)
	{
		v14 = *((_DWORD*)v13 + 8);
		if (v14)
		{
			v15 = a1[4];
			v16 = *(_QWORD*)(v15 + 8);
			v17 = *(_QWORD*)(v13[6] + 16i64);
			v18 = (int*)v15;
			while (v16)
			{
				if (*(_DWORD*)(v16 + 32) < v14)
				{
					v16 = *(_QWORD*)(v16 + 24);
				}
				else
				{
					v18 = (int*)v16;
					v16 = *(_QWORD*)(v16 + 16);
				}
			}
			if (v18 == (int*)v15 || v14 < v18[8])
			{
				v24 = v14;
				v25 = v18;
				sub_140032B30((__int64)(a1 + 3), &v26, (__int64*)&v25, &v24);
				v18 = v26;
			}
			v18[9] = *(_DWORD*)(v17 + 32);
		}
		v19 = v13[3];
		if (v19)
		{
			v13 = (_QWORD*)v13[3];
			for (result = *(_QWORD**)(v19 + 16); result; result = (_QWORD*)result[2])
				v13 = result;
		}
		else
		{
			for (result = (_QWORD*)v13[1]; v13 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
				v13 = result;
			if ((_QWORD*)v13[3] != result)
				v13 = result;
		}
	}
	v20 = (_QWORD*)a1[4];
	v21 = (_QWORD*)v20[2];
	while (v21 != v20)
	{
		sub_1400310B0((__int64)a1, *((_DWORD*)v21 + 8), *((_DWORD*)v21 + 9));
		v22 = v21[3];
		if (v22)
		{
			v21 = (_QWORD*)v21[3];
			for (result = *(_QWORD**)(v22 + 16); result; result = (_QWORD*)result[2])
				v21 = result;
		}
		else
		{
			for (result = (_QWORD*)v21[1]; v21 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
				v21 = result;
			if ((_QWORD*)v21[3] != result)
				v21 = result;
		}
	}
	return result;
}
// 140030E30: using guessed type char var_38[56];

