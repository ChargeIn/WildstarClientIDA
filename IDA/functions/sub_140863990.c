//----- (0000000140863990) ----------------------------------------------------
__int64 __fastcall sub_140863990(__int64 a1)
{
	__int64 v1; // rbp
	__int64 v2; // rdi
	int v3; // ecx
	unsigned int i; // edx
	unsigned int v5; // ecx
	__int64 v6; // rax
	_DWORD* v7; // rbx
	_DWORD* v8; // rsi
	float v9; // xmm3_4
	__int64 result; // rax
	float v11; // xmm3_4
	float v12; // xmm1_4
	float v13; // xmm2_4
	int v14; // ecx
	unsigned int j; // edx
	unsigned int v16; // r8d
	__int64 v17; // rax
	__int64 v18; // rcx
	__int128 v19; // xmm1
	unsigned __int64 v20; // rcx
	_QWORD* v21; // rax
	__int64 v22; // rcx
	int v23[2]; // [rsp+30h] [rbp-108h] BYREF
	_QWORD v24[7]; // [rsp+38h] [rbp-100h] BYREF
	__m128 v25[12]; // [rsp+70h] [rbp-C8h] BYREF

	v1 = 0i64;
	v2 = a1;
	v3 = *(_DWORD*)(a1 + 768);
	for (i = 0; v3; v3 &= v3 - 1)
		++i;
	v5 = 0;
	do
	{
		v6 = v5++;
		v6 <<= 6;
		*(_OWORD*)(v6 + v2 + 32) = *(_OWORD*)(v6 + v2);
		*(_OWORD*)(v6 + v2 + 48) = *(_OWORD*)(v6 + v2 + 16);
	} while (v5 < i);
	v7 = (_DWORD*)(v2 + 796);
	v8 = (_DWORD*)(v2 + 812);
	v9 = *(float*)(v2 + 796);
	if (v9 != *(float*)(v2 + 812)
		|| *(float*)(v2 + 816) != *(float*)(v2 + 800)
		|| *(float*)(v2 + 820) != *(float*)(v2 + 804)
		|| (result = *(unsigned __int8*)(v2 + 824), *(_BYTE*)(v2 + 808) != (_BYTE)result))
	{
		v11 = (float)(v9 + 100.0) * 0.0049999999;
		if (v11 >= 0.0)
		{
			if (v11 > 1.0)
				v11 = 1.0;
		}
		else
		{
			v11 = 0.0;
		}
		v12 = (float)(*(float*)(v2 + 800) + 100.0) * 0.0049999999;
		if (v12 >= 0.0)
		{
			if (v12 > 1.0)
				v12 = 1.0;
		}
		else
		{
			v12 = 0.0;
		}
		v13 = *(float*)(v2 + 804) * 0.0099999998;
		if ((*(_BYTE*)(v2 + 776) & 1) == 0)
			v13 = 1.0;
		sub_1408642D0(v11, v12, v13, *(_BYTE*)(v2 + 808), *(_DWORD*)(v2 + 768), v25);
		v14 = *(_DWORD*)(v2 + 768);
		for (j = 0; v14; v14 &= v14 - 1)
			++j;
		v16 = 0;
		do
		{
			v17 = v16;
			v18 = v16++;
			v17 *= 32i64;
			v18 <<= 6;
			v19 = *(__int128*)((char*)&v25[1] + v17);
			*(__m128*)(v18 + v2) = *(__m128*)((char*)v25 + v17);
			*(_OWORD*)(v18 + v2 + 16) = v19;
		} while (v16 < j);
		if ((*(_BYTE*)(v2 + 768) & 8) != 0)
		{
			v20 = (unsigned __int64)(j - 1) << 6;
			*(_OWORD*)(v20 + v2) = 0i64;
			*(_OWORD*)(v20 + v2 + 16) = 0i64;
			*(_DWORD*)(v20 + v2 + 20) = 1065353216;
		}
		if ((*(_BYTE*)(v2 + 776) & 2) == 0 || !*(_DWORD*)(v2 + 772))
			goto LABEL_33;
		v23[0] = *(_DWORD*)(v2 + 772);
		v23[1] = *(_DWORD*)(v2 + 768);
		if (j)
		{
			v21 = v24;
			v1 = j;
			v22 = j;
			do
			{
				*v21 = v2;
				v2 += 64i64;
				++v21;
				--v22;
			} while (v22);
		}
		if ((unsigned int)v1 < 6)
			memset(&v24[v1], 0, 8i64 * (unsigned int)(6 - v1));
		result = sub_14083B200(qword_140C61B88, v23);
		if (!(_BYTE)result)
		{
		LABEL_33:
			*v8 = *v7;
			v8[1] = v7[1];
			v8[2] = v7[2];
			result = (unsigned int)v7[3];
			v8[3] = result;
		}
	}
	return result;
}
// 140C61B88: using guessed type __int64 qword_140C61B88;

