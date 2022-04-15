#include "../winhttp.h"

//----- (000000014049D5B0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049D5B0(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	__int64 v6; // r8
	unsigned int v7; // r9d
	__int64 v8; // rdx
	bool v9; // zf

	v6 = sub_140239CC0(a4);
	if (!v6)
		return a3 == 2;
	v7 = a5;
	v8 = *(_QWORD*)(qword_140C65898 + 29048);
	if (!a5)
		v7 = dword_140C6664C;
	if (!v8)
		return a3 == 2;
	while (1)
	{
		if (!*(_QWORD*)(v8 + 40))
			goto LABEL_18;
		if (*(_DWORD*)v8 == 4)
			break;
		switch (*(_DWORD*)v8)
		{
		case 5:
			v9 = (*(_BYTE*)(v6 + 4) & 0x40) == 0;
			goto LABEL_16;
		case 6:
			v9 = (*(_DWORD*)(v6 + 4) & 0x100) == 0;
			goto LABEL_16;
		case 7:
			v9 = *(_BYTE*)(v6 + 4) >= 0;
			goto LABEL_16;
		case 8:
			v9 = (*(_DWORD*)(v6 + 4) & 0xC00) == 0;
			goto LABEL_16;
		}
	LABEL_18:
		v8 = *(_QWORD*)(v8 + 104);
		if (!v8)
			return a3 == 2;
	}
	v9 = (*(_BYTE*)(v6 + 4) & 0x20) == 0;
LABEL_16:
	if (v9 || dword_140C636A8 - *(_DWORD*)(v8 + 16) > v7)
		goto LABEL_18;
	return a3 == 1;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C6664C: using guessed type int dword_140C6664C;

