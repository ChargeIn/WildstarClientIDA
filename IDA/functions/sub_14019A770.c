#include "../winhttp.h"

//----- (000000014019A770) ----------------------------------------------------
__int64 __fastcall sub_14019A770(WCHAR** a1, unsigned __int64 a2, _QWORD* a3)
{
	WCHAR* v3; // rdi
	WCHAR** v4; // r13
	WCHAR* i; // rbx
	int* v9; // r15
	int* v10; // r12
	WCHAR* v11; // rsi
	unsigned __int64 v12; // rdi
	unsigned __int64 v13; // rax
	unsigned __int64 v14; // rdi
	int* v15; // rdi
	__int64 v16; // rdi
	__int64 v17; // rdx
	__int64 v18; // rdx
	unsigned __int64 v19; // rdx
	__int64* v20; // rax
	__int64 v21; // rcx
	__int64* v22; // rax
	__int64 v23; // r13
	int* v24; // rax
	_WORD* v25; // r8
	_WORD* v26; // rdx
	int* v27; // rsi
	int* j; // rdi
	__int64 v29; // rcx
	char* v30; // rax
	__int64 v31; // [rsp+20h] [rbp-58h] BYREF
	int* v32; // [rsp+28h] [rbp-50h]
	int* v33; // [rsp+30h] [rbp-48h]
	int* v34; // [rsp+38h] [rbp-40h]
	unsigned __int64 v36; // [rsp+88h] [rbp+10h] BYREF
	unsigned __int64 v37; // [rsp+98h] [rbp+20h] BYREF

	v3 = *a1;
	v4 = a1;
	if ((unsigned __int64)*a1 >= a2)
		return 0i64;
	do
	{
		if (*v3 != 32 && *v3 != 9)
			break;
		++v3;
	} while ((unsigned __int64)v3 < a2);
	if ((unsigned __int64)v3 >= a2)
		return 0i64;
	while (*v3 == 32 || *v3 == 9)
	{
		if ((unsigned __int64)++v3 >= a2)
			return 0i64;
	}
	if ((unsigned __int64)v3 >= a2 || !(unsigned int)sub_1407DFF20(*v3) && *v3 != 95)
		return 0i64;
	for (i = v3 + 1; (unsigned __int64)i < a2; ++i)
	{
		if (!(unsigned int)sub_1407DFF14(*i) && *i != 95)
			break;
	}
	sub_14001C480((__int64)a3, (int*)v3, (int*)i);
	*v4 = i;
	v9 = sub_14018B280(16i64, 0);
	v10 = v9;
	v32 = v9;
	v33 = v9;
	v34 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	while ((unsigned __int64)i < a2)
	{
		while (*i == 32 || *i == 9)
		{
			if ((unsigned __int64)++i >= a2)
				goto LABEL_23;
		}
		if ((unsigned __int64)i >= a2)
			break;
		if (*i != 46)
			break;
		v11 = i + 1;
		if ((unsigned __int64)(i + 1) >= a2)
			break;
		while (*v11 == 32 || *v11 == 9)
		{
			if ((unsigned __int64)++v11 >= a2)
				goto LABEL_23;
		}
		if ((unsigned __int64)v11 >= a2 || !(unsigned int)sub_1407DFF20(*v11) && *v11 != 95)
			break;
		for (i = v11 + 1; (unsigned __int64)i < a2; ++i)
		{
			if (!(unsigned int)sub_1407DFF14(*i) && *i != 95)
				break;
		}
		v12 = i - v11;
		v13 = ((char*)v9 - (char*)v10) >> 1;
		if (v12 > v13)
		{
			v16 = v13;
			sub_1407DB590(v10, (int*)v11, 2 * v13);
			sub_14001C310(&v31, (int*)&v11[v16], (int*)i);
			v9 = v33;
			v10 = v32;
		}
		else
		{
			v14 = 2 * v12;
			sub_1407DB590(v10, (int*)v11, v14);
			v15 = (int*)((char*)v10 + v14);
			if (v15 != v9)
			{
				sub_1407DB590(v15, v9, 2ui64);
				v9 = (int*)((char*)v9 - 2 * (((char*)v9 - (char*)v15) >> 1));
				v33 = v9;
			}
		}
		v17 = a3[2];
		*v4 = i;
		if (v17 + 2 == a3[3])
		{
			v18 = v17 - a3[1];
			v36 = 1i64;
			v19 = v18 >> 1;
			v20 = (__int64*)&v36;
			v37 = v19;
			if (v19)
				v20 = (__int64*)&v37;
			v21 = *v20;
			v36 = v19;
			v22 = (__int64*)&v36;
			v37 = v19 + v21;
			if (v19 + v21 >= v19)
				v22 = (__int64*)&v37;
			v23 = 2 * (*v22 + 1);
			v24 = sub_14018B280(v23, 0);
			v25 = (_WORD*)a3[2];
			v26 = (_WORD*)a3[1];
			v27 = v24;
			for (j = v24; v26 != v25; j = (int*)((char*)j + 2))
			{
				if (j)
					*(_WORD*)j = *v26;
				++v26;
			}
			if (j)
				*(_WORD*)j = 0;
			v29 = a3[1];
			if (v29)
				sub_14018B900(v29, 0);
			v30 = (char*)v27 + v23;
			v4 = a1;
			a3[1] = v27;
			a3[3] = v30;
			a3[2] = j;
		}
		if (a3[2] != -2i64)
			*(_WORD*)(a3[2] + 2i64) = 0;
		*(_WORD*)a3[2] = 46;
		a3[2] += 2i64;
		sub_14001C310(a3, v10, v9);
	}
LABEL_23:
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return 1i64;
}

