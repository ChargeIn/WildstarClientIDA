//----- (00000001406D61F0) ----------------------------------------------------
__int64 __fastcall sub_1406D61F0(_QWORD* a1)
{
	_DWORD* v2; // rdx
	_DWORD* v4; // rax
	int v5; // eax
	__int64 v6; // rax
	int v7; // ecx
	int v8; // edx
	_DWORD* v9; // rax
	int v10; // [rsp+38h] [rbp+10h] BYREF
	int v11; // [rsp+3Ch] [rbp+14h]

	if (sub_1406D5FA0(a1))
	{
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 >= a1[2]
			|| v4 == dword_140A12138
			|| *(int*)(a1[3] + 24i64) <= 0
			|| (v5 = sub_140056D60(a1, 2u), v5 < 0))
		{
			v7 = 0;
		}
		else
		{
			v10 = BYTE1(v5);
			v11 = (unsigned __int8)v5;
			v6 = sub_1403AC780(qword_140C65898 + 160, &v10);
			v7 = 0;
			if (!v6 || (v8 = 1, (*(_DWORD*)(*(_QWORD*)(v6 + 64) + 340i64) & 0x100) == 0))
				v8 = 0;
			LOBYTE(v7) = v8 != 0;
		}
		v9 = (_DWORD*)a1[2];
		v9[2] = 1;
		*v9 = v7;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v2 = (_DWORD*)a1[2];
		*v2 = 0;
		v2[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

