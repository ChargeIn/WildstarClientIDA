#include "../winhttp.h"

//----- (0000000140412AD0) ----------------------------------------------------
void __fastcall sub_140412AD0(__int64 a1)
{
	__int64 v2; // rdx
	int* v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int128 v6; // xmm0

	if (*(_DWORD*)(a1 + 1208) == 6)
	{
		sub_140412C50(a1);
	}
	else if (*(_DWORD*)(a1 + 1204) == 6)
	{
		sub_140412CD0(a1);
	}
	else if (*(_DWORD*)(a1 + 1200) == 6)
	{
		sub_140412FD0(a1);
	}
	else if (*(_QWORD*)a1)
	{
		sub_140413520(a1);
	}
	else
	{
		sub_140413990(a1);
	}
	if (*(int*)(a1 + 1204) < 6)
	{
		*(_DWORD*)(a1 + 792) = 0;
		*(_DWORD*)(a1 + 1204) = 0;
	}
	if (*(int*)(a1 + 1200) < 6)
	{
		*(_DWORD*)(a1 + 1048) = 0;
		*(_DWORD*)(a1 + 1200) = 0;
	}
	if (*(int*)(a1 + 1208) < 6)
	{
		*(_QWORD*)(a1 + 1136) = 0i64;
		*(_DWORD*)(a1 + 1208) = 0;
	}
	v2 = *(_QWORD*)(a1 + 8);
	if (v2)
	{
		v3 = (int*)(v2 + 8);
		if (*(int*)(a1 + 1176) <= 1 && v3)
		{
			v4 = a1 + 32;
			if ((((unsigned __int8)(a1 + 32) | (unsigned __int8)v3) & 0xF) != 0)
			{
				sub_1407DB590((int*)v4, v3, 0x138ui64);
			}
			else
			{
				v5 = 2i64;
				do
				{
					v6 = *(_OWORD*)v3;
					v4 += 128i64;
					v3 += 32;
					*(_OWORD*)(v4 - 128) = v6;
					*(_OWORD*)(v4 - 112) = *((_OWORD*)v3 - 7);
					*(_OWORD*)(v4 - 96) = *((_OWORD*)v3 - 6);
					*(_OWORD*)(v4 - 80) = *((_OWORD*)v3 - 5);
					*(_OWORD*)(v4 - 64) = *((_OWORD*)v3 - 4);
					*(_OWORD*)(v4 - 48) = *((_OWORD*)v3 - 3);
					*(_OWORD*)(v4 - 32) = *((_OWORD*)v3 - 2);
					*(_OWORD*)(v4 - 16) = *((_OWORD*)v3 - 1);
					--v5;
				} while (v5);
				*(_OWORD*)v4 = *(_OWORD*)v3;
				*(_OWORD*)(v4 + 16) = *((_OWORD*)v3 + 1);
				*(_OWORD*)(v4 + 32) = *((_OWORD*)v3 + 2);
				*(_QWORD*)(v4 + 48) = *((_QWORD*)v3 + 6);
			}
			*(_DWORD*)(a1 + 1176) = 1;
		}
		sub_140412690(a1, (int*)(a1 + 180), 0, 1);
	}
}

