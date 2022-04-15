//----- (0000000140710F40) ----------------------------------------------------
__int64 __fastcall sub_140710F40(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax
	__int64 v9; // rcx
	unsigned int v10; // eax
	unsigned int v11; // esi
	BOOL v12; // eax
	_DWORD* v13; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = qword_140C65948;
	*(_QWORD*)(a1 + 16) -= 16i64;
	v10 = sub_14048D940(v9, v8);
	v11 = v10;
	v12 = v10 && sub_14024B980(v10) && sub_140485FA0(v11, 0);
	v13 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v12;
	v13[2] = 1;
	result = 1i64;
	*v13 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65948: using guessed type __int64 qword_140C65948;

