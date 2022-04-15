//----- (00000001406689F0) ----------------------------------------------------
__int64 __fastcall sub_1406689F0(_QWORD* a1)
{
	unsigned __int64 v2; // rbx
	__int64* v3; // r14
	_DWORD* v4; // rax
	signed int v5; // esi
	int* v6; // rcx
	unsigned __int16* v7; // rsi
	unsigned __int64* v8; // rdx
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v11; // [rsp+28h] [rbp-20h]
	int* v12; // [rsp+30h] [rbp-18h]
	int* v13; // [rsp+38h] [rbp-10h]

	v2 = -1i64;
	v3 = (__int64*)sub_140056AB0(a1, 1u);
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v5 = -1;
	else
		v5 = sub_140056D60(a1, 2u);
	if (v3 && v5 >= 0 && v5 < *(_DWORD*)(*v3 + 16))
	{
		v6 = sub_14018B280(16i64, 0);
		v11 = (unsigned __int16*)v6;
		v12 = v6;
		v13 = v6 + 4;
		if (v6)
			*(_WORD*)v6 = 0;
		sub_140551D40(*v3, v5, (__int64)&v10, 1);
		v7 = v11;
		v8 = (unsigned __int64*)sub_14018F0E0(&v10, v11)[1];
		if (v8)
		{
			do
				++v2;
			while (*((_BYTE*)v8 + v2));
			sub_140058710((__int64)a1, v8, v2);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v11)
			sub_14018B900((__int64)v11, 0);
		if (v7)
			sub_14018B900((__int64)v7, 0);
	}
	else
	{
		sub_140058710((__int64)a1, qword_1409D145F, 0i64);
	}
	return 1i64;
}
// 1409D145F: using guessed type unsigned __int64 qword_1409D145F[3];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

