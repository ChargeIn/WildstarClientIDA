#include "../winhttp.h"

//----- (0000000140560B20) ----------------------------------------------------
__int64 __fastcall sub_140560B20(__int64 a1)
{
	unsigned int v1; // edi
	unsigned int i; // ebp
	__int64(__fastcall * v4)(wchar_t**, __int64); // rax
	unsigned int v5; // eax
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // r12
	__int64 v9; // r14
	int v10; // ecx
	__int64 v11; // rbx
	int* v12; // rax
	__int64 v13; // rdx
	int* v14; // rdx
	int* v15; // r15
	__int64 v16; // rcx
	unsigned int v17; // eax
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v21; // [rsp+28h] [rbp-40h]
	__int64 v22; // [rsp+30h] [rbp-38h]

	v1 = 0;
	for (i = 0; ; ++i)
	{
		v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
		if (qword_140C63838)
		{
			v5 = qword_140C63838(off_140A6D738, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C63B9C)
			goto LABEL_26;
		if ((int)sub_14023E2A0() < 0)
			break;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C646F0 + 40i64))(qword_140C646F0);
	LABEL_7:
		if (i >= v5)
			break;
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A6D738, i, qword_140C63858);
		LABEL_15:
			v7 = v6;
			goto LABEL_16;
		}
		if (dword_140C63B9C)
		{
			v7 = 0i64;
		}
		else
		{
			if ((int)sub_14023E2A0() >= 0)
			{
				v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C646F0 + 32i64))(qword_140C646F0, i);
				goto LABEL_15;
			}
			v7 = 0i64;
		}
	LABEL_16:
		if (*(_DWORD*)(v7 + 4) < 0x17u && *(_DWORD*)(v7 + 8) < 0x64u)
		{
			v8 = sub_1407A0FD0(a1, *(_DWORD*)(v7 + 16));
			if (v8)
			{
				LODWORD(v21) = *(_DWORD*)(v7 + 8);
				v9 = 2i64 * *(unsigned int*)(v7 + 4);
				LODWORD(v22) = *(_DWORD*)(v7 + 12);
				v10 = (int)*(float*)(v7 + 20);
				v11 = *(_QWORD*)(a1 + 16i64 * *(unsigned int*)(v7 + 4) + 96);
				HIDWORD(v21) = v10;
				v12 = sub_14018DB00(*(_QWORD*)(a1 + 8 * v9 + 88), v11 + 1, 24i64);
				v13 = 3 * v11;
				*(_QWORD*)&v12[2 * v13] = v8;
				*(_QWORD*)&v12[2 * v13 + 2] = v21;
				*(_QWORD*)&v12[2 * v13 + 4] = v22;
				v14 = *(int**)(a1 + 8 * v9 + 88);
				v15 = v12;
				if (v14 != v12)
				{
					sub_1407DB590(v12, v14, 24i64 * *(_QWORD*)(a1 + 8 * v9 + 96));
					v16 = *(_QWORD*)(a1 + 8 * v9 + 88);
					if (v16)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
					*(_QWORD*)(a1 + 8 * v9 + 88) = v15;
				}
				*(_QWORD*)(a1 + 8 * v9 + 96) = v11 + 1;
			}
		}
	}
	v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	while (1)
	{
	LABEL_26:
		if (v4)
		{
			v17 = v4(off_140A6D5E8, qword_140C63858);
			goto LABEL_31;
		}
		if (dword_140C64F0C || (int)sub_14023C920() < 0)
			return 0i64;
		v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C654A8 + 40i64))(qword_140C654A8);
	LABEL_31:
		if (v1 >= v17)
			return 0i64;
		if (qword_140C63848)
		{
			v18 = qword_140C63848(off_140A6D5E8, v1, qword_140C63858);
		}
		else
		{
			if (dword_140C64F0C || (int)sub_14023C920() < 0)
				goto LABEL_40;
			v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654A8 + 32i64))(qword_140C654A8, v1);
		}
		if (v18)
		{
			v19 = *(unsigned int*)(v18 + 4);
			if ((unsigned int)v19 <= 0xA)
				*(_DWORD*)(a1 + 4 * v19 + 1264) = *(_DWORD*)(v18 + 8);
		}
	LABEL_40:
		v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
		++v1;
	}
}
// 140560C66: variable 'v22' is possibly undefined
// 140A6D5E8: using guessed type wchar_t *off_140A6D5E8[2];
// 140A6D738: using guessed type wchar_t *off_140A6D738[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B9C: using guessed type int dword_140C63B9C;
// 140C646F0: using guessed type __int64 qword_140C646F0;
// 140C64F0C: using guessed type int dword_140C64F0C;
// 140C654A8: using guessed type __int64 qword_140C654A8;

