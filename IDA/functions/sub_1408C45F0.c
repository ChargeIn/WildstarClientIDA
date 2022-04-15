#include "../winhttp.h"

//----- (00000001408C45F0) ----------------------------------------------------
void __fastcall sub_1408C45F0(__int64 a1, __int64 a2)
{
	_DWORD* v4; // rcx

	if (!*(_BYTE*)(*(_QWORD*)(a1 + 328) + 154i64) || !sub_1408C5050(a1, a2))
	{
		if (*(_BYTE*)(*(_QWORD*)(a1 + 328) + 88i64))
			sub_1408C5600(a1);
		sub_1408A1640((unsigned int*)(a1 + 272), a2, *(_DWORD*)(a1 + 280));
		if (*(_WORD*)(a2 + 18))
		{
			switch (*(_DWORD*)(a2 + 8))
			{
			case 3:
			case 4:
			case 8:
			case 0xB:
			case 0xC:
				sub_1408C5C90(a1, a2);
				break;
			case 7:
			case 0xF:
			case 0x33:
				sub_1408C64E0(a1, a2);
				break;
			case 0x37:
			case 0x3B:
			case 0x3F:
				sub_1408C70B0(a1, a2);
				break;
			default:
				break;
			}
			v4 = *(_DWORD**)(a1 + 328);
			*(_DWORD*)(a1 + 344) = v4[2];
			*(_DWORD*)(a1 + 348) = v4[3];
			*(_DWORD*)(a1 + 352) = v4[4];
			*(_DWORD*)(a1 + 356) = v4[5];
			*(_DWORD*)(a1 + 360) = v4[6];
			*(_DWORD*)(a1 + 364) = v4[7];
			*(_DWORD*)(a1 + 368) = v4[8];
			*(_DWORD*)(a1 + 372) = v4[9];
			*(_DWORD*)(a1 + 376) = v4[10];
			*(_DWORD*)(a1 + 380) = v4[11];
			*(_DWORD*)(a1 + 384) = v4[12];
			*(_DWORD*)(a1 + 388) = v4[13];
			*(_DWORD*)(a1 + 392) = v4[14];
			*(_DWORD*)(a1 + 396) = v4[15];
			*(_DWORD*)(a1 + 400) = v4[16];
			*(_DWORD*)(a1 + 404) = v4[17];
			*(_DWORD*)(a1 + 408) = v4[18];
			*(_DWORD*)(a1 + 412) = v4[19];
			*(_DWORD*)(a1 + 416) = v4[20];
			*(_DWORD*)(a1 + 420) = v4[21];
			*(_DWORD*)(a1 + 424) = v4[22];
		}
	}
}

