#include "../winhttp.h"

//----- (00000001403EBCD0) ----------------------------------------------------
__int64 __fastcall sub_1403EBCD0(__int64 a1, __m128* a2)
{
	unsigned __int64 v2; // rdi
	float v6; // xmm6_4
	float v7; // xmm8_4
	unsigned int v8; // eax
	__int64 v9; // rbx
	unsigned int v10; // r14d
	BOOL v11; // eax
	__int64 v12; // rcx
	wchar_t* v13; // rdx
	__int64 v14; // rcx

	v2 = a2[400].m128_u64[1];
	if (!*(_BYTE*)(v2 + 4) || !*(_QWORD*)(v2 + 64) || (unsigned int)sub_14046C6A0((__int64)a2))
		return 0i64;
	v6 = *(float*)(v2 + 16);
	if (v6 <= 0.0)
		v6 = 5.0;
	v7 = 0.0;
	v8 = sub_14046C580((__int64)a2, *(_QWORD*)(a1 + 120));
	v9 = 0i64;
	v10 = v8;
	if (v8)
	{
		if (!sub_1403ACD90(qword_140C65B70, v8, *(_QWORD*)(a1 + 25744)))
		{
			v11 = 0;
			goto LABEL_12;
		}
		v7 = sub_1403AD860(qword_140C65B70, v10, (__int64)a2);
		v6 = sub_1403AD8F0(qword_140C65B70, v10, (__int64)a2);
	}
	v11 = sub_1403AD690(*(__m128**)(a1 + 25744), a2, v7, v6, 0.0);
LABEL_12:
	if (!*(_BYTE*)(v2 + 12))
	{
		if (v11)
			v13 = *(wchar_t**)(v2 + 32);
		else
			v13 = *(wchar_t**)(v2 + 40);
		if (!v13)
			return v9;
		v14 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 360i64);
		return sub_1401545C0(v14, (int*)v13);
	}
	v12 = *(int*)(qword_140C65970 + 8);
	if (v11)
	{
		v13 = off_140B66828[v12];
		if (v13)
		{
			v14 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 360i64);
			return sub_1401545C0(v14, (int*)v13);
		}
	}
	else
	{
		v13 = off_140B66848[v12];
		if (v13)
		{
			v14 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 360i64);
			return sub_1401545C0(v14, (int*)v13);
		}
	}
	return v9;
}
// 140B66828: using guessed type wchar_t *off_140B66828[8];
// 140B66848: using guessed type wchar_t *off_140B66848[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65B70: using guessed type __int64 qword_140C65B70;

