//----- (00000001401CEBF0) ----------------------------------------------------
__int64 __fastcall sub_1401CEBF0(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // r8
	unsigned __int64 v3; // rcx

	v2 = *(_QWORD*)(a1 + 56);
	v3 = *(_QWORD*)(a2 + 56);
	if (v2 >= v3)
		return v2 > v3;
	else
		return 0xFFFFFFFFi64;
}

