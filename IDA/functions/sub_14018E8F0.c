#include "../winhttp.h"

//----- (000000014018E8F0) ----------------------------------------------------
__int64 __fastcall sub_14018E8F0(WCHAR* a1)
{
	WCHAR* v1; // rbx
	WCHAR v2; // cx
	__int64 v3; // rdi
	int v4; // esi
	WCHAR v5; // cx
	int v6; // eax

	v1 = a1;
	if ((unsigned int)sub_1407DFF38(*a1))
	{
		do
		{
			v2 = v1[1];
			++v1;
		} while ((unsigned int)sub_1407DFF38(v2));
	}
	v3 = 0i64;
	if (*v1 == 45)
	{
		v4 = 1;
	}
	else
	{
		v4 = 0;
		if (*v1 != 43)
			;
	}
	for (++v1; (unsigned int)sub_1407DFF14(*v1); ++v1)
	{
		v5 = *v1;
		if ((unsigned __int16)(*v1 - 48) > 9u)
		{
			if ((unsigned __int16)(v5 - 97) > 0x19u)
			{
				if ((unsigned __int16)(v5 - 65) > 0x19u)
					break;
				v6 = v5 - 55;
			}
			else
			{
				v6 = v5 - 87;
			}
		}
		else
		{
			v6 = v5 - 48;
		}
		if ((unsigned __int64)v6 >= 0xA)
			break;
		v3 = v6 + 10 * v3;
	}
	if (v4)
		return -v3;
	return v3;
}

