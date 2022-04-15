#include "../winhttp.h"

//----- (00000001402B5460) ----------------------------------------------------
__int64 __fastcall sub_1402B5460(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	int v5; // r13d
	__int64 v6; // r8
	__int64 v7; // rsi
	int v8; // ecx
	__int64 v9; // r10
	int v10; // r9d
	__int64* v11; // rcx
	__int64 v12; // rsi
	__int64* v13; // rax
	__int64 v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdi
	int* v17; // rbp
	unsigned __int64 v18; // r15
	int* i; // rdi
	unsigned __int64 v20; // r11
	unsigned __int64 v21; // r10
	int* v22; // r9
	int* v23; // rax
	char* v24; // rdx
	int v25; // r8d
	unsigned __int64 v26; // r9
	int v27; // [rsp+20h] [rbp-88h]
	unsigned __int64 v28; // [rsp+30h] [rbp-78h] BYREF
	unsigned __int64 v29; // [rsp+38h] [rbp-70h] BYREF
	__int64 v30; // [rsp+40h] [rbp-68h] BYREF
	__int64 v31; // [rsp+48h] [rbp-60h] BYREF
	int v32[6]; // [rsp+50h] [rbp-58h] BYREF

	LODWORD(v28) = 0;
	result = sub_1402B5040(a1, (__int64)v32, &v28);
	if ((int)result >= 0)
	{
		if (*(_QWORD*)a2)
		{
			sub_14018B900(*(_QWORD*)a2, 0);
			*(_QWORD*)a2 = 0i64;
		}
		v5 = v28;
		*(_QWORD*)(a2 + 8) = 0i64;
		v6 = *(_QWORD*)(a1 + 8);
		if ((v5 & 0x20000) != 0)
		{
			v7 = 3i64 * *(_QWORD*)a1;
		}
		else
		{
			v8 = *(_DWORD*)(a1 + 16);
			v9 = *(_QWORD*)a1;
			if (v8 < 70 || v8 > 84 && (unsigned int)(v8 - 94) > 5)
			{
				if ((unsigned int)(v8 - 68) > 1)
				{
					v14 = sub_1402B2300(v8);
					v7 = (unsigned __int64)(v15 * v14 + 7) >> 3;
				}
				else
				{
					v7 = 4 * ((unsigned __int64)(v9 + 1) >> 1);
				}
			}
			else
			{
				if ((unsigned int)(v8 - 70) <= 2 || (v10 = 16, (unsigned int)(v8 - 79) <= 2))
					v10 = 8;
				v11 = (__int64*)&v28;
				v28 = (unsigned __int64)(v9 + 3) >> 2;
				if (v28 <= 1)
					v11 = &v31;
				v31 = 1i64;
				v29 = (unsigned __int64)(v6 + 3) >> 2;
				v12 = *v11;
				v30 = 1i64;
				v7 = v10 * v12;
				v13 = (__int64*)&v29;
				if (v29 <= 1)
					v13 = &v30;
				v6 = *v13;
			}
		}
		result = sub_1402B2750((__int64*)a2, v7 * v6 + 18);
		if ((int)result >= 0)
		{
			v16 = *(_QWORD*)a2;
			sub_1407E15B8(*(int**)a2, *(_QWORD*)(a2 + 8), v32, 0x12ui64);
			v17 = *(int**)(a1 + 40);
			v18 = 0i64;
			for (i = (int*)(v16 + 18); v18 < *(_QWORD*)(a1 + 8); i = (int*)((char*)i + v7))
			{
				if ((v5 & 0x20000) != 0)
				{
					v20 = *(_QWORD*)(a1 + 24);
					v21 = 0i64;
					v22 = v17;
					v23 = i;
					if (v20)
					{
						v24 = (char*)i + 2;
						do
						{
							v25 = *v22++;
							if (v24 > (char*)i + v7)
								break;
							*(_BYTE*)v23 = v25;
							v21 += 4i64;
							v23 = (int*)((char*)v23 + 3);
							*((_BYTE*)v23 - 2) = BYTE1(v25);
							*((_BYTE*)v23 - 1) = BYTE2(v25);
							v24 += 3;
						} while (v21 < v20);
					}
				}
				else
				{
					v26 = *(_QWORD*)(a1 + 24);
					v27 = *(_DWORD*)(a1 + 16);
					if ((v5 & 0x10000) != 0)
						sub_1402C2E80(i, v7, v17, v26, v27, 0);
					else
						sub_1402C2A00((__int64)i, v7, v17, v26, v27, 0);
				}
				v17 = (int*)((char*)v17 + *(_QWORD*)(a1 + 24));
				++v18;
			}
			return 0i64;
		}
	}
	return result;
}
// 1402B559E: variable 'v15' is possibly undefined
// 1402B55AA: variable 'v6' is possibly undefined
// 1402B5460: using guessed type int var_58[6];

