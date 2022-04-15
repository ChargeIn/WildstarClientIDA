//----- (00000001400F1440) ----------------------------------------------------
__int64 __fastcall sub_1400F1440(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	__int64* v4; // rbx
	__int64 result; // rax

	*a4 += 8i64;
	v4 = *(__int64**)(*a4 - 8i64);
	result = sub_14014EBC0(a2, a3);
	*v4 = result;
	return result;
}

