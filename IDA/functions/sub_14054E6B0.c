#include "../winhttp.h"

//----- (000000014054E6B0) ----------------------------------------------------
__int64 __fastcall sub_14054E6B0(__int64 a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // r11
	__int64 v6; // r8
	char v8; // al
	__int64 v9; // rbx
	unsigned int v10; // r9d
	unsigned int v11; // eax
	__int64 v12; // rcx
	__int64 i; // rax
	__int64 v14; // rax
	unsigned int v15; // eax
	unsigned int v16; // edx
	__int64 result; // rax
	unsigned int v18; // eax
	int* v19; // rax
	int* v20; // rdi
	__int64 v21; // rax
	__int64 v22; // rax
	int* v23; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	v8 = 1;
	v9 = v3;
	if (v6)
	{
		v10 = *a3;
		do
		{
			v11 = *(_DWORD*)(v6 + 32);
			v9 = v6;
			if (v10 < v11 || v11 >= v10 && a3[1] < *(_DWORD*)(v6 + 36))
			{
				v6 = *(_QWORD*)(v6 + 16);
				v8 = 1;
			}
			else
			{
				v6 = *(_QWORD*)(v6 + 24);
				v8 = 0;
			}
		} while (v6);
	}
	v12 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
		{
			*(_QWORD*)a2 = *sub_14054E5E0(a1, &v23, v6, v9, a3);
			goto LABEL_36;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v12 = *(_QWORD*)(v9 + 16);
			if (v12)
			{
				for (i = *(_QWORD*)(v12 + 24); i; i = *(_QWORD*)(i + 24))
					v12 = i;
			}
			else
			{
				v12 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v12 + 16))
				{
					do
					{
						v14 = v12;
						v12 = *(_QWORD*)(v12 + 8);
					} while (v14 == *(_QWORD*)(v12 + 16));
				}
			}
		}
		else
		{
			v12 = *(_QWORD*)(v9 + 24);
		}
	}
	v15 = *(_DWORD*)(v12 + 32);
	v16 = *a3;
	if (v15 >= *a3 && (v16 < v15 || *(_DWORD*)(v12 + 36) >= a3[1]))
	{
		*(_QWORD*)a2 = v12;
		result = a2;
		*(_BYTE*)(a2 + 8) = 0;
		return result;
	}
	if (v9 == v3 || (v18 = *(_DWORD*)(v9 + 32), v16 < v18) || v18 >= v16 && a3[1] < *(_DWORD*)(v9 + 36))
	{
		v20 = sub_14054E8E0(v12, (__int64)a3);
		*(_QWORD*)(v9 + 16) = v20;
		v22 = *(_QWORD*)(a1 + 8);
		if (v9 == v22)
		{
			*(_QWORD*)(v22 + 8) = v20;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v20;
		}
		else if (v9 == *(_QWORD*)(v22 + 16))
		{
			*(_QWORD*)(v22 + 16) = v20;
		}
	}
	else
	{
		v19 = sub_14054E8E0(v12, (__int64)a3);
		*(_QWORD*)(v9 + 24) = v19;
		v20 = v19;
		v21 = *(_QWORD*)(a1 + 8);
		if (v9 == *(_QWORD*)(v21 + 24))
			*(_QWORD*)(v21 + 24) = v20;
	}
	*((_QWORD*)v20 + 1) = v9;
	*((_QWORD*)v20 + 2) = 0i64;
	*((_QWORD*)v20 + 3) = 0i64;
	sub_1400081C0((__int64)v20, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*(_QWORD*)a2 = v20;
LABEL_36:
	*(_BYTE*)(a2 + 8) = 1;
	return a2;
}
// 14054E7CB: conditional instruction was optimized away because r8.8==0

