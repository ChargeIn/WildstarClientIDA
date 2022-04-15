//----- (000000014083A4B0) ----------------------------------------------------
__int64 __fastcall sub_14083A4B0(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // r9
	_QWORD* v4; // rax
	_QWORD* v6; // rdx

	v3 = *(_QWORD**)(a2 + 56);
	v4 = *(_QWORD**)(a2 + 48);
	if ((unsigned int)(v3 - v4) >= 8)
		return 2i64;
	for (; v4 != v3; ++v4)
	{
		if (*v4 == a3)
			break;
	}
	v6 = 0i64;
	if (v4 != v3)
		v6 = v4;
	if (v6 || !sub_14084CA80(a2 + 48, a3))
		return 40i64;
	++* (_BYTE*)(a2 + 73);
	return 1i64;
}

