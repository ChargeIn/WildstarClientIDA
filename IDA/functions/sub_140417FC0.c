//----- (0000000140417FC0) ----------------------------------------------------
__int64 __fastcall sub_140417FC0(_QWORD* a1)
{
	int* v2; // rdi
	int* v3; // rax
	_DWORD* v4; // rcx
	int v5; // ecx
	_DWORD* v6; // rax

	v2 = sub_140417BF0(a1, 1u);
	v3 = sub_140417C90(a1, 1u);
	if (v2)
	{
		if ((v2[85] & 0x400) != 0 && v2[96])
			v5 = sub_1403B4710(qword_140C65898, v2, v3);
		else
			v5 = 31;
		v6 = (_DWORD*)a1[2];
		v6[2] = 1;
		*v6 = v5 == 0;
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		*v4 = 0;
		v4[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

