#include "../winhttp.h"

//----- (00000001407E3430) ----------------------------------------------------
__int64 __fastcall sub_1407E3430(UINT a1)
{
	unsigned int v2; // r15d
	_QWORD* v3; // rsi
	__int64 v4; // rbx
	UINT v5; // r14d
	int* v6; // rax
	int* v7; // rbx
	int v8; // edi
	__int64 v9; // rdx
	int* v10; // rcx
	__int64 v11; // rax
	unsigned int v12; // eax
	void* v13; // rcx
	int i; // edx
	int j; // edx

	v2 = -1;
	v3 = sub_1407E3D94();
	sub_1407E3374();
	v4 = v3[23];
	v5 = sub_1407E3080(a1);
	if (v5 == *(_DWORD*)(v4 + 4))
	{
		return 0;
	}
	else
	{
		v6 = (int*)sub_1407E2C30(0x228ui64);
		v7 = v6;
		v8 = 0;
		if (v6)
		{
			v9 = v3[23];
			v10 = v6;
			if ((((unsigned __int8)v6 | (unsigned __int8)v9) & 0xF) != 0)
			{
				sub_1407DB590(v6, (int*)v9, 0x228ui64);
			}
			else
			{
				v11 = 4i64;
				do
				{
					*(_OWORD*)v10 = *(_OWORD*)v9;
					*((_OWORD*)v10 + 1) = *(_OWORD*)(v9 + 16);
					*((_OWORD*)v10 + 2) = *(_OWORD*)(v9 + 32);
					*((_OWORD*)v10 + 3) = *(_OWORD*)(v9 + 48);
					*((_OWORD*)v10 + 4) = *(_OWORD*)(v9 + 64);
					*((_OWORD*)v10 + 5) = *(_OWORD*)(v9 + 80);
					*((_OWORD*)v10 + 6) = *(_OWORD*)(v9 + 96);
					v10 += 32;
					*((_OWORD*)v10 - 1) = *(_OWORD*)(v9 + 112);
					v9 += 128i64;
					--v11;
				} while (v11);
				*(_OWORD*)v10 = *(_OWORD*)v9;
				*((_OWORD*)v10 + 1) = *(_OWORD*)(v9 + 16);
				*((_QWORD*)v10 + 4) = *(_QWORD*)(v9 + 32);
			}
			*v7 = 0;
			v12 = sub_1407E368C(v5, (__int64)v7);
			v2 = v12;
			if (v12)
			{
				if (v12 == -1)
				{
					if (v7 != (int*)&unk_140C0FD80)
						sub_1407E14C0(v7);
					*(_DWORD*)sub_1407DE1B0() = 22;
				}
			}
			else
			{
				if (!_InterlockedDecrement((volatile signed __int32*)v3[23]))
				{
					v13 = (void*)v3[23];
					if (v13 != &unk_140C0FD80)
						sub_1407E14C0(v13);
				}
				v3[23] = v7;
				_InterlockedIncrement(v7);
				if ((v3[25] & 2) == 0 && (dword_140C10470 & 1) == 0)
				{
					sub_1407E2340(13);
					dword_140C603D8 = v7[1];
					dword_140C603DC = v7[2];
					qword_140C603D0 = *((_QWORD*)v7 + 68);
					for (i = 0; i < 5; ++i)
						word_140C603E0[i] = *((_WORD*)v7 + i + 6);
					for (j = 0; j < 257; ++j)
						byte_140C0FB70[j] = *((_BYTE*)v7 + j + 24);
					while (v8 < 256)
					{
						byte_140C0FC80[v8] = *((_BYTE*)v7 + v8 + 281);
						++v8;
					}
					if (!_InterlockedDecrement((volatile signed __int32*)off_140C0FC78) && off_140C0FC78 != &unk_140C0FD80)
						sub_1407E14C0(off_140C0FC78);
					off_140C0FC78 = v7;
					_InterlockedIncrement(v7);
					sub_1407E2528(13);
				}
			}
		}
	}
	return v2;
}
// 140C0FB70: using guessed type _BYTE[264];
// 140C0FC80: using guessed type _BYTE[256];
// 140C10470: using guessed type int dword_140C10470;
// 140C603D0: using guessed type __int64 qword_140C603D0;
// 140C603D8: using guessed type int dword_140C603D8;
// 140C603DC: using guessed type int dword_140C603DC;
// 140C603E0: using guessed type __int16 word_140C603E0[6];

