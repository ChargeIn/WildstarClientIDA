//----- (00000001400DAE30) ----------------------------------------------------
__int64 __fastcall sub_1400DAE30(_QWORD* a1)
{
	__int64 result; // rax

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		sub_1401430E0(a1, (unsigned int*)(result + 708));
		return 1i64;
	}
	return result;
}

