#include "../winhttp.h"

//----- (00000001407DCC5C) ----------------------------------------------------
void __fastcall sub_1407DCC5C(__int64* lpMem)
{
	volatile signed __int32* v2; // rcx
	void* v3; // rcx
	char* v4; // rcx

	if (lpMem)
	{
		sub_1407E2340(13);
		v2 = (volatile signed __int32*)lpMem[1];
		if (v2)
		{
			if (!_InterlockedDecrement(v2))
			{
				v3 = (void*)lpMem[1];
				if (v3 != &unk_140C0FD80)
					sub_1407E14C0(v3);
			}
		}
		sub_1407E2528(13);
		if (*lpMem)
		{
			sub_1407E2340(12);
			sub_1407E6958(*lpMem);
			v4 = (char*)*lpMem;
			if (*lpMem && !*(_DWORD*)v4 && v4 != (char*)&unk_140C102F0)
				sub_1407E67C0(v4);
			sub_1407E2528(12);
		}
		sub_1407E14C0(lpMem);
	}
}

