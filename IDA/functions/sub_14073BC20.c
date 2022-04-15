//----- (000000014073BC20) ----------------------------------------------------
__int64 __fastcall sub_14073BC20(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // rax
	int v5; // eax
	BOOL v6; // eax
	_DWORD* v7; // rcx
	bool v8; // zf
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	v3 = 0;
	v6 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 24);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 12);
			if (!v5 || (unsigned int)(v5 - 3) <= 4)
				v6 = 1;
		}
	}
	v7 = (_DWORD*)a1[2];
	v8 = !v6;
	result = 1i64;
	LOBYTE(v3) = !v8;
	v7[2] = 1;
	*v7 = v3;
	a1[2] += 16i64;
	return result;
}

