//----- (00000001406D6CA0) ----------------------------------------------------
__int64 __fastcall sub_1406D6CA0(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // rax
	__int64 v6; // rbp
	_DWORD* v7; // rcx
	_DWORD* v9; // rax
	__int64** v10; // rax
	__int64** v11; // rsi
	_DWORD* v12; // rcx
	unsigned __int16 v13; // bx
	_QWORD* v14; // rax
	__int64* v15; // rcx
	__int64 v16; // r9
	__int64 v17; // r8
	int v18; // eax
	__int64 v19; // rdx
	_DWORD* v20; // rax
	__int64 v21; // [rsp+30h] [rbp-28h] BYREF
	__int64 v22; // [rsp+38h] [rbp-20h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = sub_1406D5FA0(a1);
	if (v6)
	{
		v9 = (_DWORD*)(a1[3] + 16i64);
		if (((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
			&& (v10 = (__int64**)sub_140056AB0(a1, 2u), (v11 = v10) != 0i64)
			&& *v10
			&& **v10)
		{
			v12 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
				v13 = 1;
			else
				v13 = sub_140056D60(a1, 3u);
			v14 = sub_14018EFA0(&v21, (__int64)L"%d", v13);
			v15 = *v11;
			v16 = v14[1];
			if (*v11)
				v17 = *v15;
			else
				v17 = 0i64;
			v18 = *(_DWORD*)(v17 + 32);
			if (v18 < 300)
				v19 = *(unsigned __int8*)(v17 + 36) | ((((unsigned __int64)v13 << 8) | (unsigned __int8)v18) << 8);
			else
				v19 = -1i64;
			if (v15 && *((_DWORD*)v15 + 296))
				v1 = v15[1];
			sub_1406D4D50(v6, 1, (int*)&qword_140B3C258, *(__m128i**)(v1 + 488), v19, v16);
			if (v22)
				sub_14018B900(v22, 0);
			return 0i64;
		}
		else
		{
			v20 = (_DWORD*)a1[2];
			*v20 = 0;
			v20[2] = 1;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		v7 = (_DWORD*)a1[2];
		*v7 = 0;
		v7[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B3BBF0: using guessed type wchar_t aD_70[3];
// 140B3C258: using guessed type __int64 qword_140B3C258;
// 140C63650: using guessed type __int64 qword_140C63650;

