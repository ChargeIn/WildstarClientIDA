#include "../winhttp.h"

//----- (00000001407E7A28) ----------------------------------------------------
__int64 __fastcall LocaleEnumProc(LPWSTR a1)
{
	_WORD** v2; // rsi
	_DWORD* v3; // rdi
	LCID v4; // ebx
	int v6; // r8d
	_WORD* v7; // rdx
	int v8; // edx
	WCHAR LCData[120]; // [rsp+20h] [rbp-108h] BYREF

	v2 = (_WORD**)(sub_1407E3D94() + 40);
	v3 = (_DWORD*)sub_1407E3D94()[142];
	v4 = sub_1407E7D54(a1);
	if (!GetLocaleInfoW(v4, *((_DWORD*)v2 + 7) != 0 ? 7 : 4098, LCData, 240))
		goto LABEL_2;
	if (!(unsigned int)sub_1407F0C28(v2[1], LCData))
	{
		if (!GetLocaleInfoW(v4, *((_DWORD*)v2 + 6) != 0 ? 3 : 4097, LCData, 240))
			goto LABEL_2;
		if ((unsigned int)sub_1407F0C28(*v2, LCData))
		{
			if ((*(_BYTE*)v3 & 2) == 0)
			{
				if (!*((_DWORD*)v2 + 5) || (unsigned int)sub_1407F0D9C(*v2, LCData, *((int*)v2 + 5)))
				{
					if ((*v3 & 1) == 0)
					{
						v6 = 0;
						v7 = &unk_140960100;
						while ((_WORD)v4 != *v7)
						{
							++v6;
							++v7;
							if ((unsigned __int64)v6 >= 0xA)
							{
								*v3 |= 1u;
								goto LABEL_17;
							}
						}
					}
				}
				else
				{
					*v3 |= 2u;
					v3[2] = v4;
					if ((unsigned int)sub_1407E6CA0(*v2) == *((_DWORD*)v2 + 5))
						v3[1] = v4;
				}
			}
		}
		else
		{
			*v3 |= 0x304u;
			v3[1] = v4;
		LABEL_17:
			v3[2] = v4;
		}
	}
	if ((*v3 & 0x300) == 768)
		return (*v3 & 4) == 0;
	if (!GetLocaleInfoW(v4, *((_DWORD*)v2 + 6) != 0 ? 3 : 4097, LCData, 240))
	{
	LABEL_2:
		*v3 = 0;
		return 1i64;
	}
	if ((unsigned int)sub_1407F0C28(*v2, LCData))
	{
		if (*((_DWORD*)v2 + 6) || !*((_DWORD*)v2 + 5) || (unsigned int)sub_1407F0C28(*v2, LCData))
			return (*v3 & 4) == 0;
		v8 = 0;
	}
	else
	{
		*v3 |= 0x200u;
		if (*((_DWORD*)v2 + 6) || !*((_DWORD*)v2 + 5) || (unsigned int)sub_1407E6CA0(*v2) != *((_DWORD*)v2 + 5))
			goto LABEL_30;
		v8 = 1;
	}
	if (sub_1407E7E54(v4, v8))
	{
	LABEL_30:
		*v3 |= 0x100u;
		if (!v3[1])
			v3[1] = v4;
	}
	return (*v3 & 4) == 0;
}

