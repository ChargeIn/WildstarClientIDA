//----- (00000001400A5D50) ----------------------------------------------------
__int64 __fastcall sub_1400A5D50(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 213i64;
	*a2 += 32i64 * *(unsigned __int8*)(a1 + 32);
	result = 4i64 * *(unsigned __int8*)(a1 + 32);
	*a3 += result;
	return result;
}

