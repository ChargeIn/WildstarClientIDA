//----- (00000001404FB070) ----------------------------------------------------
__int64 __fastcall sub_1404FB070(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64* v5; // rbp
	_DWORD* v6; // rax
	int v7; // esi
	unsigned int v8; // r15d
	_DWORD* v9; // rax
	unsigned int v10; // eax
	int v11; // r15d
	_DWORD* v12; // rcx

	result = sub_1404F87C0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = *(_QWORD*)(result + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		v5 = *(__int64**)(v3 + 2168);
		if (v5)
		{
			v6 = (_DWORD*)(a1[3] + 16i64);
			v7 = 0;
			if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
				v8 = 0;
			else
				v8 = sub_140056D60(a1, 2u);
			v9 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
				v10 = 0;
			else
				v10 = sub_140056D60(a1, 3u);
			v11 = sub_14002EC40(v3 + 2336, v8, v10);
			if (v11)
			{
				sub_14002F5D0(v3 + 2336, v5, *(_QWORD*)(v3 + 2160));
				sub_14002FE90(v3 + 2336, (__int64)v5);
				sub_140030080(v3 + 2336, (__int64)v5);
			}
			v12 = (_DWORD*)a1[2];
			v12[2] = 1;
			LOBYTE(v7) = v11 != 0;
			result = 1i64;
			*v12 = v7;
			a1[2] += 16i64;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

