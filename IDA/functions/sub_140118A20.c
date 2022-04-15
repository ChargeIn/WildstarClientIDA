//----- (0000000140118A20) ----------------------------------------------------
__int64 __fastcall sub_140118A20(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	float* v4; // rdi
	char* v5; // r10
	char* i; // r8
	char v7; // cl
	char v8; // al
	double v9; // xmm0_8
	__int64 result; // rax
	float v11; // xmm1_4
	char* j; // r8
	char v13; // cl
	char v14; // al
	double v15; // xmm0_8
	float v16; // xmm1_4
	char* k; // r8
	char v18; // cl
	char v19; // al
	double v20; // xmm0_8
	float v21; // xmm1_4
	signed __int64 v22; // r9
	char v23; // cl
	char v24; // al
	double v25; // xmm0_8
	float v26; // xmm1_4

	v2 = sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = (float*)v2;
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v5 = (char*)&unk_1409D04A7;
	else
		v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
	for (i = v5; ; ++i)
	{
		v7 = *i;
		if ((unsigned __int8)(*i - 65) <= 0x19u)
			v7 += 32;
		v8 = i[(char*)L"a" - v5];
		if ((unsigned __int8)(v8 - 65) <= 0x19u)
			v8 += 32;
		if (v7 != v8)
			break;
		if (!*i)
		{
			v9 = sub_140056C40(a1, 3u);
			result = 0i64;
			v11 = v9;
			v4[3] = v11;
			return result;
		}
	}
	for (j = v5; ; ++j)
	{
		v13 = *j;
		if ((unsigned __int8)(*j - 65) <= 0x19u)
			v13 += 32;
		v14 = j["r" - v5];
		if ((unsigned __int8)(v14 - 65) <= 0x19u)
			v14 += 32;
		if (v13 != v14)
			break;
		if (!*j)
		{
			v15 = sub_140056C40(a1, 3u);
			result = 0i64;
			v16 = v15;
			*v4 = v16;
			return result;
		}
	}
	for (k = v5; ; ++k)
	{
		v18 = *k;
		if ((unsigned __int8)(*k - 65) <= 0x19u)
			v18 += 32;
		v19 = k[(char*)L"g" - v5];
		if ((unsigned __int8)(v19 - 65) <= 0x19u)
			v19 += 32;
		if (v18 != v19)
			break;
		if (!*k)
		{
			v20 = sub_140056C40(a1, 3u);
			result = 0i64;
			v21 = v20;
			v4[1] = v21;
			return result;
		}
	}
	v22 = (char*)L"b" - v5;
	while (1)
	{
		v23 = *v5;
		if ((unsigned __int8)(*v5 - 65) <= 0x19u)
			v23 += 32;
		v24 = v5[v22];
		if ((unsigned __int8)(v24 - 65) <= 0x19u)
			v24 += 32;
		if (v23 != v24)
			sub_140056570(a1, 2u, "no such index");
		if (!*v5)
			break;
		++v5;
	}
	v25 = sub_140056C40(a1, 3u);
	result = 0i64;
	v26 = v25;
	v4[2] = v26;
	return result;
}
// 1409D6074: using guessed type wchar_t aG_3[2];
// 1409D60FC: using guessed type wchar_t aB_12[2];
// 1409D613C: using guessed type wchar_t aA_4[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

