#include "../winhttp.h"

//----- (00000001407F3700) ----------------------------------------------------
__int64 __fastcall sub_1407F3700(unsigned __int16** a1)
{
	char* v2; // rsi
	__int64 v3; // rbx
	_BYTE* v4; // rax
	bool v5; // sf
	int v6; // ecx
	int v8; // ecx
	__int64 v9; // rbx
	int v10; // ebx
	int v11; // ecx
	int v12; // ecx
	int v13; // eax
	WCHAR v14; // [rsp+40h] [rbp+8h] BYREF
	CHAR v15; // [rsp+48h] [rbp+10h] BYREF
	char v16; // [rsp+49h] [rbp+11h]

	v2 = (char*)&unk_140C0FFB0;
	if (((_BYTE)a1[3] & 0x40) == 0)
	{
		if ((unsigned int)sub_1407EA35C((__int64)a1) == -1 || (unsigned int)sub_1407EA35C((__int64)a1) == -2)
		{
			v4 = &unk_140C0FFB0;
		}
		else
		{
			v3 = (__int64)(int)sub_1407EA35C((__int64)a1) >> 5;
			v4 = (_BYTE*)(qword_140C60410[v3] + 88 * (sub_1407EA35C((__int64)a1) & 0x1F));
		}
		if ((v4[56] & 0x7F) != 0)
		{
			v5 = -- * ((_DWORD*)a1 + 2) < 0;
			if (v5)
			{
				v6 = sub_1407F6FDC((__int64)a1);
			}
			else
			{
				v6 = *(unsigned __int8*)*a1;
				*a1 = (unsigned __int16*)((char*)*a1 + 1);
			}
			if (v6 != -1)
			{
				v5 = -- * ((_DWORD*)a1 + 2) < 0;
				LOBYTE(v14) = v6;
				if (v5)
				{
					v8 = sub_1407F6FDC((__int64)a1);
				}
				else
				{
					v8 = *(unsigned __int8*)*a1;
					*a1 = (unsigned __int16*)((char*)*a1 + 1);
				}
				if (v8 != -1)
				{
					HIBYTE(v14) = v8;
					return v14;
				}
			}
			return 0xFFFFi64;
		}
	}
	if (((_BYTE)a1[3] & 0x40) == 0)
	{
		if ((unsigned int)sub_1407EA35C((__int64)a1) != -1 && (unsigned int)sub_1407EA35C((__int64)a1) != -2)
		{
			v9 = (__int64)(int)sub_1407EA35C((__int64)a1) >> 5;
			v2 = (char*)(qword_140C60410[v9] + 88 * (sub_1407EA35C((__int64)a1) & 0x1F));
		}
		if (v2[8] < 0)
		{
			v5 = -- * ((_DWORD*)a1 + 2) < 0;
			v10 = 1;
			if (v5)
			{
				v11 = sub_1407F6FDC((__int64)a1);
			}
			else
			{
				v11 = *(unsigned __int8*)*a1;
				*a1 = (unsigned __int16*)((char*)*a1 + 1);
			}
			if (v11 == -1)
				return 0xFFFFi64;
			v15 = v11;
			if ((unsigned int)sub_1407DFECC(v11))
			{
				v5 = -- * ((_DWORD*)a1 + 2) < 0;
				if (v5)
				{
					v12 = sub_1407F6FDC((__int64)a1);
				}
				else
				{
					v12 = *(unsigned __int8*)*a1;
					*a1 = (unsigned __int16*)((char*)*a1 + 1);
				}
				if (v12 == -1)
				{
					sub_1407F7228(v15, (unsigned __int64)a1);
					return 0xFFFFi64;
				}
				v16 = v12;
				v10 = 2;
			}
			if ((unsigned int)sub_1407F156C(&v14, &v15, v10) != -1)
				return v14;
			*(_DWORD*)sub_1407DE1B0() = 42;
			return 0xFFFFi64;
		}
	}
	v13 = *((_DWORD*)a1 + 2) - 2;
	*((_DWORD*)a1 + 2) = v13;
	if (v13 < 0)
		return sub_1407F7288((__int64)a1);
	return *(*a1)++;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

