#include "../winhttp.h"

//----- (0000000140889400) ----------------------------------------------------
int __fastcall sub_140889400(__int64 a1)
{
	void* v2; // rcx
	HANDLE EventW; // rax

	v2 = *(void**)(a1 + 8);
	if (v2)
	{
		LODWORD(EventW) = ResetEvent(v2);
		*(_BYTE*)(a1 + 16) = 1;
	}
	else
	{
		EventW = CreateEventW(0i64, 1, 0, 0i64);
		*(_BYTE*)(a1 + 16) = 1;
		*(_QWORD*)(a1 + 8) = EventW;
	}
	return (int)EventW;
}

