//----- (00000001403311A0) ----------------------------------------------------
__int64 __fastcall sub_1403311A0(__int64 a1, unsigned __int16 a2)
{
	__int64 v2; // rax

	if ((unsigned __int64)a2 < *(_QWORD*)(a1 + 176) && (v2 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * a2)) != 0)
		return *(_QWORD*)(v2 + 144);
	else
		return 0i64;
}

