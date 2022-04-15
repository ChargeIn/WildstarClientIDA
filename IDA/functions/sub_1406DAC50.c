#include "../winhttp.h"

//----- (00000001406DAC50) ----------------------------------------------------
__int64 __fastcall sub_1406DAC50(_QWORD* a1)
{
	__int64 result; // rax
	int v3; // r8d
	unsigned __int64 v4; // rax
	unsigned __int64 v5; // rdx
	_DWORD** v6; // rcx
	_DWORD* v7; // rbx
	unsigned __int64* v8; // rdx
	int* v9; // rax
	int v10; // eax
	__int64 v11; // rcx
	int* v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rax
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	unsigned __int64 v17; // r8
	__int64 v18; // [rsp+20h] [rbp-108h] BYREF
	__int64 v19; // [rsp+28h] [rbp-100h]
	__int64(__fastcall * *v20)(); // [rsp+40h] [rbp-E8h] BYREF
	char v21[8]; // [rsp+48h] [rbp-E0h] BYREF
	_WORD* v22; // [rsp+50h] [rbp-D8h]
	_WORD* v23; // [rsp+58h] [rbp-D0h]
	__int128 v24; // [rsp+100h] [rbp-28h]
	int* v25; // [rsp+110h] [rbp-18h]

	result = sub_1406DAEE0(a1);
	if (result)
	{
		v3 = *(_DWORD*)(result + 1036);
		if (v3 && (v4 = 0i64, (v5 = *(_QWORD*)(qword_140C65898 + 2712)) != 0))
		{
			v6 = *(_DWORD***)(qword_140C65898 + 2704);
			while (1)
			{
				v7 = *v6;
				if (*v6)
				{
					if (v7[16] == v3)
						break;
				}
				++v4;
				++v6;
				if (v4 >= v5)
					goto LABEL_8;
			}
			sub_1400B6F30((__int64)&v20);
			v20 = off_140B69230;
			v25 = 0i64;
			v24 = 0i64;
			v9 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v24 = v9;
			*((_QWORD*)&v24 + 1) = v9;
			v25 = v9 + 4;
			if (v9)
				*(_WORD*)v9 = 0;
			v10 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v7 + 120i64))(v7);
			v12 = (int*)sub_14034BDD0(v11, v10);
			if (v12)
			{
				v13 = 0i64;
				if (*(_WORD*)v12)
				{
					do
						++v13;
					while (*((_WORD*)v12 + v13));
				}
				sub_14001C480((__int64)v21, v12, (int*)((char*)v12 + 2 * v13));
			}
			else if (v22 != v23)
			{
				*v22 = 0;
				v23 = v22;
			}
			v14 = sub_1400B7660(&v20);
			v15 = (unsigned __int64*)sub_14018F0E0(&v18, *(unsigned __int16**)(v14 + 8))[1];
			if (v15)
			{
				v16 = -1i64;
				do
					++v16;
				while (*((_BYTE*)v15 + v16));
				sub_140058710((__int64)a1, v15, v16);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v19)
				sub_14018B900(v19, 0);
			if ((_QWORD)v24)
				sub_14018B900(v24, 0);
			sub_1400B7390(&v20);
		}
		else
		{
		LABEL_8:
			v8 = (unsigned __int64*)sub_14018F0E0(&v18, word_1409F7AAC)[1];
			if (v8)
			{
				v17 = -1i64;
				do
					++v17;
				while (*((_BYTE*)v8 + v17));
				sub_140058710((__int64)a1, v8, v17);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v19)
				sub_14018B900(v19, 0);
		}
		return 1i64;
	}
	return result;
}
// 1406DAD5C: variable 'v11' is possibly undefined
// 1409F7AAC: using guessed type unsigned __int16 word_1409F7AAC[2];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406DAC50: using guessed type char var_E0[8];

