//----- (0000000140395B80) ----------------------------------------------------
__int64 __fastcall sub_140395B80(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rax

	v2 = *(_QWORD*)(a1 + 48);
	if (v2 && a2 < *(_QWORD*)(a1 + 40))
		return *(_QWORD*)(v2 + 8 * a2);
	else
		return 0i64;
}

