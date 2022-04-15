//----- (00000001406B4420) ----------------------------------------------------
__int64 __fastcall sub_1406B4420(_QWORD* a1)
{
	_QWORD* v2; // rax
	unsigned __int64 v3; // r8
	unsigned __int64 v5[4]; // [rsp+20h] [rbp-38h] BYREF

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	if (!v2 || !*v2)
		return 0i64;
	sub_1400EFDD0(v5, 30i64, "%I64u", *v2);
	v3 = -1i64;
	do
		++v3;
	while (*((_BYTE*)v5 + v3));
	sub_140058710((__int64)a1, v5, v3);
	return 1i64;
}

