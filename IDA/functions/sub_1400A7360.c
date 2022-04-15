//----- (00000001400A7360) ----------------------------------------------------
__int64 __fastcall sub_1400A7360(__int64 a1, unsigned __int16 a2)
{
	__int64 v2; // rax

	v2 = *(_QWORD*)(a1 + 8);
	if (!v2 || (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - *(_QWORD*)(a1 + 16)) < 0x40)
		return sub_140336470(a1, a2, 0x10ui64);
	sub_1400A7540(v2 + 32, (_QWORD*)(a1 + 16), a2, 0x10ui64);
	return 0i64;
}

