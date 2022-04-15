//----- (000000014087B8E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14087B8E0(__int64 a1, __int64 a2, __int64* a3)
{
	return sub_14087ADA0(
		(unsigned __int16*)a1,
		*(_QWORD*)a2,
		*a3,
		COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 28)),
		(float)(*(float*)(a2 + 24) - *(float*)(a2 + 28)) * *(float*)(a1 + 4));
}

