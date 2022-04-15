//----- (0000000140629A50) ----------------------------------------------------
__int64 __fastcall sub_140629A50(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rcx
	unsigned __int64 v3; // rdx

	v2 = *(_QWORD*)(*(_QWORD*)a1 + 8i64);
	v3 = *(_QWORD*)(*(_QWORD*)a2 + 8i64);
	if (v3 <= v2)
		return (unsigned int)-(v3 < v2);
	else
		return 1i64;
}

