//----- (0000000140177CC0) ----------------------------------------------------
__int64 __fastcall sub_140177CC0(_QWORD* a1)
{
	__int64 v2; // rbp
	__int64 v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rdi
	unsigned int* v8; // rdi
	unsigned __int64 v9; // rbx
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	int v13; // r9d
	__m128 v15; // [rsp+20h] [rbp-18h] BYREF
	char v16; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_140177AC0(a1);
	v3 = (int)sub_140056D60(a1, 2u);
	v15 = (__m128)xmmword_140B7B240;
	v4 = (int)sub_140056D60(a1, 3u);
	if (sub_140056AB0(a1, 4u))
		v15 = *(__m128*)sub_140056AB0(a1, 4u);
	v5 = *(_QWORD*)(v2 + 1040);
	if ((unsigned int)v3 >= *(_DWORD*)(v5 + 1160))
		return 0i64;
	if ((int)v4 >= 0 && (int)v4 < *(_DWORD*)(v5 + 1144) && (int)v3 >= 0 && (int)v3 < *(_DWORD*)(v5 + 1160))
	{
		v6 = *(_QWORD*)(*(_QWORD*)(v5 + 1152) + 8 * v3);
		v7 = (int)v4 >= *(_DWORD*)(v6 + 24) ? 0i64 : *(_QWORD*)(*(_QWORD*)(v6 + 16) + 8 * v4);
		if (v7)
		{
			v8 = (unsigned int*)(v7 + 160);
			v9 = (unsigned int)sub_140141F10(qword_140C63678, &v15);
			if (v8 == (unsigned int*)&v16)
			{
				v10 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v8);
				v10 = qword_140C63678;
				*v8 = v9;
				if (v9 < *(_QWORD*)(v10 + 48))
				{
					v11 = *(_QWORD*)(v10 + 40);
					v12 = 32i64 * (unsigned int)v9;
					v13 = *(_DWORD*)(v12 + v11 + 16);
					if ((unsigned int)(v13 - 1) <= 0xFFFFFFFD)
					{
						*(_DWORD*)(v12 + v11 + 16) = v13 + 1;
						sub_1401429A0(v10, v9);
						return 1i64;
					}
				}
			}
			sub_1401429A0(v10, v9);
		}
	}
	return 1i64;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140177CC0: using guessed type __m128 var_18;

