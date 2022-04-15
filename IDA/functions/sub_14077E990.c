#include "../winhttp.h"

//----- (000000014077E990) ----------------------------------------------------
__int64 __fastcall sub_14077E990(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx

	result = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4)
	{
		v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v4 + 192));
		if (v5 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5))
		{
			v6 = qword_140C65898;
			if (!*(_QWORD*)(qword_140C65898 + 120))
			{
			LABEL_7:
				if (!sub_14039E1A0(v6))
				{
					result = sub_14039E0A0(qword_140C65898);
					if (!(_DWORD)result)
						return result;
				}
				goto LABEL_9;
			}
			if (!sub_14047BE40(*(_QWORD*)(qword_140C65898 + 120)))
			{
				v6 = qword_140C65898;
				goto LABEL_7;
			}
		}
	LABEL_9:
		result = qword_140C65898;
	}
	if (*(_QWORD*)(result + 25744))
	{
		if (a2)
		{
			if (a2 == 1)
				*(_DWORD*)(result + 26660) = 1;
		}
		else
		{
			*(_DWORD*)(result + 26660) = 0;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

