#include "../winhttp.h"

//----- (00000001403A11C0) ----------------------------------------------------
__int64 sub_1403A11C0()
{
	__int64 v0; // rbx
	unsigned int v1; // ecx
	__int64 v2; // rax
	__int64 v3; // rax

	v0 = qword_140C65B98;
	v1 = *(_DWORD*)(qword_140C65B98 + 264);
	if (v1)
	{
		v2 = sub_140215240(v1);
		if (v2)
		{
			v3 = sub_140214E00(*(_DWORD*)(v2 + 16));
			if (v3)
			{
				if (*(_DWORD*)(v0 + 276) == 1)
				{
					if ((*(_BYTE*)(v3 + 16) & 0x40) != 0)
						return 0i64;
				}
				else if (*(_DWORD*)(v0 + 276) == 2 && (*(_BYTE*)(v3 + 16) & 4) != 0)
				{
					return 0i64;
				}
			}
		}
	}
	return 1i64;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

