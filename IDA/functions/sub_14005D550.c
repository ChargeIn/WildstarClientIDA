#include "../winhttp.h"

//----- (000000014005D550) ----------------------------------------------------
__int64 __fastcall sub_14005D550(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 result; // rax
	int v5; // eax
	int v6; // eax
	__int64 v7; // r8
	__int64 v8; // rdx
	void* v9; // rdx

	v2 = a2;
	result = *(unsigned __int8*)(a2 + 8) - 4;
	switch (*(_BYTE*)(a2 + 8))
	{
	case 4:
		-- * (_DWORD*)(*(_QWORD*)(a1 + 32) + 8i64);
		v7 = *(_QWORD*)(a2 + 16) + 33i64;
		goto LABEL_16;
	case 5:
		v9 = *(void**)(a2 + 32);
		if (v9 != &unk_140A12148)
			sub_140064780(a1, (__int64)v9, 40 * (1i64 << *(_BYTE*)(v2 + 11)), 0i64);
		sub_140064780(a1, *(_QWORD*)(v2 + 24), 16i64 * *(int*)(v2 + 56), 0i64);
		v7 = 64i64;
		a2 = v2;
		goto LABEL_16;
	case 6:
		v5 = *(unsigned __int8*)(a2 + 11);
		if (*(_BYTE*)(a2 + 10))
			v6 = 16 * v5 + 40;
		else
			v6 = 8 * v5 + 40;
		v7 = v6;
		goto LABEL_16;
	case 7:
		v7 = *(_QWORD*)(a2 + 32) + 48i64;
		goto LABEL_16;
	case 8:
		sub_140060CB0(a2, *(_QWORD*)(a2 + 64));
		sub_140064780(a1, *(_QWORD*)(v2 + 80), 40i64 * *(int*)(v2 + 92), 0i64);
		sub_140064780(a1, *(_QWORD*)(v2 + 64), 16i64 * *(int*)(v2 + 88), 0i64);
		v7 = 184i64;
		a2 = v2;
		goto LABEL_16;
	case 9:
		return sub_140060E30(a1, a2);
	case 0xA:
		v8 = a2 + 24;
		if (*(_QWORD*)(v2 + 16) != v8)
		{
			*(_QWORD*)(*(_QWORD*)(v2 + 32) + 24i64) = *(_QWORD*)v8;
			*(_QWORD*)(*(_QWORD*)v8 + 32i64) = *(_QWORD*)(v2 + 32);
		}
		v7 = 40i64;
		a2 = v2;
	LABEL_16:
		result = sub_140064780(a1, a2, v7, 0i64);
		break;
	default:
		return result;
	}
	return result;
}

