//----- (000000014041CBF0) ----------------------------------------------------
__int64 __fastcall sub_14041CBF0(_QWORD* a1)
{
	int v2; // edi
	int* v3; // rdx
	bool v4; // zf
	int v5; // eax
	_DWORD* v6; // rcx
	__int64 result; // rax

	v2 = 0;
	v3 = sub_140417BF0(a1, 1u);
	if (!v3
		|| (v4 = (*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65BB8 + 8i64))(qword_140C65BB8, v3) == 0,
			v5 = 1,
			v4))
	{
		v5 = 0;
	}
	v6 = (_DWORD*)a1[2];
	v4 = v5 == 0;
	result = 1i64;
	LOBYTE(v2) = !v4;
	v6[2] = 1;
	*v6 = v2;
	a1[2] += 16i64;
	return result;
}
// 140C65BB8: using guessed type __int64 qword_140C65BB8;

