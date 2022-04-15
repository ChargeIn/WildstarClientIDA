//----- (00000001401A03D0) ----------------------------------------------------
BOOL __fastcall sub_1401A03D0(__int64 a1, LONG a2)
{
	BOOL result; // eax

	if (a2)
		return ReleaseSemaphore(*(HANDLE*)(a1 + 16), a2, 0i64);
	return result;
}

