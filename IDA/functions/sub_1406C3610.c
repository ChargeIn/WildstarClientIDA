//----- (00000001406C3610) ----------------------------------------------------
__int64 __fastcall sub_1406C3610(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	int v4; // r8d
	_DWORD* v5; // rcx
	__int64 result; // rax

	v2 = sub_1406C3560(a1);
	v3 = 0;
	v4 = 0;
	if (v2)
		LOBYTE(v4) = *(_BYTE*)(v2 + 1085) != 0;
	v5 = (_DWORD*)a1[2];
	result = 1i64;
	LOBYTE(v3) = v4 != 0;
	v5[2] = 1;
	*v5 = v3;
	a1[2] += 16i64;
	return result;
}

