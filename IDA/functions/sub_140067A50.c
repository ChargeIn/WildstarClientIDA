#include "../winhttp.h"

//----- (0000000140067A50) ----------------------------------------------------
__int64 __fastcall sub_140067A50(__int64 a1, __int64 a2)
{
	int v3; // ecx
	_QWORD* v5; // r9
	char v6; // al
	__int64 v7; // rcx
	int v8; // eax
	bool v9; // zf
	__int64 result; // rax

	v3 = *(_DWORD*)(a1 + 16);
	switch (v3)
	{
	case 123:
		return sub_140066B10(a1, a2);
	case 263:
		*(_DWORD*)a2 = 3;
		*(_DWORD*)(a2 + 8) = 0;
		goto LABEL_9;
	case 265:
		sub_140064640(a1);
		return sub_140067170(a1, a2, 0, *(_DWORD*)(a1 + 4));
	case 269:
		*(_DWORD*)a2 = 1;
		*(_DWORD*)(a2 + 8) = 0;
		goto LABEL_9;
	case 275:
		*(_DWORD*)a2 = 2;
		*(_DWORD*)(a2 + 8) = 0;
		goto LABEL_9;
	case 279:
		v5 = *(_QWORD**)(a1 + 48);
		v6 = *(_BYTE*)(*v5 + 114i64);
		if (!v6)
			sub_140062CF0(a1, aCannotUseOutsi, v3);
		v7 = *(_QWORD*)(a1 + 48);
		*(_BYTE*)(*v5 + 114i64) = v6 & 0xFB;
		v8 = sub_14006BBF0(v7, 8388645, *(_DWORD*)(v5[3] + 8i64));
		*(_DWORD*)a2 = 14;
		*(_DWORD*)(a2 + 8) = v8;
	LABEL_9:
		*(_QWORD*)(a2 + 16) = -1i64;
		goto LABEL_10;
	case 284:
		*(_DWORD*)(a2 + 8) = 0;
		*(_QWORD*)(a2 + 16) = -1i64;
		*(_DWORD*)a2 = 5;
		*(_QWORD*)(a2 + 8) = *(_QWORD*)(a1 + 24);
		goto LABEL_10;
	case 286:
		sub_140065810(a1, a2, *(_QWORD*)(a1 + 24));
	LABEL_10:
		v9 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v9)
		{
			result = sub_140063BB0(a1, (__int64*)(a1 + 24));
			*(_DWORD*)(a1 + 16) = result;
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			result = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = result;
		}
		break;
	default:
		result = sub_140067740(a1, (int*)a2);
		break;
	}
	return result;
}

