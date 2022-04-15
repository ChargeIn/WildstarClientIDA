//----- (00000001400A1C00) ----------------------------------------------------
__int64 __fastcall sub_1400A1C00(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 64i64;
	*a2 += 8i64 * *(unsigned int*)(a1 + 4);
	result = *(unsigned int*)(a1 + 4);
	*a3 += result;
	return result;
}

