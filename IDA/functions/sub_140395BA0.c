//----- (0000000140395BA0) ----------------------------------------------------
__int64 __fastcall sub_140395BA0(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rax

	v2 = *(_QWORD*)(a1 + 32);
	if (v2 && a2 < *(_QWORD*)(a1 + 24))
		return 336 * a2 + v2;
	else
		return 0i64;
}

