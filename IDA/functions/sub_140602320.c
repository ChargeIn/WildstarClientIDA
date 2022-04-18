#include "../winhttp.h"

//----- (0000000140602320) ----------------------------------------------------
__int64 __fastcall sub_140602320(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rbx
	int v7; // r14d
	void(__fastcall * **v8)(_QWORD, __int64); // rcx
	int* v10; // rax
	int v11; // r15d
	__int64 v12; // r14
	__int64 v13; // rcx
	unsigned __int64 v14; // r15
	__int64 v15; // r14
	unsigned __int64 v16; // r15
	__int64 v17; // r12
	__int64 v18; // rdx
	__int64 v19; // r14
	__int64 v20; // r13
	__int64 v21; // r8
	void(__fastcall * **v22)(_QWORD, __int64); // rcx
	__int64 v23[2]; // [rsp+40h] [rbp-48h] BYREF
	unsigned __int64 v24; // [rsp+98h] [rbp+10h] BYREF
	unsigned __int64 v25; // [rsp+A0h] [rbp+18h] BYREF

	sub_1406070A0((__int64)a1);
	if ((*(_BYTE*)(a2 + 24) & 1) != 0 && a1[8])
	{
		v4 = a1[9];
		if (v4)
		{
			v23[0] = *(_QWORD*)(v4 + 72);
			v23[1] = 3i64;
			sub_140602AE0((__int64)a1, (__int64)v23);
		}
		v5 = sub_14018B280(136i64, 0);
		v6 = (__int64)v5;
		if (v5)
		{
			v5[2] = 0;
			v5[4] = 0;
			*((_QWORD*)v5 + 3) = 0i64;
			*((_QWORD*)v5 + 4) = 0i64;
			v5[10] = 1;
			v5[11] = 2;
			*((_QWORD*)v5 + 6) = 3i64;
			v5[14] = -1;
			*(_QWORD*)(v5 + 15) = 0i64;
			*((_QWORD*)v5 + 9) = 0i64;
			v5[20] = 0;
			*((_QWORD*)v5 + 12) = 0i64;
			*((_QWORD*)v5 + 11) = 0i64;
			*((_QWORD*)v5 + 13) = 0i64;
			*(_QWORD*)v5 = off_140B6F2F0;
			*((_QWORD*)v5 + 15) = 0i64;
			*((_QWORD*)v5 + 14) = 0i64;
			*((_QWORD*)v5 + 16) = 0i64;
		}
		else
		{
			v6 = 0i64;
		}
		a1[9] = v6;
		v7 = sub_14079EB30(v6, *(_QWORD*)(a2 + 16), *(_DWORD*)(a2 + 32), *(_DWORD*)(a2 + 24));
		if (v7 < 0)
		{
			v8 = (void(__fastcall***)(_QWORD, __int64))a1[9];
			if (v8)
				(**v8)(v8, 1i64);
			a1[9] = 0i64;
			return (unsigned int)v7;
		}
		goto LABEL_19;
	}
	a1[9] = a1[8];
	v10 = sub_14018B280(136i64, 0);
	v6 = (__int64)v10;
	if (v10)
	{
		v10[2] = 0;
		v10[4] = 0;
		*((_QWORD*)v10 + 3) = 0i64;
		*((_QWORD*)v10 + 4) = 0i64;
		v10[10] = 1;
		v10[11] = 2;
		*((_QWORD*)v10 + 6) = 3i64;
		v10[14] = -1;
		*(_QWORD*)(v10 + 15) = 0i64;
		*((_QWORD*)v10 + 9) = 0i64;
		v10[20] = 0;
		*((_QWORD*)v10 + 12) = 0i64;
		*((_QWORD*)v10 + 11) = 0i64;
		*((_QWORD*)v10 + 13) = 0i64;
		*(_QWORD*)v10 = off_140B6F2F0;
		*((_QWORD*)v10 + 15) = 0i64;
		*((_QWORD*)v10 + 14) = 0i64;
		*((_QWORD*)v10 + 16) = 0i64;
	}
	else
	{
		v6 = 0i64;
	}
	a1[8] = v6;
	v11 = *(_DWORD*)(a2 + 24);
	v12 = *(_QWORD*)(a2 + 16);
	if (!*(_QWORD*)(v6 + 72) && v12 && (int)sub_14079EB90(v6, *(_DWORD*)(a2 + 32)) >= 0)
	{
		*(_QWORD*)(v6 + 72) = v12;
		*(_DWORD*)(v6 + 8) = v11;
	LABEL_19:
		sub_140437A10((_QWORD*)qword_140C658D8, 0xC2u, 0, 0i64, 0, 0, 1);
		*(_QWORD*)(v6 + 16) = *(_QWORD*)(a2 + 64);
		v14 = 0i64;
		*(_QWORD*)(v6 + 24) = *(_QWORD*)(a2 + 72);
		*(_DWORD*)(v6 + 40) = *(_DWORD*)(a2 + 36);
		*(_DWORD*)(v6 + 44) = *(_DWORD*)(a2 + 40);
		*(_DWORD*)(v6 + 48) = *(_DWORD*)(a2 + 44);
		*(_DWORD*)(v6 + 52) = *(_DWORD*)(a2 + 48);
		*(_DWORD*)(v6 + 32) = *(_DWORD*)(a2 + 80);
		if (*(_DWORD*)(a2 + 28))
		{
			v15 = 0i64;
			do
			{
				sub_140607120(v13, v6, v15 + *(_QWORD*)(a2 + 56));
				++v14;
				v15 += 200i64;
			} while (v14 < *(unsigned int*)(a2 + 28));
		}
		v16 = 0i64;
		if (*(_DWORD*)(a2 + 28))
		{
			v17 = 0i64;
			do
			{
				v18 = v17 + *(_QWORD*)(a2 + 56);
				v19 = v18 + 88;
				if (*(_DWORD*)(v18 + 88) && *(_QWORD*)(v18 + 96))
				{
					if (sub_14079EE60(v6, v18, &v24))
						v20 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8 * v24);
					else
						v20 = 0i64;
					if (sub_14079EE60(v6, v19, &v25))
						v21 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8 * v25);
					else
						v21 = 0i64;
					sub_140604C70((__int64)a1, v20, v21);
				}
				++v16;
				v17 += 200i64;
			} while (v16 < *(unsigned int*)(a2 + 28));
		}
		a1[10] = *(_QWORD*)a2;
		a1[11] = *(_QWORD*)(a2 + 8);
		sub_14079EE60(v6, a2, (unsigned __int64*)(v6 + 104));
		if (v6 == a1[8])
		{
			sub_140607310((__int64)a1, a2 + 88);
			sub_140605020((__int64)a1, 0);
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Group_Join", byte_1409D0E2F);
		}
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		return 0i64;
	}
	v22 = (void(__fastcall***)(_QWORD, __int64))a1[8];
	if (v22)
		(**v22)(v22, 1i64);
	a1[8] = 0i64;
	return 2147500037i64;
}
// 14060256A: variable 'v13' is possibly undefined
// 1409D0E2F: using guessed type _BYTE byte_1409D0E2F[18];
// 140B6F2F0: using guessed type __int64 (__fastcall *off_140B6F2F0[271])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;

