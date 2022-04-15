#include "../winhttp.h"

//----- (00000001400480E0) ----------------------------------------------------
void __fastcall sub_1400480E0(__int64 a1, __int64 a2)
{
	void(__fastcall * v2)(__int64, __int64, _QWORD); // rax

	if (!*(_DWORD*)(a1 + 56))
	{
		v2 = *(void(__fastcall**)(__int64, __int64, _QWORD))(a1 + 48);
		*(_DWORD*)(a1 + 56) = 1;
		if (v2)
			v2(a1, a2, *(_QWORD*)(a1 + 64));
	}
}

