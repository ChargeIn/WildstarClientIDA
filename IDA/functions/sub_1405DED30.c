#include "../winhttp.h"

//----- (00000001405DED30) ----------------------------------------------------
void __fastcall sub_1405DED30(__int64 a1, _WORD* a2, _WORD* a3)
{
	__int64 v5; // [rsp+20h] [rbp-28h]
	__int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF

	if ((unsigned int)sub_1405DF7C0(a1))
	{
		if (!(unsigned int)sub_1403E1170(a2, 0x15u))
		{
			LODWORD(v5) = 34;
		LABEL_4:
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v5);
			return;
		}
		if (!(unsigned int)sub_1403E1170(a3, 0x16u))
		{
			LODWORD(v5) = 10;
			goto LABEL_4;
		}
		if ((*(unsigned int(__fastcall**)(__int64, _WORD*, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C65890 + 8i64))(
			qword_140C65890,
			a3,
			1i64,
			0i64,
			0))
		{
			LODWORD(v5) = 31;
			goto LABEL_4;
		}
		v6[0] = (__int64)a2;
		v6[1] = (__int64)a3;
		sub_1400161D0(qword_140C635F0, 0x397u, (__int64)v6);
	}
}
// 1405DED85: variable 'v5' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65890: using guessed type __int64 qword_140C65890;
// 140C65898: using guessed type __int64 qword_140C65898;

