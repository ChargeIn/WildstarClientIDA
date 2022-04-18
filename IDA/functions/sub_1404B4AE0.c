#include "../winhttp.h"

//----- (00000001404B4AE0) ----------------------------------------------------
void __fastcall sub_1404B4AE0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	bool v4; // zf
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx

	if (qword_140C65898)
	{
		v2 = *(_QWORD*)(qword_140C65898 + 29504);
		if (v2)
			Apollo_LUAEvent(v2, "HousingPanelControlClose", byte_1409D0F4F);
	}
	sub_1404B4800(qword_140C659F0 + 272);
	sub_1404B4890(qword_140C659F0 + 240);
	v3 = *(_QWORD*)(a1 + 144);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 144) = 0i64;
	}
	v4 = qword_140C659F8 == 0;
	*(_DWORD*)(a1 + 160) = 0;
	if (!v4)
		sub_1404C8C20();
	sub_140019490((_QWORD*)(qword_140C659F0 + 304));
	sub_1405B0EC0(*(_QWORD**)(qword_140C659F0 + 824));
	*(_DWORD*)a1 = 0;
	while (*(_QWORD*)(a1 + 640))
	{
		v5 = *(_QWORD**)(a1 + 640);
		if (v5)
		{
			v6 = v5[1];
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				v5[1] = 0i64;
			}
			v7 = (_QWORD*)v5[2];
			if (v7)
				*v7 = v5[3];
			v8 = v5[3];
			if (v8)
				*(_QWORD*)(v8 + 16) = v5[2];
			v5[2] = 0i64;
			v5[3] = 0i64;
			v5[2] = 0i64;
			v5[3] = 0i64;
			v9 = v5[1];
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			sub_14018B900((__int64)v5, 0);
		}
	}
}
// 1409D0F4F: using guessed type _BYTE byte_1409D0F4F[19];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;

