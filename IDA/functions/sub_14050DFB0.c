#include "../winhttp.h"

//----- (000000014050DFB0) ----------------------------------------------------
__int64 __fastcall sub_14050DFB0(_QWORD* a1)
{
	int v2; // eax
	__int64 result; // rax
	__int64 v4; // rbx
	unsigned int v5; // edi
	int* v6; // rax
	int* v7; // rax
	__int64 v8; // rsi
	int v9; // ebx
	unsigned __int16* v10; // rdx
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	__int64 v13; // [rsp+20h] [rbp-108h] BYREF
	__int64 v14; // [rsp+28h] [rbp-100h]
	__int64 v15[24]; // [rsp+40h] [rbp-E8h] BYREF
	__int128 v16; // [rsp+100h] [rbp-28h]
	int* v17; // [rsp+110h] [rbp-18h]

	v2 = sub_140056D60(a1, 1u);
	result = sub_1404835C0(qword_140C65918, v2);
	v4 = result;
	if (result)
	{
		sub_1400B7210((__int64)v15, (int*)L"$1n");
		v5 = 0;
		v16 = 0i64;
		v15[0] = (__int64)off_140B69230;
		v17 = 0i64;
		v6 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v16 = v6;
		*((_QWORD*)&v16 + 1) = v6;
		v17 = v6 + 4;
		if (v6)
			*(_WORD*)v6 = 0;
		v7 = sub_14018B280(96i64, 0);
		v8 = (__int64)v7;
		if (v7)
		{
			v9 = *(_DWORD*)(v4 + 8);
			sub_1400B6390(v7);
			*(_QWORD*)v8 = off_140B69170;
			*(_DWORD*)(v8 + 88) = 1;
			sub_1400B6D70(v8, (__int64)L"name", v9);
		}
		else
		{
			v8 = 0i64;
		}
		sub_1400B7480((__int64)v15, (_QWORD*)v8);
		v10 = *(unsigned __int16**)(sub_1400B7660(v15) + 8);
		if (v10)
		{
			v11 = (unsigned __int64*)sub_14018F0E0(&v13, v10)[1];
			if (v11)
			{
				v12 = -1i64;
				do
					++v12;
				while (*((_BYTE*)v11 + v12));
				sub_140058710((__int64)a1, v11, v12);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v14)
				sub_14018B900(v14, 0);
			v5 = 1;
		}
		if ((_QWORD)v16)
			sub_14018B900(v16, 0);
		sub_1400B7390(v15);
		return v5;
	}
	return result;
}
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B11438: using guessed type wchar_t a1n_2[4];
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65918: using guessed type __int64 qword_140C65918;

