//----- (00000001408769E0) ----------------------------------------------------
__int64 __fastcall sub_1408769E0(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 i; // rax
	_QWORD* v6; // rbx
	__int64 v7; // r8
	unsigned __int64 v9; // rsi
	__int64 v10; // [rsp+38h] [rbp+10h]

	v10 = a2;
	v2 = *(_QWORD*)(a1 + 64);
	v3 = a1 + 64;
	v4 = *(_QWORD*)(a1 + 72);
	for (i = v2; i != v4; i += 8i64)
	{
		if ((_DWORD)a2 == *(_DWORD*)i && BYTE4(a2) == *(_BYTE*)(i + 4))
			break;
	}
	v6 = 0i64;
	v7 = 0i64;
	if (i != v4)
		v7 = i;
	if (v7)
		return 1i64;
	v9 = (unsigned int)((v4 - v2) >> 3);
	if (v9 < *(unsigned int*)(v3 + 16))
		goto LABEL_12;
	if (sub_140892EF0(v3, 4))
	{
		a2 = v10;
	LABEL_12:
		if (v9 < *(unsigned int*)(v3 + 16))
		{
			v6 = *(_QWORD**)(v3 + 8);
			*(_QWORD*)(v3 + 8) = v6 + 1;
			if (v6)
				*v6 = a2;
		}
	}
	return 2 - (unsigned int)(v6 != 0i64);
}

