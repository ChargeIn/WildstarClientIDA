//----- (000000014083A6D0) ----------------------------------------------------
__int64 __fastcall sub_14083A6D0(__int64** a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // r10
	_QWORD* v4; // r9
	_QWORD* i; // rax

	v3 = *(_QWORD**)(a2 + 48);
	v4 = *(_QWORD**)(a2 + 56);
	for (i = v3; i != v4; ++i)
	{
		if (*i == a3)
			break;
	}
	if (i == v4)
		return 41i64;
	if ((unsigned int)(v4 - v3) > 1)
		*i = *(v4 - 1);
	*(_QWORD*)(a2 + 56) -= 8i64;
	--* (_BYTE*)(a2 + 73);
	if (*(_BYTE*)(a2 + 72) || *(_BYTE*)(a2 + 73))
		return 1i64;
	else
		return sub_14083A630(a1, a2);
}

