//----- (000000014051F9E0) ----------------------------------------------------
__int64 __fastcall sub_14051F9E0(__int64 a1, _QWORD* a2)
{
	unsigned int v4; // eax
	__int64 v5; // rcx
	int v6; // eax
	int v7; // edx
	_DWORD* v8; // rcx
	bool v9; // zf
	__int64 result; // rax

	v4 = sub_140056D60(a2, 3u);
	*(_DWORD*)(a1 + 16) = v4;
	v6 = sub_1403B91D0(v5, v4);
	v7 = 0;
	if (!v6)
		*(_DWORD*)(a1 + 16) = 0;
	v8 = (_DWORD*)a2[2];
	v9 = v6 == 0;
	result = 1i64;
	LOBYTE(v7) = !v9;
	v8[2] = 1;
	*v8 = v7;
	a2[2] += 16i64;
	return result;
}
// 14051FA02: variable 'v5' is possibly undefined

