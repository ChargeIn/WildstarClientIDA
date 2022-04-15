#include "../winhttp.h"

//----- (00000001407DE220) ----------------------------------------------------
__int64 sub_1407DE220(unsigned __int64 a1, signed __int8* a2, ...)
{
	unsigned int v3; // edi
	int v5; // eax
	_BYTE* v6; // rdx
	char* v7; // rcx
	int v8; // ebx
	va_list va; // [rsp+60h] [rbp+18h] BYREF

	va_start(va, a2);
	v3 = 0;
	if (a1 && a2)
	{
		sub_1407DDFA8(a1);
		if ((*(_BYTE*)(a1 + 24) & 0x40) == 0)
		{
			v5 = sub_1407EA35C(a1);
			if ((unsigned int)(v5 + 2) <= 1)
			{
				v7 = (char*)&unk_140C0FFB0;
				v6 = &unk_140C0FFB0;
			}
			else
			{
				v6 = (_BYTE*)(qword_140C60410[(__int64)v5 >> 5] + 88i64 * (v5 & 0x1F));
				v7 = (char*)&unk_140C0FFB0;
			}
			if ((v6[56] & 0x7F) != 0)
				goto LABEL_12;
			if ((unsigned int)(v5 + 2) > 1)
				v7 = (char*)(qword_140C60410[(__int64)v5 >> 5] + 88i64 * (v5 & 0x1F));
			if (v7[56] < 0)
			{
			LABEL_12:
				*(_DWORD*)sub_1407DE1B0() = 22;
				sub_1407DC370();
				v3 = -1;
			}
		}
		if (!v3)
		{
			v8 = sub_1407E3974(a1);
			v3 = sub_1407E96D0(a1, a2, 0i64, (int*)va);
			sub_1407E393C(v8, a1);
		}
		sub_1407DE044(a1);
		return v3;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

