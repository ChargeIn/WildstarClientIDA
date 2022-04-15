#include "../winhttp.h"

//----- (000000014088F640) ----------------------------------------------------
unsigned __int64 __fastcall sub_14088F640(__int64 a1)
{
	int v1; // ebp
	_QWORD* v2; // rsi
	unsigned __int64 result; // rax
	__int64* v4; // rbx
	__int64 v5; // r8
	int v6; // ebp
	unsigned int v7; // r12d
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // r13
	_DWORD* v12; // rdi
	int v13; // edx
	int v14; // r15d
	int v15; // edx
	int v16; // esi
	__int64 v17; // r14
	int v18; // eax
	__int64 v19; // [rsp+20h] [rbp-58h]
	__int64 v20; // [rsp+28h] [rbp-50h]
	unsigned int v22; // [rsp+88h] [rbp+10h]
	int v23; // [rsp+90h] [rbp+18h]
	__int64* i; // [rsp+98h] [rbp+20h]

	v1 = *(_DWORD*)(a1 + 144);
	v2 = (_QWORD*)a1;
	result = sub_140892310(*(_QWORD*)(a1 + 128));
	v4 = (__int64*)v2[19];
	v5 = 0i64;
	v6 = result + v1;
	v23 = 0;
	for (i = v4; v4 != (__int64*)v2[20]; v23 = v5)
	{
		v7 = 0;
		v8 = *(_QWORD*)(*v4 + 232);
		result = (unsigned __int64)((unsigned __int128)((v8 - *(_QWORD*)(*v4 + 224)) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
		v19 = (v8 - *(_QWORD*)(*v4 + 224)) / 24;
		if ((_DWORD)v19)
		{
			v9 = *v4;
			v10 = 2 * v5;
			v11 = 0i64;
			v20 = 2 * v5;
			do
			{
				result = v2[22];
				v12 = (_DWORD*)(v11 + *(_QWORD*)(v9 + 224));
				if (*v12 == *(unsigned __int16*)(v10 + result))
				{
					result = sub_1408942C0(v9, v12[1]);
					if (result)
					{
						v13 = *(_DWORD*)(result + 16);
						v14 = 0;
						if ((v13 & 0x7C) == 4 && ((v13 & 2) == 0 || v6 > v12[2] && !v12[5]))
							v14 = *(_DWORD*)(result + 40);
						v15 = v12[2];
						if (v6 < v15 + v12[3])
						{
							if (v6 <= v15)
							{
								v22 = v12[5];
								v16 = v15 - v14;
							}
							else
							{
								v16 = v6 - v14;
								v22 = (unsigned int)(v6 + v12[5] - v15) % v12[4];
							}
							result = sub_1408819F0(dword_140C10F20, 56i64);
							v17 = result;
							if (result)
							{
								v18 = sub_140892310(*(_QWORD*)(a1 + 128));
								*(_QWORD*)(v17 + 24) = v9;
								*(_QWORD*)(v17 + 32) = v12;
								*(_DWORD*)(v17 + 44) = v14;
								*(_QWORD*)v17 = off_1409A8380;
								*(_DWORD*)(v17 + 16) = v16 - v18;
								*(_DWORD*)(v17 + 40) = v22;
								*(_QWORD*)(v17 + 48) = 0i64;
								sub_14088EBB0(v17, v7, 0, v12[2]);
								sub_14088EBB0(v17, v7, 1, v12[2]);
								sub_14088EBB0(v17, v7, 2, v12[2]);
								sub_14088EBB0(v17, v7, 3, v12[2]);
								v2 = (_QWORD*)a1;
								result = sub_140895170(a1 + 104, v17);
							}
							else
							{
								v2 = (_QWORD*)a1;
							}
						}
					}
				}
				v10 = v20;
				++v7;
				v11 += 24i64;
			} while (v7 < (unsigned int)v19);
			v4 = i;
			LODWORD(v5) = v23;
		}
		++v4;
		v5 = (unsigned int)(v5 + 1);
		i = v4;
	}
	return result;
}
// 1409A8380: using guessed type __int64 (__fastcall *off_1409A8380[9])();
// 140C10F20: using guessed type int dword_140C10F20;

