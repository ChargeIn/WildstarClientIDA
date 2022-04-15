//----- (0000000140336470) ----------------------------------------------------
__int64 __fastcall sub_140336470(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	__int64 v4; // rcx
	_QWORD* v7; // rax
	__int64 v8; // rax
	unsigned __int64 v9; // r8
	__int64 v10; // rcx
	unsigned __int8 v11; // r9
	bool v12; // zf
	_QWORD* v13; // rax

	v4 = *(_QWORD*)(a1 + 8);
	if (!v4 || 8i64 * (*(_QWORD*)(v4 + 24) - *(_QWORD*)(v4 + 32)) == *(_QWORD*)(a1 + 16))
	{
		if (!*(_QWORD*)(a1 + 32))
			return 2147500037i64;
		v7 = sub_140338550(*(__int64**)(a1 + 24));
		if (!v7)
			return 2147500037i64;
		sub_140337F20(*(_QWORD**)(a1 + 32), v7);
		*(_QWORD*)(a1 + 8) = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64);
	}
	if (!a3)
		return 0i64;
	while (1)
	{
		v8 = *(_QWORD*)(a1 + 8);
		v9 = 8i64 - *(_QWORD*)(a1 + 16);
		if (v9 > a3)
			v9 = a3;
		v10 = *(_QWORD*)(a1 + 16);
		v11 = (1 << v9) - 1;
		if (v10)
			**(_BYTE**)(v8 + 32) |= (a2 & v11) << v10;
		else
			**(_BYTE**)(v8 + 32) = v11 & a2;
		a3 -= v9;
		a2 >>= v9;
		v12 = (((_BYTE)v9 + (unsigned __int8)*(_DWORD*)(a1 + 16)) & 7) == 0;
		*(_QWORD*)(a1 + 16) = ((_BYTE)v9 + (unsigned __int8)*(_DWORD*)(a1 + 16)) & 7;
		if (v12 && ++ * (_QWORD*)(*(_QWORD*)(a1 + 8) + 32i64) == *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64))
			break;
	LABEL_17:
		if (!a3)
			return 0i64;
	}
	if (*(_QWORD*)(a1 + 32))
	{
		v13 = sub_140338550(*(__int64**)(a1 + 24));
		if (!v13)
			return 2147500037i64;
		sub_140337F20(*(_QWORD**)(a1 + 32), v13);
		*(_QWORD*)(a1 + 8) = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64);
		goto LABEL_17;
	}
	if (!a3)
		return 0i64;
	return 2147500037i64;
}

