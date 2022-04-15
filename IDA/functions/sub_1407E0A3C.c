#include "../winhttp.h"

//----- (00000001407E0A3C) ----------------------------------------------------
__int64 __fastcall sub_1407E0A3C(unsigned int a1)
{
	int v2; // edi
	_QWORD* v3; // rsi
	PVOID* v4; // r14
	PVOID v5; // rcx
	_QWORD* v6; // rax
	unsigned __int64 v8; // rdx
	unsigned __int64 v9; // rcx
	__int64 v10; // r8
	void(__fastcall * v11)(__int64, __int64, __int64); // r15
	int v12; // r12d
	__int64 i; // rdx
	__int64 v14; // [rsp+28h] [rbp-30h]
	int v15; // [rsp+68h] [rbp+10h]

	v2 = 0;
	v3 = 0i64;
	if (a1 == 2)
	{
		v4 = &qword_140C5FAF0;
		v5 = qword_140C5FAF0;
		goto LABEL_23;
	}
	if (a1 != 4)
	{
		if (a1 == 6)
		{
		LABEL_12:
			v4 = &qword_140C5FB00;
			v5 = qword_140C5FB00;
			goto LABEL_23;
		}
		if (a1 != 8 && a1 != 11)
		{
			switch (a1)
			{
			case 0xFu:
				v4 = &qword_140C5FB08;
				v5 = qword_140C5FB08;
				break;
			case 0x15u:
				v4 = &qword_140C5FAF8;
				v5 = qword_140C5FAF8;
				break;
			case 0x16u:
				goto LABEL_12;
			default:
				*(_DWORD*)sub_1407DE1B0() = 22;
				sub_1407DC370();
				return 0xFFFFFFFFi64;
			}
		LABEL_23:
			v2 = 1;
			v11 = (void(__fastcall*)(__int64, __int64, __int64))DecodePointer(v5);
			goto LABEL_24;
		}
	}
	v6 = sub_1407E3DB8();
	v3 = v6;
	if (!v6)
		return 0xFFFFFFFFi64;
	v8 = v6[20];
	v9 = v8;
	v10 = 12i64;
	do
	{
		if (*(_DWORD*)(v9 + 4) == a1)
			break;
		v9 += 16i64;
	} while (v9 < v8 + 192);
	if (v9 >= v8 + 192 || *(_DWORD*)(v9 + 4) != a1)
		v9 = 0i64;
	v4 = (PVOID*)(v9 + 8);
	v11 = *(void(__fastcall**)(__int64, __int64, __int64))(v9 + 8);
LABEL_24:
	if (v11 != (void(__fastcall*)(__int64, __int64, __int64))1)
	{
		if (!v11)
		{
			sub_1407DBCC8(3u);
			__debugbreak();
		}
		if (v2)
			sub_1407E2340(0);
		v12 = 2320;
		if (a1 <= 0xB && _bittest(&v12, a1))
		{
			v14 = v3[21];
			v3[21] = 0i64;
			if (a1 != 8)
				goto LABEL_38;
			v15 = *((_DWORD*)v3 + 44);
			*((_DWORD*)v3 + 44) = 140;
		}
		if (a1 == 8)
		{
			for (i = 3i64; (int)i < 12; i = (unsigned int)(i + 1))
				*(_QWORD*)(v3[20] + 16i64 * (int)i + 8) = 0i64;
			goto LABEL_39;
		}
	LABEL_38:
		*v4 = EncodePointer(0i64);
	LABEL_39:
		if (v2)
			sub_1407E2528(0);
		if (a1 == 8)
			v11(8i64, *((unsigned int*)v3 + 44), v10);
		else
			v11(a1, i, v10);
		if (a1 <= 0xB && _bittest(&v12, a1))
		{
			v3[21] = v14;
			if (a1 == 8)
				*((_DWORD*)v3 + 44) = v15;
		}
	}
	return 0i64;
}
// 1407E0C0D: variable 'v10' is possibly undefined
// 1407E0C14: variable 'i' is possibly undefined
// 1407E0C2F: variable 'v14' is possibly undefined

