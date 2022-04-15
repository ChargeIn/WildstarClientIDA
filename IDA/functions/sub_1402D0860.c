//----- (00000001402D0860) ----------------------------------------------------
__int64 __fastcall sub_1402D0860(_QWORD* a1, unsigned __int64 a2)
{
	__int64 v2; // rsi
	__int64 v3; // rbp
	__int64 v5; // rbx

	v3 = a1[46];
	if (a2 < (a1[47] - v3) >> 2)
		return *(unsigned int*)(v3 + 4 * a2);
	v5 = *(_QWORD*)(a1[1] + 64i64);
	v2 = a1[47];
	return *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)((*(__int64(__fastcall**)(_QWORD*))(*a1 + 24i64))(a1) + 224)
		+ 16 * v5
		+ 8)
		+ 2 * (a2 - (unsigned int)((v2 - v3) >> 2)));
}

