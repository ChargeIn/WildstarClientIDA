//----- (00000001400854D0) ----------------------------------------------------
__int64 __fastcall sub_1400854D0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 399i64;
	*a2 += 32i64 * *(unsigned __int8*)(a1 + 64);
	*a3 += 4i64 * *(unsigned __int8*)(a1 + 64);
	*a2 += 4i64;
	*a2 += 32i64 * *(unsigned __int8*)(a1 + 80);
	result = 4i64 * *(unsigned __int8*)(a1 + 80);
	*a3 += result;
	return result;
}

