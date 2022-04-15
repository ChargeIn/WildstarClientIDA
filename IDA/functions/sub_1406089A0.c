#include "../winhttp.h"

//----- (00000001406089A0) ----------------------------------------------------
int* __fastcall sub_1406089A0(__int64 a1, unsigned int a2, __int64 a3)
{
	unsigned __int64 v3; // rsi
	__int64 v6; // rbx
	unsigned __int64 v7; // r14
	int* v8; // rax
	int* v9; // rdi
	int* v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // r14
	__int64 v15; // rdi
	__int64 v16; // rdx
	int* v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rax
	int* v20; // rax
	int* v21; // rdi
	int* result; // rax
	__int64 v23; // r8
	int* v24; // r9
	__int64 v25; // rdx
	_QWORD* v26; // rcx
	int* v27; // [rsp+30h] [rbp-38h] BYREF
	int* v28; // [rsp+38h] [rbp-30h]
	unsigned int v29; // [rsp+78h] [rbp+10h] BYREF

	v29 = a2;
	v3 = a2;
	if (*(_QWORD*)(a1 + 264) <= (unsigned __int64)a2)
	{
		do
		{
			v6 = *(_QWORD*)(a1 + 264);
			v7 = v6 + 1;
			v8 = sub_14018DB00(*(_QWORD*)(a1 + 256), v6 + 1, 8i64);
			v9 = v8;
			*(_QWORD*)&v8[2 * v6] = 0i64;
			v10 = *(int**)(a1 + 256);
			if (v10 != v8)
			{
				sub_1407DB590(v8, v10, 8i64 * *(_QWORD*)(a1 + 264));
				v11 = *(_QWORD*)(a1 + 256);
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
				*(_QWORD*)(a1 + 256) = v9;
			}
			*(_QWORD*)(a1 + 264) = v7;
		} while (v7 <= v3);
	}
	v12 = *(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v3);
	if (v12)
	{
		v13 = (~*(_DWORD*)(*(_QWORD*)(v12 + 112) + 268i64) & 0x4000000u) >> 26;
		v14 = 32 * v13 + a1;
		v15 = 32 * (v13 + 9);
		sub_14060AD20(&v27, *(_DWORD**)(v14 + 280), *(_QWORD*)(v15 + a1), &v29);
		v16 = (__int64)v28;
		v17 = v27;
		v18 = ((char*)v28 - (char*)v27) >> 4;
		if (v18 > 0)
		{
			while (*v17 != (_DWORD)v3)
			{
				if (*++v17 == (_DWORD)v3)
					break;
				if (*++v17 == (_DWORD)v3)
					break;
				if (*++v17 == (_DWORD)v3)
					break;
				--v18;
				++v17;
				if (v18 <= 0)
					goto LABEL_14;
			}
		LABEL_22:
			v19 = (__int64)v17;
			if (v17 != v28)
			{
				v20 = v17 + 1;
				if (v17 + 1 != v28)
				{
					do
					{
						if (*v20 != (_DWORD)v3)
							*v17++ = *v20;
						++v20;
					} while (v20 != (int*)v16);
				}
				goto LABEL_30;
			}
		LABEL_29:
			v17 = (int*)v19;
		LABEL_30:
			v21 = *(int**)(v15 + a1);
			sub_1407DB590(v17, v21, (*(_QWORD*)(v14 + 288) - (_QWORD)v21) & 0xFFFFFFFFFFFFFFFCui64);
			*(_QWORD*)(v14 + 288) += -4 * (v21 - v17);
			goto LABEL_31;
		}
	LABEL_14:
		if (v28 - v17 != 1)
		{
			if (v28 - v17 != 2)
			{
				if (v28 - v17 != 3)
					goto LABEL_28;
				if (*v17 == (_DWORD)v3)
					goto LABEL_22;
				++v17;
			}
			if (*v17 == (_DWORD)v3)
				goto LABEL_22;
			++v17;
		}
		if (*v17 == (_DWORD)v3)
			goto LABEL_22;
	LABEL_28:
		v19 = (__int64)v28;
		goto LABEL_29;
	}
LABEL_31:
	result = *(int**)(a1 + 256);
	*(_QWORD*)&result[2 * v3] = a3;
	if (a3)
	{
		v23 = 32i64
			* ((~*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v3) + 112i64) + 268i64) & 0x4000000u) >> 26);
		v24 = *(int**)(v23 + a1 + 280);
		v25 = (__int64)(*(_QWORD*)(32
			* (((~*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 256) + 8 * v3) + 112i64)
				+ 268i64) & 0x4000000u) >> 26)
				+ 9i64)
			+ a1)
			- (_QWORD)v24) >> 2;
		while (v25 > 0)
		{
			if (v24[v25 >> 1] >= (unsigned int)v3)
			{
				v25 >>= 1;
			}
			else
			{
				v24 += (v25 >> 1) + 1;
				v25 += -1 - (v25 >> 1);
			}
		}
		v26 = (_QWORD*)(v23 + a1 + 272);
		result = (int*)v26[2];
		if (result == (int*)v26[3] || v24 != result)
		{
			return sub_14017B140(v26, v24, (int*)&v29);
		}
		else
		{
			if (result)
				*result = v3;
			v26[2] += 4i64;
		}
	}
	return result;
}

