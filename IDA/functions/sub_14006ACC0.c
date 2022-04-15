#include "../winhttp.h"

//----- (000000014006ACC0) ----------------------------------------------------
void __fastcall sub_14006ACC0(__int64 a1, _DWORD* a2, int* a3)
{
	int v5; // edx
	int v6; // ecx
	int v7; // ecx

	if (*a2 != 6)
	{
		switch (*a2)
		{
		case 7:
			v5 = (((unsigned int)sub_14006AB60(a1, a3) | (a2[2] << 17)) << 6) | 8;
			break;
		case 8:
			v5 = (((unsigned int)sub_14006AB60(a1, a3) | (a2[2] << 8)) << 6) | 7;
			break;
		case 9:
			v5 = ((a2[2] | ((sub_14006ABD0(a1, (__int64)a3) | (a2[3] << 9)) << 8)) << 6) | 9;
			break;
		default:
		LABEL_9:
			if (*a3 == 12)
			{
				v6 = a3[2];
				if ((v6 & 0x100) == 0 && v6 >= *(unsigned __int8*)(a1 + 74))
					--* (_DWORD*)(a1 + 60);
			}
			return;
		}
		sub_14006BBF0(a1, v5, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
		goto LABEL_9;
	}
	if (*a3 == 12)
	{
		v7 = a3[2];
		if ((v7 & 0x100) == 0 && v7 >= *(unsigned __int8*)(a1 + 74))
			--* (_DWORD*)(a1 + 60);
	}
	sub_14006A980(a1, a3, a2[2]);
}

