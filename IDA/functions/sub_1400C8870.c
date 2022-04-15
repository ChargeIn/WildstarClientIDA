//----- (00000001400C8870) ----------------------------------------------------
__int64 __fastcall sub_1400C8870(__int64 a1)
{
	__int64 result; // rax

	*(_BYTE*)(a1 + 29) |= 1u;
	for (result = a1 + 16; *(_QWORD*)result; *(_BYTE*)(result + 13) |= 1u)
		result = *(_QWORD*)result + 16i64;
	return result;
}

