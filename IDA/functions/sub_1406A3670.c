//----- (00000001406A3670) ----------------------------------------------------
__int64 __fastcall sub_1406A3670(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned int v9; // r8d
	__int64 v10; // rcx
	__int64 v11; // rdx
	_DWORD* v12; // rcx
	__int64 v14; // [rsp+38h] [rbp+10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = sub_1405A8A40(v3, *(_DWORD*)(v4 + 8))) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& (v7 = sub_140489580(qword_140C65930, *(_DWORD*)(v6 + 428))) != 0)
	{
		v8 = *(_QWORD*)(v7 + 80);
		v9 = *(_DWORD*)(v4 + 8);
		v10 = *(_QWORD*)(v8 + 8);
		v11 = v8;
		while (v10)
		{
			if (*(_DWORD*)(v10 + 32) < v9)
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v11 = v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
		}
		if (v11 == v8 || (v14 = v11, v9 < *(_DWORD*)(v11 + 32)))
			v14 = v8;
		v12 = (_DWORD*)a1[2];
		v12[2] = 1;
		*v12 = v14 != v8;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406A36A7: variable 'v3' is possibly undefined
// 140C65930: using guessed type __int64 qword_140C65930;

