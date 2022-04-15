#include "../winhttp.h"

//----- (000000014048C100) ----------------------------------------------------
__int16* __fastcall sub_14048C100(_QWORD* a1, unsigned int a2)
{
	__int16* result; // rax
	__int64 v4; // rcx
	__int64 v5; // rdx
	unsigned int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rcx

	if (a2 >= 0x20)
		return 0i64;
	v4 = a1[3];
	if (!v4)
		return 0i64;
	v5 = *(_QWORD*)(v4 + 8i64 * a2);
	if (!v5)
		return 0i64;
	v6 = *(_DWORD*)(v5 + 12);
	switch (*(_DWORD*)(*a1 + 4i64))
	{
	case 5:
	case 0x10:
	case 0x68:
		v7 = sub_1404835C0(qword_140C65918, v6);
		if (!v7)
			goto LABEL_10;
		return sub_14034BDD0(v8, *(_DWORD*)(v7 + 8));
	case 6:
		v9 = sub_14022AA80(v6);
		goto LABEL_9;
	case 7:
		v11 = sub_1401E94A0(v6);
		if (!v11)
			goto LABEL_10;
		return sub_14034BDD0(v12, *(_DWORD*)(v11 + 20));
	case 8:
		v9 = sub_14024DB80(v6);
		goto LABEL_9;
	case 9:
	case 0x26:
	case 0x28:
	case 0x50:
	case 0x8D:
		if (!sub_140444550(qword_140C658F0, v6))
			goto LABEL_10;
		v13 = sub_1402096E0(v6);
		if (!v13)
			goto LABEL_10;
		return sub_14034BDD0(v14, *(_DWORD*)(v13 + 176));
	case 0xD:
		v9 = sub_1401EA9E0(v6);
		goto LABEL_9;
	case 0x2C:
		v9 = sub_140245C00(v6);
		goto LABEL_9;
	case 0x65:
		v9 = sub_1402413C0(v6);
	LABEL_9:
		if (!v9)
			goto LABEL_10;
		goto LABEL_23;
	case 0x79:
		v15 = sub_14048D310(qword_140C65948, v6);
		if (!v15)
			goto LABEL_10;
		return sub_14034BDD0(v16, *(_DWORD*)(v15 + 68));
	case 0x8C:
		v9 = sub_140206C60(v6);
		if (!v9)
			goto LABEL_10;
	LABEL_23:
		result = sub_14034BDD0(v10, *(_DWORD*)(v9 + 4));
		break;
	default:
	LABEL_10:
		result = 0i64;
		break;
	}
	return result;
}
// 14048C17D: variable 'v8' is possibly undefined
// 14048C1B6: variable 'v12' is possibly undefined
// 14048C1FA: variable 'v14' is possibly undefined
// 14048C237: variable 'v16' is possibly undefined
// 14048C258: variable 'v10' is possibly undefined
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65948: using guessed type __int64 qword_140C65948;

