//----- (000000014067C290) ----------------------------------------------------
__int64 __fastcall sub_14067C290(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // rdx
	bool v5; // zf
	__int64 result; // rax
	_DWORD* v7; // rax

	v2 = sub_14067B760(a1);
	if (v2 && (v3 = *(_QWORD*)(v2 + 48)) != 0)
	{
		v4 = (_DWORD*)a1[2];
		v5 = (*(_BYTE*)(*(_QWORD*)v3 + 52i64) & 0x40) == 0;
		v4[2] = 1;
		result = 1i64;
		*v4 = !v5;
		a1[2] += 16i64;
	}
	else
	{
		v7 = (_DWORD*)a1[2];
		*v7 = 0;
		v7[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

