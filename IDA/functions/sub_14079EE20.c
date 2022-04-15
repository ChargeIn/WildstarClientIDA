//----- (000000014079EE20) ----------------------------------------------------
__int64 __fastcall sub_14079EE20(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF

	if (sub_14079EE60(a1, a2, &v4))
		return *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8 * v4);
	else
		return 0i64;
}

