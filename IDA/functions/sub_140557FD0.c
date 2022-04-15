#include "../winhttp.h"

//----- (0000000140557FD0) ----------------------------------------------------
__int64 __fastcall sub_140557FD0(__int64 a1, __int64 a2, int a3)
{
	int v4; // edx
	unsigned __int64 v5; // rbx
	__int64 v8; // rax
	int* v9; // rax
	__int64 v10; // r14
	int v11; // eax
	__int64 v12; // rcx
	int* v13; // r9
	int v14; // ebp
	int v15; // r10d
	unsigned int v16; // r10d
	int v17; // r9d
	int v18; // eax
	int v19; // eax
	_QWORD** v20; // rcx
	_QWORD* i; // rax
	__int64(__fastcall * **v22)(); // r8
	int v23; // edx
	int v24; // eax
	int v25; // eax
	int v26; // eax

	v4 = *(_DWORD*)(a1 + 8);
	v5 = 0i64;
	if (!v4)
	{
		v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 4));
		if (v8 && (v9 = *(int**)(v8 + 24)) != 0i64)
			v4 = *v9;
		else
			v4 = 0;
	}
	v10 = *(_QWORD*)(a1 + 48);
	if (a2)
	{
		v11 = sub_14077C8B0(a1, v4, a3, a2, *(_DWORD*)(a1 + 24));
		v14 = sub_14077CA60(v12, v11, *(unsigned int**)(a2 + 8));
		v16 = sub_14077CB20(v10, *v13, v15);
	}
	else
	{
		v14 = 0;
		v16 = 0;
	}
	v17 = 1;
	switch (a3)
	{
	case 0:
		v18 = dword_140C4D0E0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D0E0)
			v18 = *(_DWORD*)qword_140C63750;
		v17 = byte_140C4D0F0[v18];
		break;
	case 1:
		v19 = dword_140C4D120;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D120)
			v19 = *(_DWORD*)qword_140C63750;
		v17 = byte_140C4D130[v19];
		break;
	case 2:
		v20 = *(_QWORD***)(*(_QWORD*)(a1 + 112) + 24i64);
		for (i = *v20; i != v20; ++v5)
			i = (_QWORD*)*i;
		v22 = &off_140C4D090;
		if (v5 > 2)
			v22 = &off_140C4D150;
		v23 = *((_DWORD*)v22 + 4);
		if (*(_DWORD*)qword_140C63750 < v23)
			v23 = *(_DWORD*)qword_140C63750;
		v17 = *((unsigned __int8*)v22 + v23 + 32);
		break;
	case 3:
		v24 = dword_140C4D1E0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D1E0)
			v24 = *(_DWORD*)qword_140C63750;
		v17 = byte_140C4D1F0[v24];
		break;
	case 4:
		v25 = dword_140C4D0A0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D0A0)
			v25 = *(_DWORD*)qword_140C63750;
		v17 = *((unsigned __int8*)&off_140C4D090 + v25 + 32);
		break;
	case 5:
		v26 = dword_140C4D1A0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D1A0)
			v26 = *(_DWORD*)qword_140C63750;
		v17 = byte_140C4D1B0[v26];
		break;
	default:
		return sub_1405581C0((_DWORD*)a1, v14, v16, v17);
	}
	return sub_1405581C0((_DWORD*)a1, v14, v16, v17);
}
// 140558035: variable 'a1' is possibly undefined
// 140558046: variable 'v12' is possibly undefined
// 14055804B: variable 'v13' is possibly undefined
// 140558056: variable 'v15' is possibly undefined
// 140C4D090: using guessed type __int64 (__fastcall **off_140C4D090)();
// 140C4D0A0: using guessed type int dword_140C4D0A0;
// 140C4D0E0: using guessed type int dword_140C4D0E0;
// 140C4D0F0: using guessed type unsigned __int8[32];
// 140C4D120: using guessed type int dword_140C4D120;
// 140C4D130: using guessed type unsigned __int8[32];
// 140C4D150: using guessed type __int64 (__fastcall **off_140C4D150)();
// 140C4D1A0: using guessed type int dword_140C4D1A0;
// 140C4D1B0: using guessed type unsigned __int8 byte_140C4D1B0[32];
// 140C4D1E0: using guessed type int dword_140C4D1E0;
// 140C4D1F0: using guessed type unsigned __int8 byte_140C4D1F0[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

