#include "../winhttp.h"

//----- (0000000140879650) ----------------------------------------------------
void __fastcall sub_140879650(__int64 a1, __int64 a2)
{
	unsigned __int16 v4; // cx
	int v5; // eax
	__int64 v6; // rdx
	int v7; // esi
	__int64 v8; // rax

	if (*(_QWORD*)(a1 + 56))
	{
		v4 = *(_WORD*)(a2 + 16);
		if (!v4)
		{
			*(_DWORD*)(a2 + 56) = 17;
			return;
		}
		v5 = *(_DWORD*)(a1 + 132);
		v6 = *(_QWORD*)(a1 + 64);
		v7 = v5 & 0x3FFFF;
		if (v6)
		{
			*(_QWORD*)a2 = v6;
		}
		else
		{
			if (v5 < 0)
			{
				if ((unsigned int)sub_140868400(a2, v4, v7) != 1)
				{
				LABEL_7:
					*(_DWORD*)(a2 + 56) = 2;
					return;
				}
				goto LABEL_12;
			}
			v8 = sub_140832B30((HIBYTE(v5) & 0x1F) * v4);
			if (!v8)
				goto LABEL_7;
			*(_QWORD*)a2 = v8;
		}
		*(_DWORD*)(a2 + 8) = v7;
		*(_WORD*)(a2 + 18) = 0;
	LABEL_12:
		*(_DWORD*)(a2 + 12) = 43;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 96i64))(*(_QWORD*)(a1 + 56), a2);
		*(_DWORD*)(a2 + 56) = *(_DWORD*)(a2 + 12);
		*(_QWORD*)(a1 + 64) = *(_QWORD*)a2;
		*(_QWORD*)(a1 + 72) = *(_QWORD*)(a2 + 8);
		*(_QWORD*)(a1 + 80) = *(_QWORD*)(a2 + 16);
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(a2 + 24);
		*(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 + 32);
		*(_QWORD*)(a1 + 104) = *(_QWORD*)(a2 + 40);
		*(_QWORD*)(a1 + 112) = *(_QWORD*)(a2 + 48);
		return;
	}
	*(_QWORD*)(a2 + 12) = 43i64;
	*(_QWORD*)a2 = 0i64;
	*(_WORD*)(a2 + 24) = 0;
	*(_QWORD*)(a2 + 32) = 0i64;
	*(_DWORD*)(a2 + 40) = -1;
	*(_DWORD*)(a2 + 44) = 1065353216;
	*(_DWORD*)(a2 + 48) = -1;
	*(_DWORD*)(a2 + 52) = 1;
	*(_DWORD*)(a2 + 56) = 2;
}

