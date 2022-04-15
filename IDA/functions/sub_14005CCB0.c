#include "../winhttp.h"

//----- (000000014005CCB0) ----------------------------------------------------
__int64 __fastcall sub_14005CCB0(__int64 a1, __int64 a2)
{
	unsigned int v2; // r15d
	__int64 v4; // rdx
	int v6; // ebp
	int v7; // esi
	__int64 v8; // rcx
	_QWORD* v9; // rax
	_QWORD* v10; // r14
	__int64 v12; // r8
	__int64 v13; // r9
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rax
	__int64 v17; // r9
	__int64 v18; // r10
	__int64 v19; // r8
	__int64 v20; // rdx

	v2 = 0;
	v4 = *(_QWORD*)(a2 + 16);
	v6 = 0;
	v7 = 0;
	if (v4 && (*(_BYTE*)(v4 + 9) & 3) != 0)
		sub_14005C960(a1, v4);
	v8 = *(_QWORD*)(a2 + 16);
	if (!v8)
		goto LABEL_14;
	if ((*(_BYTE*)(v8 + 10) & 8) != 0)
		goto LABEL_14;
	v9 = sub_140062370(v8, 3, *(_QWORD*)(a1 + 320));
	v10 = v9;
	if (!v9)
		goto LABEL_14;
	if (*((_DWORD*)v9 + 2) != 4)
		goto LABEL_14;
	LOBYTE(v6) = sub_1407DE0B4(*v9 + 32i64, 0x6Bu) != 0i64;
	LOBYTE(v7) = sub_1407DE0B4(*v10 + 32i64, 0x76u) != 0i64;
	if (!v6 && !v7)
		goto LABEL_14;
	*(_BYTE*)(a2 + 9) &= 0xE7u;
	*(_BYTE*)(a2 + 9) |= 8 * (v6 | (2 * v7));
	*(_QWORD*)(a2 + 48) = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(a1 + 72) = a2;
	if (v6)
	{
		if (v7)
			return 1i64;
		goto LABEL_14;
	}
	if (!v7)
	{
	LABEL_14:
		v12 = *(int*)(a2 + 56);
		if (*(_DWORD*)(a2 + 56))
		{
			v13 = 16 * v12;
			do
			{
				v14 = *(_QWORD*)(a2 + 24);
				v13 -= 16i64;
				--v12;
				if (*(int*)(v13 + v14 + 8) >= 4)
				{
					v15 = *(_QWORD*)(v13 + v14);
					if ((*(_BYTE*)(v15 + 9) & 3) != 0)
						sub_14005C960(a1, v15);
				}
			} while (v12);
		}
	}
	v16 = 1i64 << *(_BYTE*)(a2 + 11);
	v17 = (int)v16;
	if ((_DWORD)v16)
	{
		v18 = 40i64 * (int)v16;
		do
		{
			v18 -= 40i64;
			--v17;
			v19 = v18 + *(_QWORD*)(a2 + 32);
			if (*(_DWORD*)(v19 + 8))
			{
				if (!v6 && *(int*)(v19 + 24) >= 4)
				{
					v20 = *(_QWORD*)(v19 + 16);
					if ((*(_BYTE*)(v20 + 9) & 3) != 0)
						sub_14005C960(a1, v20);
				}
				if (!v7 && *(int*)(v19 + 8) >= 4 && (*(_BYTE*)(*(_QWORD*)v19 + 9i64) & 3) != 0)
					sub_14005C960(a1, *(_QWORD*)v19);
			}
			else if (*(int*)(v19 + 24) >= 4)
			{
				*(_DWORD*)(v19 + 24) = 11;
			}
		} while (v17);
	}
	if (v6 || v7)
		return 1;
	return v2;
}
// 14005CDA4: variable 'v13' is possibly undefined
// 14005CDA8: variable 'v12' is possibly undefined
// 14005CDF4: variable 'v18' is possibly undefined
// 14005CDF8: variable 'v17' is possibly undefined
// 14005CE36: variable 'v19' is possibly undefined

