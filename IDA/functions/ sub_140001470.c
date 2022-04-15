//----- (0000000140001470) ----------------------------------------------------
__int64 __fastcall sub_140001470(_QWORD* a1)
{
	__int64 v2; // rbx
	_DWORD* v3; // rax
	__int64 v4; // rax
	_QWORD* v5; // rsi
	_DWORD* v6; // rax
	int v7; // edi
	__int64 v8; // rcx

	v2 = sub_140001320(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if (((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
			&& (v4 = sub_140056AB0(a1, 2u)) != 0)
		{
			v5 = *(_QWORD**)(*(_QWORD*)v4 + 16i64);
		}
		else
		{
			v5 = 0i64;
		}
		v6 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v7 = 1;
		else
			v7 = sub_140056D60(a1, 3u);
		if (v5)
		{
			if (v2 != -1056)
			{
				*(_QWORD*)(v2 + 1056) = *v5;
				if (*v5)
					(**(void(__fastcall***)(_QWORD)) * v5)(*v5);
			}
			*(_BYTE*)(v2 + 1068) = 0;
		}
		else
		{
			v8 = *(_QWORD*)(v2 + 1056);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(v2 + 1056) = 0i64;
			}
			*(_BYTE*)(v2 + 1068) = 1;
		}
		*(_DWORD*)(v2 + 1064) = v7;
		sub_140001070(v2);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

