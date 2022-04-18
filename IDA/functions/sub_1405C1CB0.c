#include "../winhttp.h"

//----- (00000001405C1CB0) ----------------------------------------------------
__int64 __fastcall sub_1405C1CB0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // rcx
	int* v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rax
	__int128 v16; // [rsp+30h] [rbp-F8h] BYREF
	__int64(__fastcall * *v17)(); // [rsp+40h] [rbp-E8h] BYREF
	char v18[8]; // [rsp+48h] [rbp-E0h] BYREF
	_WORD* v19; // [rsp+50h] [rbp-D8h]
	_WORD* v20; // [rsp+58h] [rbp-D0h]
	__int128 v21; // [rsp+100h] [rbp-28h]
	int* v22; // [rsp+110h] [rbp-18h]
	unsigned __int64 v23; // [rsp+140h] [rbp+18h] BYREF

	v2 = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4 && (*(_DWORD*)(v4 + 416) != *(_DWORD*)a2 || *(_QWORD*)(v4 + 424) != *(_QWORD*)(a2 + 8)))
	{
		*(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 16);
		*(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 + 24);
		v5 = *(_QWORD*)(v2 + 29504);
		v16 = *(_OWORD*)(a2 + 16);
		Apollo_LUAEvent(v5, "MatchVoteKickBegin", L"y", &v16);
		v2 = qword_140C65898;
	}
	v6 = *(_QWORD*)(v2 + 27728);
	if (v6)
	{
		if (sub_14079EE60(v6, a2 + 16, &v23))
		{
			v7 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8 * v23);
			if (v7)
			{
				sub_1400B6F30((__int64)&v17);
				v22 = 0i64;
				v21 = 0i64;
				v17 = off_140B69230;
				v8 = sub_14018B280(16i64, 0);
				*(_QWORD*)&v21 = v8;
				*((_QWORD*)&v21 + 1) = v8;
				v22 = v8 + 4;
				if (v8)
					*(_WORD*)v8 = 0;
				v9 = sub_14018B280(96i64, 0);
				if (v9)
					v10 = (_QWORD*)sub_1404DDB40((__int64)v9, (int*)(v7 + 32));
				else
					v10 = 0i64;
				sub_1400B7480((__int64)&v17, v10);
				v12 = (int*)sub_14034BDD0(v11, 394062);
				if (v12)
				{
					v13 = 0i64;
					if (*(_WORD*)v12)
					{
						do
							++v13;
						while (*((_WORD*)v12 + v13));
					}
					sub_14001C480((__int64)v18, v12, (int*)((char*)v12 + 2 * v13));
				}
				else if (v19 != v20)
				{
					*v19 = 0;
					v20 = v19;
				}
				v14 = sub_1400B7660(&v17);
				sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v14 + 8), 0, 0i64);
				if ((_QWORD)v21)
					sub_14018B900(v21, 0);
				sub_1400B7390(&v17);
			}
		}
	}
	return 0i64;
}
// 1405C1DF7: variable 'v11' is possibly undefined
// 1409EEC2C: using guessed type wchar_t aY_5[2];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 1405C1CB0: using guessed type char var_E0[8];

