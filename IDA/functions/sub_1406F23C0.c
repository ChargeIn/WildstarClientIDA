#include "../winhttp.h"

//----- (00000001406F23C0) ----------------------------------------------------
__int64 __fastcall sub_1406F23C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax

	if (!*(_DWORD*)(qword_140C635F0 + 5896))
	{
		v2 = sub_140056AB0(a1, 1u);
		if (v2)
		{
			v3 = *(_QWORD*)(v2 + 8);
			if (v3)
			{
				if (!*(_QWORD*)(v3 + 8))
					sub_140056830(a1, (unsigned __int64*)"Error canceling: CREDD exchange order is not posted");
			}
		}
	}
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

