#include "../winhttp.h"

//----- (00000001400B8980) ----------------------------------------------------
void __fastcall sub_1400B8980(__int64 a1, __int16* a2)
{
	__int64 v3; // rcx
	int v5; // esi
	__int16 v6; // cx
	__int16 v7; // ax
	__int16 v8; // cx
	__int16 v9; // ax

	v3 = *(_QWORD*)(a1 + 16);
	v5 = 0;
	if (!v3 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3))
	{
		v8 = *a2;
		if (!*a2)
			return;
		while (1)
		{
			++a2;
			if (v5)
			{
				if (v8 == 125)
					v5 = 0;
				goto LABEL_31;
			}
			if (v8 != 123)
				break;
			v5 = 1;
		LABEL_31:
			v8 = *a2;
			if (!*a2)
				return;
		}
		if ((unsigned __int16)(v8 - 65) > 0x19u && (unsigned __int16)(v8 - 97) > 0x19u && (unsigned __int16)(v8 - 48) > 9u)
		{
		LABEL_30:
			sub_1400A7EA0(*(_QWORD**)(a1 + 32), v8);
			goto LABEL_31;
		}
		if (*(_DWORD*)(a1 + 24) == 1)
		{
			v9 = sub_1400B9C90(v8);
		}
		else
		{
			if (*(_DWORD*)(a1 + 24) != 2)
			{
			LABEL_29:
				*(_DWORD*)(a1 + 24) = 0;
				goto LABEL_30;
			}
			v9 = sub_140056430(v8);
		}
		v8 = v9;
		goto LABEL_29;
	}
	v6 = *a2;
	if (*a2)
	{
		while (1)
		{
			++a2;
			if ((unsigned __int16)(v6 - 65) > 0x19u
				&& (unsigned __int16)(v6 - 97) > 0x19u
				&& (unsigned __int16)(v6 - 48) > 9u)
			{
				goto LABEL_13;
			}
			if (*(_DWORD*)(a1 + 24) == 1)
				break;
			if (*(_DWORD*)(a1 + 24) == 2)
			{
				v7 = sub_140056430(v6);
			LABEL_11:
				v6 = v7;
			}
			*(_DWORD*)(a1 + 24) = 0;
		LABEL_13:
			sub_1400A7EA0(*(_QWORD**)(a1 + 32), v6);
			v6 = *a2;
			if (!*a2)
				return;
		}
		v7 = sub_1400B9C90(v6);
		goto LABEL_11;
	}
}

