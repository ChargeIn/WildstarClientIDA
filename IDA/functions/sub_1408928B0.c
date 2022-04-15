//----- (00000001408928B0) ----------------------------------------------------
__int64 __fastcall sub_1408928B0(__int64 a1, unsigned __int16 a2)
{
	__int64 v2; // r9

	v2 = *(_QWORD*)(a1 + 168);
	if (a2 >= (unsigned int)((*(_QWORD*)(a1 + 176) - v2) >> 3))
		return 0i64;
	else
		return *(_QWORD*)(v2 + 8i64 * a2);
}

