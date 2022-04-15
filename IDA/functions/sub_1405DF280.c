#include "../winhttp.h"

//----- (00000001405DF280) ----------------------------------------------------
void __fastcall sub_1405DF280(__int64 a1, _WORD* a2)
{
	__int64 v4; // [rsp+20h] [rbp-18h]
	_WORD* v5; // [rsp+50h] [rbp+18h] BYREF

	if ((unsigned int)sub_1405DF7C0(a1))
	{
		if (!(unsigned int)sub_1403E1170(a2, 0x12u))
		{
			LODWORD(v4) = 33;
		LABEL_4:
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, v4);
			return;
		}
		if ((*(unsigned int(__fastcall**)(__int64, _WORD*, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65890 + 8i64))(
			qword_140C65890,
			a2,
			0i64,
			0i64,
			0))
		{
			LODWORD(v4) = 39;
			goto LABEL_4;
		}
		if (*(_DWORD*)(a1 + 656) != 4)
		{
			v5 = a2;
			sub_1400161D0(qword_140C635F0, 0x39Bu, (__int64)&v5);
		}
	}
}
// 1405DF2D5: variable 'v4' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65890: using guessed type __int64 qword_140C65890;
// 140C65898: using guessed type __int64 qword_140C65898;

