//----- (00000001404A1710) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A1710(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	int v4; // eax
	_BOOL8 result; // rax

	result = a2
		&& ((v4 = *(_DWORD*)(a2 + 128), v4 == 20) || v4 == 23)
		&& sub_1404A2090(
			*(_QWORD*)(qword_140C635F0 + 5584),
			a3,
			*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 384i64),
			a4);
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

