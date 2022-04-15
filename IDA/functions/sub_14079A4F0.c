#include "../winhttp.h"

//----- (000000014079A4F0) ----------------------------------------------------
void __fastcall sub_14079A4F0(__int64 a1)
{
	unsigned int v2; // ebx
	__int64 v3; // rsi
	__int64 v4; // rcx

	v2 = 0;
	if (*(_DWORD*)a1)
	{
		do
		{
			v3 = *(_QWORD*)(a1 + 16) + 72i64 * v2;
			switch (*(_DWORD*)v3)
			{
			case 3:
			case 9:
			case 0xF:
			case 0x17:
			case 0x19:
			case 0x1C:
				sub_14018B900(*(_QWORD*)(v3 + 16), 0);
				v4 = *(_QWORD*)(v3 + 24);
				goto LABEL_5;
			case 4:
			case 6:
			case 0x11:
				v4 = *(_QWORD*)(v3 + 16);
			LABEL_5:
				sub_14018B900(v4, 0);
				break;
			default:
				break;
			}
			++v2;
		} while (v2 < *(_DWORD*)a1);
		*(_DWORD*)a1 = 0;
		*(_DWORD*)(a1 + 8) = 0;
	}
	else
	{
		*(_DWORD*)a1 = 0;
		*(_DWORD*)(a1 + 8) = 0;
	}
}

