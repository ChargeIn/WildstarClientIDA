//----- (00000001406F3A90) ----------------------------------------------------
__int64 __fastcall sub_1406F3A90(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rax

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_14020FD40(v2);
	if (!v3 || (*(_BYTE*)(v3 + 12) & 8) != 0)
		return 0i64;
	else
		return sub_1406B91F0(a1, v3);
}

