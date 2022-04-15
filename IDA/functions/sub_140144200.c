//----- (0000000140144200) ----------------------------------------------------
__int64 __fastcall sub_140144200(__int64 a1)
{
	unsigned int* v2; // rax
	int v3; // edi
	int v4; // eax
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax

	v2 = (unsigned int*)sub_140143AE0(a1, 1);
	v3 = 0;
	if (v2)
		v4 = sub_140141E10(qword_140C63678, *v2);
	else
		v4 = 0;
	v5 = *(_DWORD**)(a1 + 16);
	v6 = v4 == 0;
	result = 1i64;
	LOBYTE(v3) = !v6;
	v5[2] = 1;
	*v5 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C63678: using guessed type __int64 qword_140C63678;

