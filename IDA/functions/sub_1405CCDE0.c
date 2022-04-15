#include "../winhttp.h"

//----- (00000001405CCDE0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405CCDE0(__int64 a1)
{
	return (*(_QWORD*)(*(_QWORD*)a1 + 8i64)
		|| (*(_DWORD*)(a1 + 36) || *(_DWORD*)(a1 + 28) || *(_QWORD*)(a1 + 496))
		&& (unsigned int)(*(_DWORD*)(a1 + 68) - 2) <= 1
		&& (**(float(__fastcall***)(__int64))(qword_140C65898 + 29704))(qword_140C65898 + 29704) > 0.0)
		&& !*(_DWORD*)(a1 + 80);
}
// 140C65898: using guessed type __int64 qword_140C65898;

