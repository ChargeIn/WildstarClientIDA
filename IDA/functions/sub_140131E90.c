#include "../winhttp.h"

//----- (0000000140131E90) ----------------------------------------------------
__int64 __fastcall sub_140131E90(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	void(__fastcall * **v4)(_QWORD); // rbx
	__int64 v5; // rcx

	v2 = sub_140131630(a1, 1u);
	v3 = sub_1400D66A0(a1, 2u);
	v4 = (void(__fastcall***)(_QWORD))v3;
	if (v2 != v3)
	{
		if (v2)
		{
			if (v3)
			{
				v5 = *(_QWORD*)(v2 + 1560);
				if (v5 != v3)
				{
					if (v5)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
						*(_QWORD*)(v2 + 1560) = 0i64;
					}
					*(_QWORD*)(v2 + 1560) = v4;
					(**v4)(v4);
				}
			}
		}
	}
	return 0i64;
}

