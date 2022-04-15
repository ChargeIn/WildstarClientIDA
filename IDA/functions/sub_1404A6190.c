//----- (00000001404A6190) ----------------------------------------------------
__int64 __fastcall sub_1404A6190(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	unsigned int v8; // edx
	__int64 v9; // r10
	__int64 v10; // r11
	float v11; // xmm1_4
	__int64 v12; // rcx
	float v13; // xmm1_4
	__int64 v14; // rax
	__int64 v15; // rcx
	float v16; // xmm1_4
	__int64 result; // rax
	unsigned int v18; // eax
	float* v19; // rcx
	unsigned int v20; // edx
	__int64 v21; // [rsp+30h] [rbp+8h]
	__int64 v22; // [rsp+30h] [rbp+8h]

	v4 = *(_QWORD*)(qword_140C659A8 + 56);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v21 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v21 = *(_QWORD*)(qword_140C659A8 + 56);
	if (v21 != v4 && *(_QWORD*)(v21 + 40) && a3 <= 4)
	{
		v7 = sub_14079D570(v5, a2);
		v11 = *(float*)(v10 + 8);
		v12 = v7;
		if (!*(_DWORD*)(v10 + 32) && *(_DWORD*)(v10 + 36))
			v11 = *(float*)(v10 + 12) - v11;
		v13 = (float)(v11 / *(float*)(v10 + 12)) * 100.0;
		if (a3 == 4)
		{
			v14 = v4;
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < v8)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v14 = v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			if (v14 == v4 || (v22 = v14, v8 < *(_DWORD*)(v14 + 32)))
				v22 = v4;
			if (v22 != v4)
			{
				v15 = *(_QWORD*)(v22 + 40);
				if (v15)
				{
					v16 = *(float*)(v15 + 8);
					result = 1i64;
					if (*(_DWORD*)(v15 + 36))
					{
						if (v16 == 0.0)
							return result;
					}
					else if (v16 == *(float*)(v15 + 12))
					{
						return result;
					}
				}
			}
		}
		else
		{
			v18 = 0;
			v19 = (float*)(v12 + 28);
			v20 = 4;
			while (*v19 != 0.0)
			{
				if (v13 <= *v19)
				{
					v20 = v18;
					break;
				}
				++v18;
				++v19;
				if (v18 >= 3)
					break;
			}
			if (a3 >= v18 && a3 <= v20)
				return 1i64;
		}
	}
	return 0i64;
}
// 1404A62D8: conditional instruction was optimized away because r8d.4!=0
// 1404A621E: variable 'v10' is possibly undefined
// 1404A625A: variable 'v9' is possibly undefined
// 1404A6264: variable 'v8' is possibly undefined
// 140C659A8: using guessed type __int64 qword_140C659A8;

