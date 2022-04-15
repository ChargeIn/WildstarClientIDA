//----- (00000001403448C0) ----------------------------------------------------
__int64 __fastcall sub_1403448C0(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rax

	v2 = *(_QWORD*)(a1 + 8);
	if (v2 && a2 < *(_QWORD*)(a1 + 24))
		return *(_QWORD*)(v2 + 8 * a2);
	else
		return 0i64;
}

