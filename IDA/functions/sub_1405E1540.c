#include "../winhttp.h"

//----- (00000001405E1540) ----------------------------------------------------
__int64 __fastcall sub_1405E1540(__int64 a1, _DWORD* a2)
{
	int v4; // eax
	int v5; // edx
	__int16* v6; // rax
	bool v7; // zf
	int v8; // eax
	unsigned __int64 v10; // rbp
	_QWORD* v11; // rbx
	unsigned int* v12; // rcx

	if (*a2 == *(_DWORD*)(qword_140C635F0 + 5736))
	{
		if (!a2[1])
		{
			v4 = *(_DWORD*)(a1 + 656);
			if (v4 == 1)
			{
				v5 = 552501;
			LABEL_7:
				v6 = sub_14034BDD0(a1, v5);
				sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v6, 0, 0i64);
				goto LABEL_8;
			}
			if (v4 == 2)
			{
				v5 = 552502;
				goto LABEL_7;
			}
		}
	LABEL_8:
		v7 = *(_DWORD*)(a1 + 752) == 4;
		v8 = a2[1];
		*(_DWORD*)(a1 + 656) = v8;
		if (v7)
			*(_DWORD*)(a1 + 752) = v8;
		if (*(_DWORD*)(a1 + 656) == *(_DWORD*)(a1 + 752))
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountPersonalStatusUpdate", &unk_1409D0EFD);
		else
			sub_1405DF720(a1);
		return 0i64;
	}
	v10 = (*(__int64(__fastcall**)(_DWORD*))(a1 + 424))(a2);
	v11 = *(_QWORD**)(*(_QWORD*)(a1 + 416) + 8 * (v10 % *(_QWORD*)(a1 + 408)));
	if (v11)
	{
		while (v10 != *v11 || !(*(unsigned int(__fastcall**)(_DWORD*, _QWORD*))(a1 + 432))(a2, v11 + 2))
		{
			v11 = (_QWORD*)v11[1];
			if (!v11)
				return 0i64;
		}
		if (v11 != (_QWORD*)-24i64)
		{
			v12 = (unsigned int*)v11[3];
			v12[16] = a2[1];
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountDataUpdate", byte_1409EACD4, *v12);
		}
	}
	return 0i64;
}
// 1409EACD4: using guessed type _BYTE byte_1409EACD4[24];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

