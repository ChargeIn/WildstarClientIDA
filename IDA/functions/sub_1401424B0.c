#include "../winhttp.h"

//----- (00000001401424B0) ----------------------------------------------------
__int64 __fastcall sub_1401424B0(__int64 a1, unsigned __int16* a2, unsigned int a3)
{
	int* v3; // r14
	__int64 v4; // r12
	int* v6; // rdi
	int* v8; // rsi
	int* v9; // rbx
	int v10; // eax
	unsigned int v11; // esi
	int* v12; // rbx
	_QWORD* v13; // rdi
	int* v14; // rbx
	__int64 v15; // r8
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rax
	int* v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64 v23; // r8
	__int64 v24; // rax
	__int64 v25; // rdx
	__int64 i; // rdx
	__int64 j; // rdx
	__int64 result; // rax
	int* v29; // [rsp+20h] [rbp-20h] BYREF
	unsigned __int16* v30; // [rsp+28h] [rbp-18h] BYREF
	__int64 v31; // [rsp+30h] [rbp-10h]
	__int64 v32; // [rsp+80h] [rbp+40h] BYREF
	int* v33; // [rsp+98h] [rbp+58h] BYREF

	v32 = a1;
	v3 = *(int**)(a1 + 96);
	v4 = a3;
	v6 = (int*)*((_QWORD*)v3 + 1);
	v8 = v3;
	v9 = v6;
	while (v9)
	{
		if ((int)sub_14018E2C0(*((_QWORD*)v9 + 4), a2) < 0)
		{
			v9 = (int*)*((_QWORD*)v9 + 3);
		}
		else
		{
			v8 = v9;
			v9 = (int*)*((_QWORD*)v9 + 2);
		}
	}
	if (v8 == v3 || (v10 = sub_14018E2C0((__int64)a2, *((unsigned __int16**)v8 + 4)), v33 = v8, v10 < 0))
		v33 = v3;
	v11 = -1;
	if (v33 == *(int**)(v32 + 96))
	{
		v12 = v3;
		while (v6)
		{
			if ((int)sub_14018E2C0(*((_QWORD*)v6 + 4), a2) < 0)
			{
				v6 = (int*)*((_QWORD*)v6 + 3);
			}
			else
			{
				v12 = v6;
				v6 = (int*)*((_QWORD*)v6 + 2);
			}
		}
		if (v12 == v3 || (int)sub_14018E2C0((__int64)a2, *((unsigned __int16**)v12 + 4)) < 0)
		{
			v30 = a2;
			LODWORD(v31) = 0;
			v33 = v12;
			sub_140144990(a1 + 88, &v29, (__int64*)&v33, (__int64*)&v30);
			v12 = v29;
		}
		v13 = (_QWORD*)v32;
		v12[10] = v4;
	}
	else
	{
		v13 = (_QWORD*)v32;
		v14 = v33 + 10;
		if (*(unsigned __int16**)sub_140055BE0(v32 + 120, v33 + 10) == a2)
			v11 = *v14;
		*v14 = v4;
	}
	v15 = v13[16];
	v16 = v15;
	v17 = *(_QWORD*)(v15 + 8);
	v18 = v17;
	while (v18)
	{
		if (*(_DWORD*)(v18 + 32) < (unsigned int)v4)
		{
			v18 = *(_QWORD*)(v18 + 24);
		}
		else
		{
			v16 = v18;
			v18 = *(_QWORD*)(v18 + 16);
		}
	}
	if (v16 == v15 || (v32 = v16, (unsigned int)v4 < *(_DWORD*)(v16 + 32)))
		v32 = v15;
	if (v32 == v15)
	{
		v19 = (int*)v15;
		while (v17)
		{
			if (*(_DWORD*)(v17 + 32) < (unsigned int)v4)
			{
				v17 = *(_QWORD*)(v17 + 24);
			}
			else
			{
				v19 = (int*)v17;
				v17 = *(_QWORD*)(v17 + 16);
			}
		}
		if (v19 == (int*)v15 || (unsigned int)v4 < v19[8])
		{
			LODWORD(v30) = v4;
			v31 = 0i64;
			v32 = (__int64)v19;
			sub_140055C60((__int64)(v13 + 15), &v33, &v32, &v30);
			v19 = v33;
		}
		*((_QWORD*)v19 + 5) = a2;
	}
	if (v11 != -1)
	{
		v20 = v13[16];
		v21 = v20;
		v22 = *(_QWORD*)(v20 + 8);
		while (v22)
		{
			if (*(_DWORD*)(v22 + 32) < v11)
			{
				v22 = *(_QWORD*)(v22 + 24);
			}
			else
			{
				v21 = v22;
				v22 = *(_QWORD*)(v22 + 16);
			}
		}
		if (v21 == v20 || (v32 = v21, v11 < *(_DWORD*)(v21 + 32)))
			v32 = v20;
		v23 = v13[12];
		v24 = *(_QWORD*)(v23 + 16);
		if (v24 == v23)
		{
		LABEL_60:
			sub_140144BB0((__int64)(v13 + 15), &v32);
		}
		else
		{
			while (*(_DWORD*)(v24 + 40) != v11)
			{
				v25 = *(_QWORD*)(v24 + 24);
				if (v25)
				{
					v24 = *(_QWORD*)(v24 + 24);
					for (i = *(_QWORD*)(v25 + 16); i; i = *(_QWORD*)(i + 16))
						v24 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v24 + 8); v24 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v24 = j;
					if (*(_QWORD*)(v24 + 24) != j)
						v24 = j;
				}
				if (v24 == v23)
					goto LABEL_60;
			}
			*(_QWORD*)(v32 + 40) = *(_QWORD*)(v24 + 32);
		}
	}
	result = v13[5];
	*(_DWORD*)(32 * v4 + result + 16) = -1;
	return result;
}

