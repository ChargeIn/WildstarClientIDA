//----- (00000001406BA190) ----------------------------------------------------
__int64 __fastcall sub_1406BA190(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	_DWORD* v5; // r8
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rax
	_DWORD* v9; // rcx
	int v10; // eax
	_DWORD* v11; // rcx
	bool v12; // zf
	__int64 result; // rax
	_DWORD* v14; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = *(_DWORD**)(v4 + 8);
		v6 = 0;
		v7 = (int)v5[1];
		if ((int)v7 >= 5
			|| (v8 = *(_QWORD*)(qword_140C65A38 + 8 * v7 + 184)) == 0
			|| (v9 = *(_DWORD**)(*(_QWORD*)(v8 + 8) + 8i64), v10 = 1, *v9 != *v5))
		{
			v10 = 0;
		}
		v11 = (_DWORD*)a1[2];
		v12 = v10 == 0;
		result = 1i64;
		LOBYTE(v6) = !v12;
		v11[2] = 1;
		*v11 = v6;
		a1[2] += 16i64;
	}
	else
	{
		v14 = (_DWORD*)a1[2];
		*v14 = 0;
		v14[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65A38: using guessed type __int64 qword_140C65A38;

