//----- (00000001406643E0) ----------------------------------------------------
__int64 __fastcall sub_1406643E0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // r9d
	_DWORD* v4; // rdx
	__int64 result; // rax
	unsigned __int64 v6; // rdx
	unsigned int v7; // r10d
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rax
	unsigned int v10; // r8d
	int v11; // ecx
	_DWORD* v12; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (!v2)
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		a1[2] += 16i64;
		return result;
	}
	v6 = *(_QWORD*)(qword_140C65B80 + 144);
	v7 = **(_DWORD**)(*(_QWORD*)v2 + 8i64);
	v8 = 0i64;
	if (!v6)
	{
	LABEL_9:
		v11 = 0;
		goto LABEL_10;
	}
	while (1)
	{
		v9 = v8 + ((v6 - v8) >> 1);
		v10 = *(_DWORD*)(*(_QWORD*)(qword_140C65B80 + 136) + 4 * v9);
		if (v7 < v10)
		{
			v6 = v8 + ((v6 - v8) >> 1);
			goto LABEL_8;
		}
		if (v7 <= v10)
			break;
		v8 = v9 + 1;
	LABEL_8:
		if (v8 >= v6)
			goto LABEL_9;
	}
	v11 = 1;
LABEL_10:
	v12 = (_DWORD*)a1[2];
	LOBYTE(v3) = v11 != 0;
	v12[2] = 1;
	*v12 = v3;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

