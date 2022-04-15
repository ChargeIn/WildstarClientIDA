#include "../winhttp.h"

//----- (0000000140021FB0) ----------------------------------------------------
__int64 __fastcall sub_140021FB0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rax
	int* v6; // rsi
	int* v7; // rax
	_DWORD* v8; // rax
	__int64 v9; // rdi
	int v10; // eax
	unsigned int v11; // edx
	int v12; // edx

	result = 0i64;
	if (*(_DWORD*)(a1 + 368) == 1)
	{
		*(_DWORD*)(a1 + 368) = 0;
		if (*(_DWORD*)(a2 + 12) == 3)
		{
			v5 = sub_1401EFEE0(*(_DWORD*)(a1 + 224));
			v6 = (int*)v5;
			if (!v5)
				return sub_1400232F0(a1, 143525);
			if (((*(_DWORD*)(v5 + 92) - 3) & 0xFFFFFFFD) == 0
				|| (v7 = sub_14018B280(616i64, 0)) == 0i64
				|| (v8 = (_DWORD*)sub_14001C590((__int64)v7), (v9 = (__int64)v8) == 0))
			{
				sub_140023400(a1, *(_QWORD*)a2, *(_QWORD*)(a1 + 200), v6[1], v6[2], v6[3]);
				return 0i64;
			}
			if ((int)sub_14001C730(v8) < 0)
			{
				sub_140023400(a1, *(_QWORD*)a2, *(_QWORD*)(a1 + 200), v6[1], v6[2], v6[3]);
			LABEL_16:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				return 0i64;
			}
			(**(void(__fastcall***)(__int64))a1)(a1);
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v9 + 104i64))(v9, sub_140021F40, a1);
			v10 = v6[4];
			if (v10 == 166)
			{
				v11 = 5;
			}
			else
			{
				if (v10 != 167)
				{
				LABEL_15:
					sub_140048100(a1, v9, 0);
					*(_DWORD*)(a1 + 40) = 4;
					*(_QWORD*)(a1 + 552) = *(_QWORD*)a2;
					goto LABEL_16;
				}
				v11 = 4;
			}
			sub_14001CA90(v9, v11);
			goto LABEL_15;
		}
		sub_1400EA3E0(*(_QWORD*)(a1 + 72), "CharacterCreateFailed", byte_1409D0A64);
		v12 = 143525;
		if (*(_DWORD*)(a2 + 12) == 6)
			v12 = 143523;
		return sub_1400232F0(a1, v12);
	}
	return result;
}
// 1409D0A64: using guessed type _BYTE byte_1409D0A64[4];

