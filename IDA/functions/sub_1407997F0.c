#include "../winhttp.h"

//----- (00000001407997F0) ----------------------------------------------------
void __fastcall sub_1407997F0(__int64 a1)
{
	switch (*(_DWORD*)a1)
	{
	case 3:
	case 9:
	case 0xF:
	case 0x17:
	case 0x19:
	case 0x1C:
		sub_14018B900(*(_QWORD*)(a1 + 16), 0);
		sub_14018B900(*(_QWORD*)(a1 + 24), 0);
		break;
	case 4:
	case 6:
	case 0x11:
		sub_14018B900(*(_QWORD*)(a1 + 16), 0);
		break;
	default:
		return;
	}
}

