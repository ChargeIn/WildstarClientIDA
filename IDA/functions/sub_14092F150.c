#include "../winhttp.h"

//----- (000000014092F150) ----------------------------------------------------
unsigned __int16* __fastcall sub_14092F150(
	__int64 a1,
	__int16* a2,
	unsigned __int16* a3,
	__int16* a4,
	_DWORD* a5,
	_DWORD* a6,
	_QWORD* a7)
{
	__int16 v8; // dx
	__int16* v10; // r10
	__int16 v11; // ax
	int v12; // ecx
	_WORD* v13; // rax
	_QWORD* v14; // r11
	int v16; // eax
	__int64 v17; // rdx
	unsigned __int16 v18; // cx
	int v19; // eax

	v8 = *a2;
	v10 = a2 + 1;
	*a3 = v8;
	if ((unsigned __int16)(v8 - 33) <= 0xCu)
	{
		v11 = 29;
	LABEL_11:
		*a4 = v11;
		goto LABEL_12;
	}
	if ((unsigned __int16)(v8 - 46) > 0xCu)
	{
		if ((unsigned __int16)(v8 - 59) > 0xCu)
		{
			if ((unsigned __int16)(v8 - 72) > 0xCu)
			{
				if ((unsigned __int16)(v8 - 85) > 0xCu)
				{
					*a4 = v8;
					v16 = 17;
					if ((unsigned __int16)v8 >= 0x6Cu)
						v16 = (unsigned __int16)*v10;
					v17 = v16;
					v18 = v10[v16 - 1];
					*a3 = v18;
					if ((unsigned __int16)(v18 - 98) > 5u)
					{
						*a5 = (unsigned __int16)v10[v16 + 1];
						v19 = (unsigned __int16)v10[v16];
						*a6 = v19;
						if (!v19)
							*a3 = (*a3 != 104) + 39;
						if (*a5 == *a6)
							*a3 = 41;
						if (a7)
							*a7 = &v10[v17 + 2];
					}
					else
					{
						*a3 = v18 - 65;
						if (a7)
						{
							*a7 = &v10[v16];
							return (unsigned __int16*)v10;
						}
					}
					return (unsigned __int16*)v10;
				}
				*a3 -= 52;
				v11 = 0;
				goto LABEL_11;
			}
			*a4 = 32;
			*a3 -= 39;
		}
		else
		{
			*a4 = 31;
			*a3 -= 26;
		}
	}
	else
	{
		*a4 = 30;
		*a3 -= 13;
	}
LABEL_12:
	if ((unsigned __int16)(*a3 - 39) <= 2u || *a3 == 45)
	{
		v12 = (unsigned __int16)*v10++;
		*a5 = v12;
	}
	if (*a4)
	{
		if (a7)
		{
			*a7 = v10 + 1;
			if (*(_DWORD*)(a1 + 316))
			{
				if ((*v10 & 0xFC00) == 0xD800)
				{
					*a7 = v10 + 2;
					return (unsigned __int16*)v10;
				}
			}
		}
		return (unsigned __int16*)v10;
	}
	*a4 = *v10;
	if (a7)
	{
		v13 = sub_140930750(a1, v10);
		*v14 = v13;
	}
	return (unsigned __int16*)(v10 + 1);
}
// 14092F230: variable 'v14' is possibly undefined
// 14092F233: variable 'v10' is possibly undefined

