#include "../winhttp.h"

//----- (0000000140583A20) ----------------------------------------------------
__int64 __fastcall sub_140583A20(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rdi
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	unsigned int v7; // ebx
	int* v8; // rbp
	__int64 v9; // r15
	__int64 v10; // rbx
	int* v11; // rax
	int* v12; // rdi
	unsigned __int64 v13; // rbx
	__int64 v14; // r15
	int* v15; // rbp
	__int64 v16; // rbx
	int* v17; // rax
	__int64 v18; // rdi
	unsigned __int64 v19; // rbx
	__int64 v20; // rdx
	__int64(__fastcall * *v22)(); // [rsp+40h] [rbp-38h] BYREF
	int v23; // [rsp+48h] [rbp-30h]
	__int64 v24; // [rsp+50h] [rbp-28h]
	int v25; // [rsp+58h] [rbp-20h]

	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v22 = off_140B569F0;
	v24 = v2;
	v25 = 1;
	v23 = -2;
	if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
		sub_14005E2C0(v2);
	v4 = *(_QWORD*)(v2 + 16);
	v5 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v2 + 16) += 16i64;
	v6 = sub_1400578C0(v2);
	v7 = *((_DWORD*)a2 + 4);
	v23 = v6;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v22[1])(&v22))
		sub_1400FAFE0((__int64)&v22, v7, (__int64)off_140C39558, 4ui64);
	v8 = (int*)*a2;
	v9 = *((_QWORD*)&xmmword_140C7DE30 + 1);
	if (*a2)
	{
		v10 = 0i64;
		if (*(_WORD*)v8)
		{
			do
				++v10;
			while (*((_WORD*)v8 + v10));
		}
		v11 = sub_14018B280(2 * v10 + 18, 0);
		if (v11)
		{
			*(_QWORD*)v11 = off_140B55060;
			*((_QWORD*)v11 + 1) = v10;
		}
		else
		{
			v11 = 0i64;
		}
		v12 = v11 + 4;
		v13 = 2 * v10;
		sub_1407DB590(v11 + 4, v8, v13);
		*(_WORD*)((char*)v12 + v13) = 0;
		*((_QWORD*)&xmmword_140C7DE30 + 1) = v12;
	}
	else
	{
		*((_QWORD*)&xmmword_140C7DE30 + 1) = 0i64;
	}
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	v14 = qword_140C7DE40;
	qword_140C7DE48 = a2[3];
	v15 = (int*)a2[1];
	if (v15)
	{
		v16 = 0i64;
		if (*(_WORD*)v15)
		{
			do
				++v16;
			while (*((_WORD*)v15 + v16));
		}
		v17 = sub_14018B280(2 * v16 + 18, 0);
		if (v17)
		{
			*(_QWORD*)v17 = off_140B55060;
			*((_QWORD*)v17 + 1) = v16;
		}
		else
		{
			v17 = 0i64;
		}
		v18 = (__int64)(v17 + 4);
		v19 = 2 * v16;
		sub_1407DB590(v17 + 4, v15, v19);
		*(_WORD*)(v19 + v18) = 0;
		qword_140C7DE40 = v18;
	}
	else
	{
		qword_140C7DE40 = 0i64;
	}
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildInvite", "SSiT", a2[1], *a2, *((_DWORD*)a2 + 5), v23);
	v22 = off_140B56A08;
	if (v24)
		sub_1400579E0(v24, v20, v23);
	return 0i64;
}
// 140583C8B: variable 'v20' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C39558: using guessed type wchar_t *off_140C39558[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE30: using guessed type __int128 xmmword_140C7DE30;
// 140C7DE40: using guessed type __int64 qword_140C7DE40;
// 140C7DE48: using guessed type __int64 qword_140C7DE48;

