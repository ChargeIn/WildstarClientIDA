//----- (0000000140776D60) ----------------------------------------------------
__int64 __fastcall sub_140776D60(__int64 a1, __int64 a2, __int64 a3)
{
	return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(a3 + 8))(
		*(_QWORD*)a3 + 12 * a1,
		*(_QWORD*)a3 + 12 * a2,
		*(_QWORD*)(a3 + 16));
}

