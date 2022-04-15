//----- (0000000140571C60) ----------------------------------------------------
__int64 __fastcall sub_140571C60(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	unsigned int v3; // r10d
	__int64 v4; // r11
	int v5; // edx
	int v6; // edx
	__int64 v7; // rbx
	int v8; // esi
	__m128 v9; // xmm6
	__int64 v10; // rdi
	__int64 v11; // rcx
	__m128* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // [rsp+60h] [rbp+8h]

	result = qword_140C65898;
	if (!*(_QWORD*)(qword_140C65898 + 25744))
		return result;
	result = sub_140722000(a1, a2);
	if (!result)
		return result;
	v5 = *(_DWORD*)(*(_QWORD*)(result + 16) + 8i64);
	if (v5)
	{
		v6 = v5 - 1;
		if (!v6)
		{
			v7 = *(_QWORD*)(v4 + 136);
			v8 = 0;
			v9 = 0i64;
			result = *(_QWORD*)(v7 + 8);
			v10 = v7;
			v11 = result;
			if (result)
			{
				do
				{
					if (v3 >= *(_DWORD*)(v11 + 32))
					{
						v11 = *(_QWORD*)(v11 + 24);
					}
					else
					{
						v10 = v11;
						v11 = *(_QWORD*)(v11 + 16);
					}
				} while (v11);
				do
				{
					if (*(_DWORD*)(result + 32) < v3)
					{
						result = *(_QWORD*)(result + 24);
					}
					else
					{
						v7 = result;
						result = *(_QWORD*)(result + 16);
					}
				} while (result);
			}
			if (v7 != v10)
			{
				do
				{
					v12 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(v7 + 36));
					if (v12)
					{
						++v8;
						v9 = _mm_add_ps(v12[286], v9);
					}
					v13 = *(_QWORD*)(v7 + 24);
					if (v13)
					{
						v7 = *(_QWORD*)(v7 + 24);
						for (result = *(_QWORD*)(v13 + 16); result; result = *(_QWORD*)(result + 16))
							v7 = result;
					}
					else
					{
						for (result = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(result + 24); result = *(_QWORD*)(result + 8))
							v7 = result;
						if (*(_QWORD*)(v7 + 24) != result)
							v7 = result;
					}
				} while (v7 != v10);
				if (v8)
					return qword_140C65898;
			}
			return result;
		}
		if (v6 != 1)
			return qword_140C65898;
	}
	v14 = *(_QWORD*)(v4 + 168);
	v15 = v14;
	v16 = *(_QWORD*)(v14 + 8);
	while (v16)
	{
		if (*(_DWORD*)(v16 + 32) < v3)
		{
			v16 = *(_QWORD*)(v16 + 24);
		}
		else
		{
			v15 = v16;
			v16 = *(_QWORD*)(v16 + 16);
		}
	}
	if (v15 == v14 || (v17 = v15, v3 < *(_DWORD*)(v15 + 32)))
		v17 = *(_QWORD*)(v4 + 168);
	result = v17;
	if (v17 != v14)
	{
		result = sub_14024B980(*(_DWORD*)(v17 + 36));
		if (result)
			return qword_140C65898;
	}
	return result;
}
// 140571D2B: conditional instruction was optimized away because rax.8!=0
// 140571CF4: variable 'v4' is possibly undefined
// 140571D14: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

