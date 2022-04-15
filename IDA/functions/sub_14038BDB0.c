#include "../winhttp.h"

//----- (000000014038BDB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14038BDB0(__int64 a1)
{
	unsigned __int64 result; // rax
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	int** v5; // rdx
	__int64 v6; // rcx
	int v7; // r8d
	int v8; // r9d
	int v9; // ecx
	unsigned int v10; // eax
	unsigned int v11; // ebx
	__int64 v12; // rax
	unsigned __int64 v13; // kr00_8
	bool v14; // cf
	__int64 v15; // rax
	int v16; // ecx
	int* v17; // rdx
	int v18; // edx
	unsigned int v19; // ebp
	__int64 v20; // rbx
	__int64 v21; // rdi
	__int64* v22; // rdi
	__int64** v23; // rcx
	__int64 v24; // rax
	int** v25; // rcx
	int j; // [rsp+40h] [rbp+8h] BYREF
	int i; // [rsp+44h] [rbp+Ch]
	__int64 v28; // [rsp+48h] [rbp+10h] BYREF

	if (*(_QWORD*)(a1 + 924) != *(_QWORD*)(a1 + 832)
		|| (result = *(_QWORD*)(a1 + 932), result != *(_QWORD*)(a1 + 840)))
	{
		v3 = *(_QWORD*)(a1 + 944);
		if (v3)
			sub_1403762E0(v3);
		*(_QWORD*)(a1 + 944) = 0i64;
		*(_DWORD*)(a1 + 924) = *(_DWORD*)(a1 + 832);
		*(_DWORD*)(a1 + 928) = *(_DWORD*)(a1 + 836);
		*(_DWORD*)(a1 + 932) = *(_DWORD*)(a1 + 840);
		*(_DWORD*)(a1 + 936) = *(_DWORD*)(a1 + 844);
		v4 = *(_QWORD**)(a1 + 1024);
		if (v4)
			*v4 = *(_QWORD*)(a1 + 1032);
		v5 = (int**)(a1 + 1032);
		v6 = *(_QWORD*)(a1 + 1032);
		if (v6)
			*(_QWORD*)(v6 + 1024) = *(_QWORD*)(a1 + 1024);
		*(_QWORD*)(a1 + 1024) = 0i64;
		*v5 = 0i64;
		v7 = *(_DWORD*)(a1 + 924);
		result = *(unsigned int*)(a1 + 932);
		if (v7 < (int)result)
		{
			v8 = *(_DWORD*)(a1 + 928);
			v9 = *(_DWORD*)(a1 + 936);
			if (v8 < v9)
			{
				v10 = (v9 - v8) * (result - v7);
				if (v10 >= 0x100)
				{
					v25 = (int**)(*(_QWORD*)(a1 + 16) + 5256i64);
					*(_QWORD*)(a1 + 1024) = v25;
					*v5 = *v25;
					*v25 = (int*)a1;
					result = (unsigned __int64)*v5;
					if (*v5)
						*(_QWORD*)(result + 1024) = v5;
				}
				else
				{
					v11 = v10;
					v13 = v10;
					v12 = 32i64 * v10;
					if (!is_mul_ok(v13, 0x20ui64))
						v12 = -1i64;
					v14 = __CFADD__(v12, 8i64);
					v15 = v12 + 8;
					if (v14)
						v15 = -1i64;
					result = (unsigned __int64)sub_14018B280(v15, 0);
					if (result)
					{
						v16 = v11 - 1;
						*(_DWORD*)result = v11;
						v17 = (int*)(result + 8);
						if ((int)(v11 - 1) >= 0)
						{
							result += 24i64;
							do
							{
								--v16;
								*(_QWORD*)result = 0i64;
								*(_QWORD*)(result + 8) = 0i64;
								*(_QWORD*)(result - 16) = 0i64;
								result += 32i64;
							} while (v16 >= 0);
						}
					}
					else
					{
						v17 = 0i64;
					}
					*(_QWORD*)(a1 + 944) = v17;
					v18 = *(_DWORD*)(a1 + 928);
					v19 = 0;
					for (i = v18; v18 < *(_DWORD*)(a1 + 936); i = v18)
					{
						result = *(unsigned int*)(a1 + 924);
						for (j = result; (int)result < *(_DWORD*)(a1 + 932); j = result)
						{
							v20 = 0i64;
							v28 = 0i64;
							if ((int)result >= (int)qword_140C44530
								&& (int)result < dword_140C44538
								&& v18 >= SHIDWORD(qword_140C44530)
								&& v18 < dword_140C4453C)
							{
								sub_14035BEC0(*(_QWORD*)(a1 + 16), &j, &v28);
								v20 = v28;
							}
							v21 = v19++;
							v22 = (__int64*)(*(_QWORD*)(a1 + 944) + 32 * v21);
							*v22 = v20;
							v22[1] = a1;
							(**(void(__fastcall***)(__int64))v20)(v20);
							v23 = (__int64**)(*v22 + 64);
							if (!v22[2])
							{
								v22[2] = (__int64)v23;
								v22[3] = (__int64)*v23;
								*v23 = v22;
								v24 = v22[3];
								if (v24)
									*(_QWORD*)(v24 + 16) = v22 + 3;
							}
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
							v18 = i;
							result = (unsigned int)(j + 1);
						}
						++v18;
					}
				}
			}
		}
	}
	return result;
}
// 140C44530: using guessed type __int64 qword_140C44530;
// 140C44538: using guessed type int dword_140C44538;
// 140C4453C: using guessed type int dword_140C4453C;

