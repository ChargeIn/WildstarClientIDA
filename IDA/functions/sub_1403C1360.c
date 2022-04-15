#include "../winhttp.h"

//----- (00000001403C1360) ----------------------------------------------------
int __fastcall sub_1403C1360(__int64 a1, int* a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	unsigned int v5; // ecx
	_DWORD* v6; // rcx
	__int64 v7; // rax
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	v9 = a1;
	LODWORD(v2) = *a2;
	v3 = qword_140C65898;
	if (*a2 < 300)
	{
		v5 = a2[1];
		if (v5 != -1 && ((_DWORD)v2 || (LODWORD(v2) = v5 < 0x1F) != 0))
		{
			v2 = sub_1403AC780(qword_140C65898 + 160, a2);
			v6 = (_DWORD*)v2;
			if (v2)
			{
				v2 = *(_QWORD*)(v2 + 64);
				if (v2)
				{
					if ((*(_DWORD*)(v2 + 332) & 0x10000) != 0)
					{
						LODWORD(v2) = (unsigned int)sub_1403CC530(v3, 0x9Cu);
					}
					else if ((*(_DWORD*)(v2 + 340) & 0x100) == 0 || v6[8])
					{
						v7 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 48i64))(v6);
						LODWORD(v2) = sub_1403A68E0(v3, v7);
						if (!(_DWORD)v2)
						{
							v9 = *(_QWORD*)a2;
							sub_1403F4900(v3, 0x149u, (__int64)&v9);
							LODWORD(v2) = qword_140C65898;
							*(_DWORD*)(qword_140C65898 + 28568) = 1;
						}
					}
				}
				else
				{
					LODWORD(v2) = (unsigned int)sub_1403CC530(v3, 6u);
				}
			}
		}
	}
	return v2;
}
// 140C65898: using guessed type __int64 qword_140C65898;

