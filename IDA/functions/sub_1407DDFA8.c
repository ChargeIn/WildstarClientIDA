//----- (00000001407DDFA8) ----------------------------------------------------
void __fastcall sub_1407DDFA8(unsigned __int64 a1)
{
	unsigned __int64 v2; // rdx

	if (a1 < (unsigned __int64)&off_140C0F1B0 || a1 >(unsigned __int64) & unk_140C0F540)
	{
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	}
	else
	{
		v2 = (__int64)((unsigned __int128)((__int64)(a1 - (_QWORD)&off_140C0F1B0) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 3;
		sub_1407E2340(v2 + (v2 >> 63) + 16);
		*(_DWORD*)(a1 + 24) |= 0x8000u;
	}
}
// 140C0F1B0: using guessed type void *off_140C0F1B0;

