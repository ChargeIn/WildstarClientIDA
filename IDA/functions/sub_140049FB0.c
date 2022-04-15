//----- (0000000140049FB0) ----------------------------------------------------
__int64 __fastcall sub_140049FB0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rax
	int v4; // edx
	__int64 v5; // rax
	bool v6; // zf
	int v7; // eax
	_DWORD* v8; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = (__int64*)sub_140056AB0(a1, 2u);
	v4 = 0;
	if (!v2
		|| !v3
		|| !*(_QWORD*)v2
		|| (v5 = *v3) == 0
		|| (v6 = *(_QWORD*)(*(_QWORD*)v2 + 16i64) == *(_QWORD*)(v5 + 16), v7 = 1, !v6))
	{
		v7 = 0;
	}
	v8 = (_DWORD*)a1[2];
	v6 = v7 == 0;
	result = 1i64;
	LOBYTE(v4) = !v6;
	v8[2] = 1;
	*v8 = v4;
	a1[2] += 16i64;
	return result;
}

