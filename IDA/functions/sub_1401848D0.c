//----- (00000001401848D0) ----------------------------------------------------
__int64 __fastcall sub_1401848D0(_QWORD* a1)
{
	unsigned __int64* v2; // rsi
	int v3; // edi
	unsigned __int64 v4; // rcx
	int v5; // eax
	_DWORD* v6; // rcx
	__int64 result; // rax

	v2 = (unsigned __int64*)sub_140056AB0(a1, 1u);
	v3 = 0;
	if (!(unsigned int)sub_140184590((__int64)a1) || (v4 = *(_QWORD*)sub_140056AB0(a1, 2u), v5 = 1, *v2 >= v4))
		v5 = 0;
	v6 = (_DWORD*)a1[2];
	LOBYTE(v3) = v5 != 0;
	v6[2] = 1;
	result = 1i64;
	*v6 = v3;
	a1[2] += 16i64;
	return result;
}
