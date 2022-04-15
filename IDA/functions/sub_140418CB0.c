//----- (0000000140418CB0) ----------------------------------------------------
__int64 __fastcall sub_140418CB0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64** v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	int v6; // eax
	BOOL* v7; // rcx
	BOOL v8; // edx
	__int64 result; // rax
	_DWORD* v10; // rax

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = (__int64**)sub_140056AB0(a1, 1u)) != 0i64
		&& *v3
		&& (v4 = **v3) != 0)
	{
		v5 = *(_QWORD*)(v4 + 64);
		if ((*(_BYTE*)(v5 + 336) & 8) != 0
			|| (*(_BYTE*)(v5 + 332) & 0xC0) != 0
			|| *(_DWORD*)(v5 + 424)
			|| (*(_DWORD*)(v5 + 340) & 0x80) == 0)
		{
			v6 = 1;
		}
		else
		{
			v6 = *(_DWORD*)(v4 + 128) & 1;
		}
		v7 = (BOOL*)a1[2];
		v8 = v6 != 0;
		v7[2] = 1;
		result = 1i64;
		*v7 = v8;
		a1[2] += 16i64;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
		v10[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

