#include "../winhttp.h"

//----- (00000001404EA4F0) ----------------------------------------------------
__int64 __fastcall sub_1404EA4F0(__int64 a1, int* a2, __m128i* a3, int a4)
{
	__int64 v4; // r14
	__int64 result; // rax
	int* v9; // rax
	void(__fastcall * **v10)(_QWORD); // rax
	_QWORD* v11; // rsi
	int v12; // eax
	int v13; // edx
	int v14; // ecx
	int v15; // edi
	int v16; // ebx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rax
	unsigned int v21; // eax
	unsigned int v22[4]; // [rsp+70h] [rbp-58h] BYREF
	__int128 v23; // [rsp+80h] [rbp-48h] BYREF
	unsigned int v24; // [rsp+D0h] [rbp+8h] BYREF

	v4 = a1 + 240;
	result = sub_140108E80(a1 + 240, a3);
	if (!result)
	{
		v9 = sub_14018B280(120i64, 0);
		if (v9)
		{
			v10 = (void(__fastcall***)(_QWORD))sub_1401007D0((__int64)v9, v4);
			v11 = v10;
			if (v10)
				(**v10)(v10);
		}
		else
		{
			v11 = 0i64;
		}
		(*(void(__fastcall**)(_QWORD*))(*v11 + 8i64))(v11);
		sub_140100CD0((__int64)v11, 0i64, a3->m128i_i32);
		sub_1401013C0((__int64)v11);
		v12 = dword_140DC31D0;
		if ((dword_140DC31D0 & 1) != 0)
		{
			v13 = dword_140DC31DC;
		}
		else
		{
			v12 = dword_140DC31D0 | 1;
			v13 = 0;
			dword_140DC31D0 |= 1u;
			dword_140DC31DC = 0;
		}
		if ((v12 & 2) == 0)
		{
			v12 |= 2u;
			dword_140DC31E4 = 0;
			dword_140DC31D0 = v12;
		}
		if ((v12 & 4) != 0)
		{
			v14 = dword_140DC31EC;
		}
		else
		{
			v12 |= 4u;
			v14 = 0;
			dword_140DC31D0 = v12;
			dword_140DC31EC = 0;
		}
		if ((v12 & 8) == 0)
		{
			dword_140DC31F4 = 0;
			dword_140DC31D0 = v12 | 8;
		}
		v15 = 0;
		v16 = 0;
		if (a4)
		{
			if ((unsigned int)(a4 - 1) <= 1)
			{
				if (v14)
				{
					v15 = dword_140DC31E8;
				}
				else
				{
					dword_140DC31EC = 1;
					v17 = sub_140200220(0x93Fu);
					if (v17)
					{
						v15 = *(_DWORD*)(v17 + 12);
						dword_140DC31E8 = v15;
					}
					else
					{
						dword_140DC31E8 = 0;
					}
				}
				if (dword_140DC31F4)
				{
					v16 = dword_140DC31F0;
				}
				else
				{
					dword_140DC31F4 = 1;
					v18 = sub_140200220(0x93Fu);
					if (v18)
						v16 = *(_DWORD*)(v18 + 16);
					dword_140DC31F0 = v16;
				}
			}
		}
		else
		{
			if (v13)
			{
				v15 = dword_140DC31D8;
			}
			else
			{
				dword_140DC31DC = 1;
				v19 = sub_140200220(0x93Fu);
				if (v19)
				{
					v15 = *(_DWORD*)(v19 + 4);
					dword_140DC31D8 = v15;
				}
				else
				{
					dword_140DC31D8 = 0;
				}
			}
			if (dword_140DC31E4)
			{
				v16 = dword_140DC31E0;
			}
			else
			{
				dword_140DC31E4 = 1;
				v20 = sub_140200220(0x93Fu);
				if (v20)
					v16 = *(_DWORD*)(v20 + 8);
				dword_140DC31E0 = v16;
			}
		}
		v23 = xmmword_140B7B240;
		v21 = sub_140141F10(qword_140C63678, (__m128*) & v23);
		v23 = xmmword_140B7B240;
		v22[0] = v21;
		v24 = sub_140141F10(qword_140C63678, (__m128*) & v23);
		*(_QWORD*)&v23 = 0i64;
		*((_QWORD*)&v23 + 1) = __PAIR64__(v16, v15);
		sub_140100F50((__int64)v11, v4, a2, (int*)&v23, 1065353216, 1, &qword_140C77760, &v24, v22, 0, 0, 0, 0);
		sub_1401429A0(qword_140C63678, v24);
		sub_1401429A0(qword_140C63678, v22[0]);
		sub_1400FDDF0(v4 + 48, 0, v11);
		sub_1400FDDF0(v4 + 48, 1, v11);
		return (*(__int64(__fastcall**)(_QWORD*))(*v11 + 8i64))(v11);
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140DC31D0: using guessed type int dword_140DC31D0;
// 140DC31D8: using guessed type int dword_140DC31D8;
// 140DC31DC: using guessed type int dword_140DC31DC;
// 140DC31E0: using guessed type int dword_140DC31E0;
// 140DC31E4: using guessed type int dword_140DC31E4;
// 140DC31E8: using guessed type int dword_140DC31E8;
// 140DC31EC: using guessed type int dword_140DC31EC;
// 140DC31F0: using guessed type int dword_140DC31F0;
// 140DC31F4: using guessed type int dword_140DC31F4;
// 1404EA4F0: using guessed type unsigned int var_58[4];

