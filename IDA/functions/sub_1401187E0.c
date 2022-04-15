#include "../winhttp.h"

//----- (00000001401187E0) ----------------------------------------------------
__int64 __fastcall sub_1401187E0(_QWORD* a1)
{
	float* v2; // rdi
	_DWORD* v3; // rax
	char* v4; // r10
	char* i; // r8
	char v6; // cl
	char v7; // al
	__int64 v8; // rax
	__int64 result; // rax
	char* j; // r8
	char v11; // cl
	char v12; // al
	__int64 v13; // rax
	char* k; // r8
	char v15; // cl
	char v16; // al
	__int64 v17; // rax
	signed __int64 v18; // r9
	char v19; // cl
	char v20; // al
	__int64 v21; // rcx
	double v22; // xmm0_8

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = (char*)&unk_1409D04A6;
	else
		v4 = (char*)sub_140056BB0(a1, 2u, 0i64);
	for (i = v4; ; ++i)
	{
		v6 = *i;
		if ((unsigned __int8)(*i - 65) <= 0x19u)
			v6 += 32;
		v7 = i["a" - v4];
		if ((unsigned __int8)(v7 - 65) <= 0x19u)
			v7 += 32;
		if (v6 != v7)
			break;
		if (!*i)
		{
			v8 = a1[2];
			*(double*)v8 = v2[3];
			*(_DWORD*)(v8 + 8) = 3;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	for (j = v4; ; ++j)
	{
		v11 = *j;
		if ((unsigned __int8)(*j - 65) <= 0x19u)
			v11 += 32;
		v12 = j[(char*)L"r" - v4];
		if ((unsigned __int8)(v12 - 65) <= 0x19u)
			v12 += 32;
		if (v11 != v12)
			break;
		if (!*j)
		{
			v13 = a1[2];
			*(double*)v13 = *v2;
			*(_DWORD*)(v13 + 8) = 3;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	for (k = v4; ; ++k)
	{
		v15 = *k;
		if ((unsigned __int8)(*k - 65) <= 0x19u)
			v15 += 32;
		v16 = k[(char*)L"g" - v4];
		if ((unsigned __int8)(v16 - 65) <= 0x19u)
			v16 += 32;
		if (v15 != v16)
			break;
		if (!*k)
		{
			v17 = a1[2];
			*(double*)v17 = v2[1];
			*(_DWORD*)(v17 + 8) = 3;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	v18 = (char*)L"b" - v4;
	while (1)
	{
		v19 = *v4;
		if ((unsigned __int8)(*v4 - 65) <= 0x19u)
			v19 += 32;
		v20 = v4[v18];
		if ((unsigned __int8)(v20 - 65) <= 0x19u)
			v20 += 32;
		if (v19 != v20)
			sub_140056570(a1, 2u, "no such index");
		if (!*v4)
			break;
		++v4;
	}
	v21 = a1[2];
	result = 1i64;
	v22 = v2[2];
	*(_DWORD*)(v21 + 8) = 3;
	*(double*)v21 = v22;
	a1[2] += 16i64;
	return result;
}
// 1409D5F84: using guessed type wchar_t aR_5[2];
// 1409D601C: using guessed type wchar_t aG_2[2];
// 1409D604C: using guessed type wchar_t aB_11[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

