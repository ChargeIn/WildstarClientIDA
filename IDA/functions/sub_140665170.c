//----- (0000000140665170) ----------------------------------------------------
__int64 __fastcall sub_140665170(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // r8d
	_DWORD* v4; // rdx
	__int64 result; // rax
	_DWORD* v6; // rdx
	bool v7; // zf
	_DWORD* v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2)
	{
		if (*(_QWORD*)qword_140C65B80)
		{
			v6 = (_DWORD*)a1[2];
			v7 = *(_DWORD*)(*(_QWORD*)qword_140C65B80 + 144i64) == **(_DWORD**)(*(_QWORD*)v2 + 8i64);
			v6[2] = 1;
			result = 1i64;
			LOBYTE(v3) = v7;
			*v6 = v3;
			a1[2] += 16i64;
		}
		else
		{
			v8 = (_DWORD*)a1[2];
			*v8 = 0;
			v8[2] = 1;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

