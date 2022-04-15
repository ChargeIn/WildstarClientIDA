#include "../winhttp.h"

//----- (000000014027AA50) ----------------------------------------------------
__int64 __fastcall sub_14027AA50(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	__int64 v5; // rcx
	int* v6; // rax
	__int64 v7; // rdi
	int v8; // ebp
	unsigned int v9; // eax
	unsigned __int64 v10; // r14
	int* v11; // rax
	__int64 v12; // rbx
	unsigned __int64 v13; // r9
	_DWORD* v14; // r8
	__int64 v15; // rcx
	int v16; // eax
	int v17; // eax
	unsigned __int64 v18; // r14
	__int64 v19; // r10
	unsigned int v20; // r9d
	__int64 v21; // rcx
	__int64 v22; // rax
	_QWORD* v23; // r8
	unsigned __int64 v24[2]; // [rsp+30h] [rbp-58h] BYREF
	unsigned __int64 v25; // [rsp+40h] [rbp-48h] BYREF
	unsigned __int64 v26; // [rsp+48h] [rbp-40h]
	__int64 v27; // [rsp+50h] [rbp-38h]
	unsigned int v28; // [rsp+98h] [rbp+10h] BYREF

	if (!a2)
		return 2147942487i64;
	v5 = *(_QWORD*)(a1 + 6320);
	v28 = 0;
	result = (*(__int64(__fastcall**)(__int64, __int64, __int64, unsigned int*, _QWORD))(*(_QWORD*)v5 + 64i64))(
		v5,
		28i64,
		2i64,
		&v28,
		0i64);
	if ((int)result >= 0)
	{
		if (v28)
		{
			v6 = sub_14018B280(28i64 * v28 + 16, 0);
			if (v6)
			{
				*(_QWORD*)v6 = &off_140B5F110;
				v7 = (__int64)(v6 + 4);
			}
			else
			{
				v7 = 16i64;
			}
		}
		else
		{
			v7 = 0i64;
		}
		v8 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, unsigned int*, __int64))(**(_QWORD**)(a1 + 6320) + 64i64))(
			*(_QWORD*)(a1 + 6320),
			28i64,
			2i64,
			&v28,
			v7);
		if (v8 >= 0)
		{
			v9 = v28;
			v10 = v28;
			if (v28)
			{
				v11 = sub_14018B280(40i64 * v28 + 16, 0);
				if (v11)
				{
					*(_QWORD*)v11 = &off_140B5F110;
					v12 = (__int64)(v11 + 4);
				}
				else
				{
					v12 = 16i64;
				}
				v9 = v28;
			}
			else
			{
				v12 = 0i64;
			}
			v13 = 0i64;
			if (v9)
			{
				v14 = (_DWORD*)(v7 + 12);
				v15 = v12 + 8;
				do
				{
					++v13;
					*(_DWORD*)(v15 - 8) = *(v14 - 3);
					v16 = *(v14 - 2);
					*(_DWORD*)v15 = 25;
					*(_DWORD*)(v15 + 4) = 23;
					*(_DWORD*)(v15 - 4) = v16;
					v17 = *(v14 - 1) / *v14;
					*(_QWORD*)(v15 + 16) = 0i64;
					*(_DWORD*)(v15 + 24) = 0;
					*(_DWORD*)(v15 + 8) = v17;
					v15 += 40i64;
					v14 += 7;
				} while (v13 < v28);
			}
			v24[0] = 0i64;
			v24[1] = v10;
			sub_1401D3110(&v25, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_140264980, v24, v12, 26);
			v18 = v26;
			sub_1402759A0(a2, v26);
			v19 = v27;
			v20 = 0;
			if (a2[1])
			{
				v21 = 0i64;
				do
				{
					v22 = *(_QWORD*)(v19 + 8 * v21);
					++v20;
					v23 = (_QWORD*)(*a2 + 40 * v21);
					v21 = v20;
					*v23 = *(_QWORD*)(v12 + 40 * v22);
					v23[1] = *(_QWORD*)(v12 + 40 * v22 + 8);
					v23[2] = *(_QWORD*)(v12 + 40 * v22 + 16);
					v23[3] = *(_QWORD*)(v12 + 40 * v22 + 24);
					v23[4] = *(_QWORD*)(v12 + 40 * v22 + 32);
				} while (v20 < (unsigned __int64)a2[1]);
			}
			v8 = 0;
			if (v25 < v18)
				sub_14018B900(v19 + 8 * v25, 0);
			if (v12)
				(**(void(__fastcall***)(__int64))(v12 - 16))(v12 - 16);
		}
		if (v7)
			(**(void(__fastcall***)(__int64))(v7 - 16))(v7 - 16);
		return (unsigned int)v8;
	}
	return result;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();

