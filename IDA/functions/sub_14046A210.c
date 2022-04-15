#include "../winhttp.h"

//----- (000000014046A210) ----------------------------------------------------
__int64 __fastcall sub_14046A210(__int64 a1)
{
	__int64 v2; // rdi
	_QWORD* v3; // rbx
	int v4; // eax
	char* v5; // r8
	char* v6; // rcx
	__int64 v7; // rdx

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65B70 + 64i64))(qword_140C65B70);
	if (*(_QWORD*)(v2 + 8) == *(_QWORD*)(v2 + 16))
		return 0i64;
	v3 = *(_QWORD**)(a1 + 5584);
	if (!v3)
		return 0i64;
	while (1)
	{
		v4 = (*(__int64(__fastcall**)(_QWORD*))(*v3 + 48i64))(v3);
		v5 = *(char**)(v2 + 16);
		v6 = *(char**)(v2 + 8);
		v7 = (v5 - v6) >> 4;
		if (v7 <= 0)
		{
		LABEL_9:
			if ((v5 - v6) >> 2 != 1)
			{
				if ((v5 - v6) >> 2 != 2)
				{
					if ((v5 - v6) >> 2 != 3)
					{
					LABEL_17:
						v6 = *(char**)(v2 + 16);
						goto LABEL_18;
					}
					if (*(_DWORD*)v6 == v4)
						goto LABEL_18;
					v6 += 4;
				}
				if (*(_DWORD*)v6 == v4)
					goto LABEL_18;
				v6 += 4;
			}
			if (*(_DWORD*)v6 == v4)
				goto LABEL_18;
			goto LABEL_17;
		}
		while (*(_DWORD*)v6 != v4)
		{
			v6 += 4;
			if (*(_DWORD*)v6 == v4)
				break;
			v6 += 4;
			if (*(_DWORD*)v6 == v4)
				break;
			v6 += 4;
			if (*(_DWORD*)v6 == v4)
				break;
			--v7;
			v6 += 4;
			if (v7 <= 0)
				goto LABEL_9;
		}
	LABEL_18:
		if (v6 != v5)
			return 1i64;
		v3 = (_QWORD*)v3[6];
		if (!v3)
			return 0i64;
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

