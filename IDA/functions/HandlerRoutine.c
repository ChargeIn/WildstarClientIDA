#include "../winhttp.h"

//----- (00000001407E09A8) ----------------------------------------------------
__int64 __fastcall HandlerRoutine(DWORD CtrlType)
{
	PVOID* v2; // rdi
	void(__fastcall * v3)(_QWORD); // rax
	unsigned int v4; // esi
	void(__fastcall * v5)(_QWORD); // rbx

	sub_1407E2340(0);
	if (CtrlType)
	{
		v2 = &qword_140C5FAF8;
		v3 = (void(__fastcall*)(_QWORD))DecodePointer(qword_140C5FAF8);
		v4 = 21;
	}
	else
	{
		v2 = &qword_140C5FAF0;
		v3 = (void(__fastcall*)(_QWORD))DecodePointer(qword_140C5FAF0);
		v4 = 2;
	}
	v5 = v3;
	if ((unsigned __int64)v3 >= 2)
		*v2 = EncodePointer(0i64);
	sub_1407E2528(0);
	if (!v5)
		return 0i64;
	if (v5 != (void(__fastcall*)(_QWORD))1)
		v5(v4);
	return 1i64;
}

