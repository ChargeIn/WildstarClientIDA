//----- (0000000140890920) ----------------------------------------------------
__int64 __fastcall sub_140890920(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rbx

	v1 = (_QWORD*)(a1 + 264);
	if (!*(_QWORD*)(a1 + 264))
		return 0x7FFFFFFFFFFFFFFFi64;
	v2 = sub_1408904A0(a1, 0);
	return v2 + sub_14088FDA0(v1);
}

