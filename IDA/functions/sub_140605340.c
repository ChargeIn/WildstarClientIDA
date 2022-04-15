//----- (0000000140605340) ----------------------------------------------------
__int64 __fastcall sub_140605340(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && sub_14079EE60(*(_QWORD*)(a1 + 64), a2, &v4))
		return *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8 * v4);
	else
		return 0i64;
}

