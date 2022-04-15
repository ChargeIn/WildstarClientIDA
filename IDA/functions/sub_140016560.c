#include "../winhttp.h"

//----- (0000000140016560) ----------------------------------------------------
void __fastcall sub_140016560(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // rax
	_QWORD* v8; // r8
	__int64 v9; // rcx
	_QWORD* i; // rax

	if (!*(_DWORD*)(a1 + 5704) || qword_140C65898)
	{
		v4 = *(_QWORD*)(a1 + 5536);
		if (v4)
		{
			if (!*(_QWORD*)(v4 + 24))
			{
				*(_DWORD*)(v4 + 40) = 3;
				v5 = *(_QWORD*)(a1 + 5528);
				if (v5 && *(_QWORD*)(v5 + 24))
				{
					v6 = *(_QWORD*)(a1 + 5536);
					if (!*(_QWORD*)(v6 + 24))
					{
						v7 = *(_QWORD*)(v5 + 24);
						*(_QWORD*)(v6 + 32) = v5;
						*(_QWORD*)(v6 + 24) = v7;
						v8 = *(_QWORD**)(v6 + 24);
						if (v8)
							*v8 = v6;
						*(_QWORD*)(v5 + 24) = v6 + 32;
					}
				}
				else
				{
					v9 = *(_QWORD*)(a1 + 5536);
					if (!*(_QWORD*)(v9 + 24))
					{
						for (i = (_QWORD*)(a1 + 5552); *i; i = (_QWORD*)(*i + 32i64))
							;
						*(_QWORD*)(v9 + 24) = i;
						*(_QWORD*)(v9 + 32) = 0i64;
						*i = v9;
					}
				}
				(***(void(__fastcall****)(_QWORD))(a1 + 5536))(*(_QWORD*)(a1 + 5536));
				if (*(_DWORD*)(a1 + 5704))
					sub_1400EA3E0(*(_QWORD*)(*(_QWORD*)(a1 + 5536) + 88i64), "TriggerDemoOptions", byte_1409D0FFC, a2);
			}
			if (qword_140C63620)
			{
				if (*(_QWORD*)(qword_140C63620 + 24))
					sub_1400EA3E0(*(_QWORD*)(qword_140C63620 + 88), "OpenOptions", &unk_1409D0202);
			}
		}
	}
}
// 1409D0FFC: using guessed type _BYTE byte_1409D0FFC[2];
// 140C63620: using guessed type __int64 qword_140C63620;
// 140C65898: using guessed type __int64 qword_140C65898;

