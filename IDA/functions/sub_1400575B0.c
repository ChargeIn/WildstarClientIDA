#include "../winhttp.h"

//----- (00000001400575B0) ----------------------------------------------------
void __fastcall sub_1400575B0(__int64 a1)
{
	_QWORD* v2; // r15
	int v3; // edi
	int v4; // ebp
	unsigned __int64 v5; // rsi
	__int64* v6; // rax
	__int64* v7; // rbx
	unsigned __int64 v8; // rcx

	if (*(int*)(a1 + 8) > 1)
	{
		v2 = *(_QWORD**)(a1 + 16);
		v3 = 1;
		v4 = -2;
		v5 = sub_1400585E0((__int64)v2, -1);
		while (1)
		{
			v6 = (__int64*)sub_1400580E0((__int64)v2, v4);
			v7 = v6;
			switch (*((_DWORD*)v6 + 2))
			{
			case 3:
				if (!(unsigned int)sub_14005E620((__int64)v2, (__int64)v6))
				{
				LABEL_12:
					v8 = 0i64;
					break;
				}
				v8 = *(_QWORD*)(*v7 + 16);
				break;
			case 4:
				v8 = *(_QWORD*)(*v6 + 16);
				break;
			case 5:
				v8 = (int)sub_14005C8E0(*v6);
				break;
			case 7:
				v8 = *(_QWORD*)(*v6 + 32);
				break;
			default:
				goto LABEL_12;
			}
			if (*(_DWORD*)(a1 + 8) - v3 + 1 >= 10 || v5 > v8)
			{
				++v3;
				v5 += v8;
				--v4;
				if (v3 < *(_DWORD*)(a1 + 8))
					continue;
			}
			sub_1400590E0(v2, v3);
			*(_DWORD*)(a1 + 8) += 1 - v3;
			return;
		}
	}
}

