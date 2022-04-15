//----- (00000001405161E0) ----------------------------------------------------
__int64 __fastcall sub_1405161E0(__int64 a1, _QWORD* a2)
{
	int v2; // esi
	_DWORD* v4; // rax
	int v6; // edi
	_DWORD* v7; // rax
	__int64 result; // rax
	int v9; // edx
	int v10; // eax
	unsigned int v11; // ecx
	BOOL v12; // eax
	_DWORD* v13; // rcx
	bool v14; // zf
	__int64 v15; // [rsp+50h] [rbp+18h]
	__int64 v16; // [rsp+50h] [rbp+18h]

	v2 = -1;
	v4 = (_DWORD*)(a2[3] + 32i64);
	if ((unsigned __int64)v4 >= a2[2] || v4 == dword_140A12138 || *(int*)(a2[3] + 40i64) <= 0)
		v6 = -1;
	else
		v6 = sub_140056D60(a2, 3u);
	v7 = (_DWORD*)(a2[3] + 48i64);
	if ((unsigned __int64)v7 < a2[2] && v7 != dword_140A12138 && *(int*)(a2[3] + 56i64) > 0)
		v2 = sub_140056D60(a2, 4u);
	if (v6 < 0)
		return 0i64;
	LODWORD(v15) = BYTE1(v6);
	HIDWORD(v15) = (unsigned __int8)v6;
	*(_QWORD*)(a1 + 16) = v15;
	if (v2 <= 0)
	{
		v16 = -4294966996i64;
	}
	else
	{
		LODWORD(v16) = BYTE1(v2);
		HIDWORD(v16) = (unsigned __int8)v2;
	}
	v9 = 0;
	*(_QWORD*)(a1 + 56) = v16;
	v10 = *(_DWORD*)(a1 + 16);
	if (v10 >= 300 || (v11 = *(_DWORD*)(a1 + 20), v11 == -1))
	{
		v12 = 0;
	}
	else if (v10)
	{
		v12 = 1;
	}
	else
	{
		v12 = v11 < 0x1F;
	}
	v13 = (_DWORD*)a2[2];
	v14 = !v12;
	result = 1i64;
	LOBYTE(v9) = !v14;
	v13[2] = 1;
	*v13 = v9;
	a2[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

