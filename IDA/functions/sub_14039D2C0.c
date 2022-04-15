#include "../winhttp.h"

//----- (000000014039D2C0) ----------------------------------------------------
__int64 __fastcall sub_14039D2C0(__m128* a1, int a2)
{
	__int64 result; // rax
	__int64 v5; // rax
	__m128* v6; // rsi
	__int64 v7; // rbx
	unsigned __int64 v8; // rcx
	int v9; // r14d
	unsigned int v10; // r15d
	unsigned __int64 v11; // rax
	unsigned int v12; // ecx
	__int64 v13; // rax
	float v14; // xmm2_4
	__int64 v15; // r9
	int(__fastcall * v16)(__m128*, __int64); // rax
	unsigned __int64 v17; // rax
	unsigned int v18; // edx
	int v19; // [rsp+28h] [rbp-40h]
	__int32 v20; // [rsp+70h] [rbp+8h] BYREF
	float v21; // [rsp+80h] [rbp+18h] BYREF

	result = sub_1403AD600(a1[7].m128_i64[1]);
	if ((_DWORD)result)
	{
		v5 = sub_1403D90D0(qword_140C65898, a2);
		v6 = (__m128*)v5;
		if (v5)
		{
			v7 = *(_QWORD*)(v5 + 6408);
			if (*(_BYTE*)(v7 + 4) && *(_QWORD*)(v7 + 64))
			{
				if (*(_DWORD*)v7 == 101)
					return 2147500037i64;
				v8 = a1[1816].m128_u64[1];
				if (v8 && (*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v8 + 112i64))(v8) == a2)
				{
					return 2147500037i64;
				}
				else
				{
					v9 = 0;
					v10 = 0;
					if (*(_DWORD*)v7 == 77)
					{
						v11 = a1[7].m128_u64[1];
						v12 = v11 ? *(_DWORD*)(v11 + 220) : 23;
						v13 = sub_1401F31E0(v12);
						if (v13)
							v10 = *(_DWORD*)(v13 + 84);
					}
					v14 = *(float*)(v7 + 16);
					if (v14 <= 0.0)
						v14 = 5.0;
					if (sub_1403EBE80((__int64)a1, v6, v14, &v21, (float*)&v20, v10))
					{
						v16 = *(int(__fastcall**)(__m128*, __int64))(v7 + 64);
						if (v16 && v16(v6, v7) >= 0)
						{
							if (*(_BYTE*)(v7 + 13))
								sub_1403DD1C0((__int64)a1, a2);
							v17 = v6[1].m128_u64[1];
							if (v17)
							{
								v18 = *(_DWORD*)(v17 + 368);
								if (v18)
									sub_14049AA10(qword_140C65990, v18);
							}
							if (a1[1803].m128_i32[2])
								sub_1405598D0((__int64)&a1[1803]);
						}
						return 0i64;
					}
					else if (*(_BYTE*)(v7 + 9))
					{
						LOBYTE(v9) = *(_DWORD*)v7 == 77;
						return sub_1405592F0(a1 + 1803, (__int64)v6, 3, v15, v20, v19, v9);
					}
					else
					{
						return 2147500037i64;
					}
				}
			}
			else
			{
				return 0i64;
			}
		}
		else
		{
			return 2147500037i64;
		}
	}
	return result;
}
// 14039D403: variable 'v15' is possibly undefined
// 14039D403: variable 'v19' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

