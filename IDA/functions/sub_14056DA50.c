#include "../winhttp.h"

//----- (000000014056DA50) ----------------------------------------------------
_QWORD* __fastcall sub_14056DA50(_QWORD* a1, __int64 a2, __int64 a3)
{
	unsigned int v5; // ebp
	__int64 v6; // rsi
	int** v7; // rax
	int** v8; // r14
	__int64 v9; // r9
	int* v10; // r10
	__int64 v11; // rcx
	unsigned int v12; // r8d
	__int64 v13; // rdx
	__int64* v14; // rcx
	unsigned int v15; // ebx
	int v16; // eax
	__int64 v17; // rax
	__int64 v18; // r9
	int v19; // edx
	__int64 v20; // rax
	__int64 v21; // r8
	int v22; // ecx
	bool v23; // cl
	int v24; // eax
	bool v25; // al
	__int64* v26; // rcx
	int* v27; // rbx
	__int64 v28; // rcx
	bool v29; // zf
	__int64 v31; // [rsp+30h] [rbp-48h] BYREF
	__int64 v32; // [rsp+80h] [rbp+8h] BYREF
	__int64 v33; // [rsp+90h] [rbp+18h] BYREF
	__int64 v34; // [rsp+98h] [rbp+20h] BYREF

	sub_1405729B0((__int64)a1, a2);
	*a1 = off_140B6C8F8;
	if (a3)
	{
		v5 = 0;
		if (*(_WORD*)(a3 + 4))
		{
			while (1)
			{
				v6 = *(_QWORD*)(a3 + 8) + 16i64 * v5;
				v7 = (int**)sub_140491C60(qword_140C65968, *(_DWORD*)v6);
				v8 = v7;
				if (!v7)
					goto LABEL_43;
				v9 = a1[2];
				v10 = *v7;
				v11 = *(_QWORD*)(v9 + 8);
				v12 = **v7;
				v13 = v9;
				while (v11)
				{
					if (*(_DWORD*)(v11 + 32) < v12)
					{
						v11 = *(_QWORD*)(v11 + 24);
					}
					else
					{
						v13 = v11;
						v11 = *(_QWORD*)(v11 + 16);
					}
				}
				if (v13 == v9 || v12 < *(_DWORD*)(v13 + 32))
				{
					v33 = a1[2];
					v14 = &v33;
				}
				else
				{
					v32 = v13;
					v14 = &v32;
				}
				if (*v14 != v9)
					return a1;
				v15 = v10 ? v10[5] : 0;
				v16 = v10[3];
				if (v16 == 27)
					break;
				if (v16 == 21)
				{
					v17 = sub_140221E40(v15);
				LABEL_21:
					if (v17)
						v15 = *(_DWORD*)(v17 + 4);
				}
				v18 = a1[6];
				v19 = (*v8)[3];
				v20 = *(_QWORD*)(v18 + 8);
				v21 = v18;
				while (v20)
				{
					v22 = *(_DWORD*)(v20 + 32);
					if (v22 == v19)
						v23 = *(_DWORD*)(v20 + 36) < v15;
					else
						v23 = v22 < v19;
					if (v23)
					{
						v20 = *(_QWORD*)(v20 + 24);
					}
					else
					{
						v21 = v20;
						v20 = *(_QWORD*)(v20 + 16);
					}
				}
				if (v21 == v18
					|| ((v24 = *(_DWORD*)(v21 + 32), v19 == v24) ? (v25 = v15 < *(_DWORD*)(v21 + 36)) : (v25 = v19 < v24), v25))
				{
					v31 = a1[6];
					v26 = &v31;
				}
				else
				{
					v34 = v21;
					v26 = &v34;
				}
				if (*v26 != v18)
					return a1;
				v27 = sub_14018B280(64i64, 0);
				if (v27)
				{
					sub_14056B0F0((__int64)v27, v8, *(_DWORD*)(v6 + 4), *(_DWORD*)(v6 + 8), *(_DWORD*)(v6 + 12));
					*(_QWORD*)v27 = off_140B6C950;
					v27[14] = 0;
				}
				else
				{
					v27 = 0i64;
				}
				sub_140573060((__int64)a1, (_QWORD**)v27);
			LABEL_43:
				if (++v5 >= *(unsigned __int16*)(a3 + 4))
					goto LABEL_44;
			}
			v17 = sub_14021D1C0(v15);
			goto LABEL_21;
		}
	}
LABEL_44:
	v28 = qword_140C65898;
	if (qword_140C65898)
	{
		v29 = qword_140C65B78 == 0;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		if (!v29)
		{
			sub_140575DD0();
			v28 = qword_140C65898;
		}
		Apollo_LUAEvent(*(_QWORD*)(v28 + 29504), "PlayerPathRefresh", byte_1409D10FF);
	}
	return a1;
}
// 1409D10FF: using guessed type _BYTE byte_1409D10FF[67];
// 140B6C8F8: using guessed type __int64 (__fastcall *off_140B6C8F8[10])();
// 140B6C950: using guessed type __int64 (__fastcall *off_140B6C950[29])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65B78: using guessed type __int64 qword_140C65B78;

