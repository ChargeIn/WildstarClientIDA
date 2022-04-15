#include "../winhttp.h"

//----- (0000000140014D30) ----------------------------------------------------
__int64 __fastcall sub_140014D30(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
	_QWORD* v7; // rdi
	unsigned int v8; // ebx
	int v9; // esi
	__int64 result; // rax
	char* v11; // rdx
	int v12; // r8d
	char* v13; // [rsp+20h] [rbp-E8h] BYREF
	char v14[32]; // [rsp+30h] [rbp-D8h] BYREF
	__int64 v15; // [rsp+50h] [rbp-B8h]
	char v16; // [rsp+B0h] [rbp-58h]

	if (a4 - 8 <= 1 || a4 == 14)
		return 0i64;
	v7 = *(_QWORD**)(a1 + 5296);
	v8 = 0;
	v9 = 0;
	if (v7)
	{
		while (1)
		{
			result = (*(__int64(__fastcall**)(_QWORD*, _QWORD, _QWORD))(*v7 + 80i64))(v7, a3, a4);
			if ((int)result < 0)
				break;
			v7 = (_QWORD*)v7[4];
			if (!(_DWORD)result)
				v9 = 1;
			if (!v7)
			{
				if (!v9)
					goto LABEL_11;
				return 0i64;
			}
		}
	}
	else
	{
	LABEL_11:
		v16 = 0;
		(*(void(__fastcall**)(__int64, char**, _QWORD))(*(_QWORD*)qword_140C65808 + 56i64))(qword_140C65808, &v13, a3);
		if (v13)
		{
			v11 = v13 + 144;
			if (v16)
			{
				sub_140019670(v14, v11);
			}
			else
			{
				sub_140018930((__int64)v14, (__int64)v11);
				v16 = 1;
			}
		}
		switch (a4)
		{
		case 0u:
		case 1u:
			goto LABEL_21;
		case 2u:
			v12 = 143492;
			goto LABEL_19;
		case 3u:
		case 4u:
		case 6u:
		case 7u:
		case 8u:
		case 0xAu:
		case 0xBu:
		case 0xCu:
		case 0xDu:
			v12 = 143494;
			goto LABEL_19;
		case 0xEu:
			goto LABEL_20;
		default:
			v12 = 143495;
		LABEL_19:
			sub_140014C60(a1 - 256, 0x140000000i64, v12);
		LABEL_20:
			v8 = -2147467259;
		LABEL_21:
			if (v13)
				(*(void(__fastcall**)(char*))(*(_QWORD*)v13 + 8i64))(v13);
			if (v16)
			{
				if (v15)
					sub_14018B900(v15, 0);
			}
			result = v8;
			break;
		}
	}
	return result;
}
// 140C65808: using guessed type __int64 qword_140C65808;

