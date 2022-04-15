#include "../winhttp.h"

//----- (00000001404B92A0) ----------------------------------------------------
__m128* __fastcall sub_1404B92A0(__int64 a1, unsigned int a2, int a3, int a4)
{
	__m128* result; // rax
	__int64 v7; // rcx
	__m128* v8; // rbp
	unsigned int* v9; // rdi
	unsigned int v10; // ebx
	int v11; // esi
	__int64 v12; // rdi
	__int64 v13; // rcx
	_QWORD* v14; // rax
	unsigned __int64 v15; // rax
	int v16; // ecx
	__int64 v17; // rax
	__int64 v18; // rcx
	int v19; // eax
	int v20; // edx
	_QWORD* v21; // rax
	int v22; // [rsp+20h] [rbp-98h] BYREF
	__int64 v23; // [rsp+28h] [rbp-90h]
	int v24; // [rsp+30h] [rbp-88h] BYREF
	int v25; // [rsp+38h] [rbp-80h]
	int v26; // [rsp+3Ch] [rbp-7Ch]
	int v28; // [rsp+D8h] [rbp+20h] BYREF

	v28 = a4;
	result = (__m128*)sub_1405B1510(&qword_140C7DFB0);
	v8 = result;
	if (result)
	{
		result = (__m128*)sub_1404C9B90(v7, a2);
		v9 = (unsigned int*)result;
		if (result)
		{
			v10 = 0;
			if (!a3)
			{
				if (!result[40].m128_i32[1] || !result[40].m128_i32[2])
					goto LABEL_23;
				if (_mm_movemask_ps(_mm_cmpneq_ps(result[9], result[32]))
					|| result[10].m128_u64[0] != result[33].m128_u64[0]
					|| result[10].m128_i32[2] != result[33].m128_i32[2]
					|| result[33].m128_f32[3] != result[10].m128_f32[3]
					|| (v11 = 0, result[19].m128_i32[0]))
				{
					v11 = 1;
				}
				(*(void(__fastcall**)(__m128*))(result->m128_u64[0] + 96))(result);
				if (!v9[161] || !v9[162])
				{
				LABEL_23:
					sub_1403CC530(qword_140C65898, 0x67u);
					return 0i64;
				}
				if (!v11 && v9[168] == v9[169])
				{
					v12 = qword_140C659F8;
					v13 = *(_QWORD*)(qword_140C659F8 + 200);
					if (v13)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
						*(_QWORD*)(v12 + 200) = 0i64;
					}
					v14 = (_QWORD*)sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
					if (v14)
						sub_1405AFE10(v14);
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingMyResidenceDecorChanged", byte_1409EBF4C, a2);
					return 0i64;
				}
			}
			v15 = v8[14].m128_u64[1];
			if (!v15 || !v8[17].m128_i32[0])
				v15 = 0i64;
			v16 = *(_DWORD*)(v15 + 184);
			if ((v16 & 0xFFFFFFFA) != 0)
				return 0i64;
			if (v16 == 4)
				return 0i64;
			v22 = 0;
			v23 = 0i64;
			sub_1407E4830(&v24, 0i64, 0x58ui64);
			v17 = sub_140203DA0(v9[24]);
			if (!v17)
				return 0i64;
			v18 = (unsigned int)(*(_DWORD*)(v17 + 8) - 12);
			if (*(_DWORD*)(v17 + 8) == 12)
			{
				v19 = 4;
			}
			else
			{
				v18 = (unsigned int)(*(_DWORD*)(v17 + 8) - 22);
				if (*(_DWORD*)(v17 + 8) == 22)
				{
					v19 = 6;
				}
				else
				{
					v18 = (unsigned int)(*(_DWORD*)(v17 + 8) - 53);
					if (*(_DWORD*)(v17 + 8) == 53)
					{
						v19 = 7;
					}
					else
					{
						v18 = (unsigned int)(*(_DWORD*)(v17 + 8) - 54);
						if (*(_DWORD*)(v17 + 8) == 54)
							v19 = 8;
						else
							v19 = 2;
					}
				}
			}
			if (a3)
				v19 = 0;
			v25 = v19;
			sub_1404B89A0(v18, (__int64)&v22, (__int64)v9, &v8->m128_u64[1]);
			if (v25 == 8)
			{
				if (v9[76])
				{
					v20 = -1;
					if ((_DWORD)qword_140C4DF20)
					{
						v21 = (_QWORD*)qword_140C4DF18;
						while (*v21)
						{
							++v10;
							++v21;
							if (v10 >= (unsigned int)qword_140C4DF20)
							{
								v26 = -1;
								goto LABEL_54;
							}
						}
						v20 = v10;
					}
					v26 = v20 | 0x10000;
				}
			}
			else if (v25 == 7 && qword_140C65B98 && *(_DWORD*)(qword_140C65B98 + 268) == 4)
			{
				++* (_DWORD*)(qword_140C65B98 + 408);
			}
		LABEL_54:
			sub_1404BC7E0((__int64*)(a1 + 680), &v22, 1i64);
			sub_140003460((__int64*)(a1 + 760), &v28);
			if (a3)
				sub_1404B8440(a1, v9[124], 1);
			return (__m128*)1;
		}
	}
	return result;
}
// 1404B92EB: variable 'v7' is possibly undefined
// 1409EBF4C: using guessed type _BYTE byte_1409EBF4C[24];
// 140C4DF18: using guessed type __int64 qword_140C4DF18;
// 140C4DF20: using guessed type __int64 qword_140C4DF20;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

