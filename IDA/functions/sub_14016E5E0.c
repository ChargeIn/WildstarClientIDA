//----- (000000014016E5E0) ----------------------------------------------------
_DWORD* sub_14016E5E0(__int64 a1, _DWORD* a2, _DWORD* a3, _BYTE* a4, ...)
{
	__int64 v4; // rax
	int v5; // ebp
	int v6; // r15d
	int v7; // r12d
	int v10; // ecx
	int v11; // r10d
	__int64 v12; // rcx
	int v13; // r14d
	int v14; // ecx
	int v15; // r10d
	int v16; // eax
	int* v17; // rbx
	int v18; // r13d
	int v19; // eax
	int v20; // edx
	__int64 v21; // r8
	unsigned __int64 v22; // r9
	int v23; // r10d
	__int64 v24; // r11
	int v25; // eax
	int v26; // eax
	int v27; // eax
	_DWORD* result; // rax
	unsigned __int64 v29; // rbp
	unsigned __int64 v30; // rsi
	__int64 v31; // rax
	__int64 v32; // rbx
	int v33; // eax
	int v34; // edx
	__int64 v35; // r8
	__int64 v36; // r9
	__int64 i; // rcx
	__int64 v38; // rax
	int v39; // edx
	__int64 v40; // rcx
	_QWORD** v41; // rcx
	int v42; // r8d
	_QWORD* j; // rax
	int v44; // [rsp+60h] [rbp+8h]
	int* v47; // [rsp+80h] [rbp+28h] BYREF
	va_list va; // [rsp+80h] [rbp+28h]
	va_list va1; // [rsp+88h] [rbp+30h] BYREF

	va_start(va1, a4);
	va_start(va, a4);
	v47 = va_arg(va1, int*);
	v4 = *(_QWORD*)(a1 + 464);
	v5 = *(_DWORD*)(a1 + 716);
	v6 = *(_DWORD*)(a1 + 720);
	v7 = *(_DWORD*)(a1 + 724);
	v44 = v5;
	if (v4)
		v10 = *(_DWORD*)(v4 + 1300);
	else
		v10 = 0;
	v11 = v10 + *a3;
	v12 = *(_QWORD*)(a1 + 472);
	if (v12)
		LODWORD(v12) = *(_DWORD*)(v12 + 1300);
	v13 = v12 + a3[1];
	if (v4)
		v14 = *(_DWORD*)(v4 + 1300);
	else
		v14 = 0;
	v15 = v14 + v11;
	v16 = 1;
	if (*(_QWORD*)(a1 + 1400))
		v16 = *(_QWORD*)(a1 + 1400);
	v17 = v47;
	v18 = v15;
	*v47 = v16;
	v19 = sub_14016DC20(a1);
	v24 = v19;
	if (v19 > 0)
	{
		while (1)
		{
			if (v22 > 1)
				v25 = (int)v22 > v20 ? *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1392) + 8 * v21) + 4i64) : 0;
			else
				v25 = v7 - v5;
			if (v23 < v25)
				break;
			if (v22 > 1)
			{
				if ((int)v22 > v20)
					v26 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1392) + 8 * v21) + 4i64);
				else
					v26 = 0;
			}
			else
			{
				v26 = v7 - v5;
			}
			++v21;
			v23 -= v26;
			++v20;
			if (v21 >= v24)
				goto LABEL_26;
		}
		*v17 = v20;
	}
LABEL_26:
	if ((*(_BYTE*)(a1 + 664) & 0x10) != 0)
	{
		v27 = *(_DWORD*)(a1 + 1372);
		if (v13 < v27)
		{
			*a2 = 16;
			result = a2;
			*a4 = 0;
			return result;
		}
		v13 -= v27;
	}
	v29 = *(_QWORD*)(a1 + 1600);
	v30 = 0i64;
	*a4 = 0;
	if (v29)
	{
		while (1)
		{
			v31 = *(_QWORD*)(a1 + 1592);
			v32 = *(int*)(v31 + 4 * v30);
			LODWORD(v47) = *(_DWORD*)(v31 + 4 * v30);
			v33 = v6 + sub_14016E100(a1, (int*)va);
			if (v18 >= v44 && v18 < v7 && v13 >= v6 && v13 < v33)
				break;
			++v30;
			v6 = v33;
			if (v30 >= v29)
				goto LABEL_36;
		}
		v34 = -2;
		if ((int)v32 >= 0)
		{
			v35 = (__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3;
			if ((int)v32 < (int)v35)
			{
				v36 = *(_QWORD*)(a1 + 1416);
				for (i = *(_QWORD*)(v36 + 8 * v32); i; ++v34)
				{
					v38 = *(int*)(i + 104);
					if ((int)v38 < 0 || (int)v38 >= (int)v35)
						i = 0i64;
					else
						i = *(_QWORD*)(v36 + 8 * v38);
				}
			}
		}
		v39 = v44 + 16 * v34;
		if ((int)v32 < 0)
			goto LABEL_54;
		if ((int)v32 >= (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
			goto LABEL_54;
		v40 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8 * v32);
		if (!v40)
			goto LABEL_54;
		v41 = *(_QWORD***)(v40 + 96);
		v42 = 0;
		for (j = *v41; j != v41; ++v42)
			j = (_QWORD*)*j;
		if (v42 && v18 >= v39 && v18 < v39 + 16)
		{
			*a4 = 1;
			result = a2;
			*a2 = v32;
		}
		else
		{
		LABEL_54:
			*a4 = 0;
			result = a2;
			*a2 = v32;
		}
	}
	else
	{
	LABEL_36:
		result = a2;
		*a2 = -1;
	}
	return result;
}
// 14016E69C: variable 'v22' is possibly undefined
// 14016E6A8: variable 'v20' is possibly undefined
// 14016E6B5: variable 'v21' is possibly undefined
// 14016E6BF: variable 'v23' is possibly undefined

