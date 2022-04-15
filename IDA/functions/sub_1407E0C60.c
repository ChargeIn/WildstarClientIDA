#include "../winhttp.h"

//----- (00000001407E0C60) ----------------------------------------------------
__int64 __fastcall sub_1407E0C60(unsigned int a1, char* a2)
{
	int v4; // r14d
	int v5; // eax
	char* v6; // rbx
	PVOID v7; // rbx
	int v8; // eax
	_QWORD* v9; // rax
	_QWORD* v10; // r14
	int* v11; // rax
	unsigned __int64 v12; // rdx
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rdx
	int v16; // eax
	void* v17; // [rsp+20h] [rbp-18h]

	v4 = 0;
	if ((unsigned __int64)(a2 - 3) <= 1)
		goto LABEL_44;
	if (a1 <= 0x16)
	{
		v5 = 6324292;
		if (_bittest(&v5, a1))
		{
			sub_1407E2340(0);
			if ((a1 == 2 || a1 == 21) && !dword_140C5FB10)
			{
				if (SetConsoleCtrlHandler((PHANDLER_ROUTINE)HandlerRoutine, 1))
				{
					dword_140C5FB10 = 1;
				}
				else
				{
					v6 = sub_1407DE140();
					*(_DWORD*)v6 = GetLastError();
					v4 = 1;
				}
			}
			switch (a1)
			{
			case 2u:
				v7 = DecodePointer(qword_140C5FAF0);
				if (a2 != (char*)2)
					qword_140C5FAF0 = EncodePointer(a2);
				break;
			case 6u:
			LABEL_20:
				v7 = DecodePointer(qword_140C5FB00);
				if (a2 != (char*)2)
					qword_140C5FB00 = EncodePointer(a2);
				break;
			case 0xFu:
				v7 = DecodePointer(qword_140C5FB08);
				if (a2 != (char*)2)
					qword_140C5FB08 = EncodePointer(a2);
				break;
			case 0x15u:
				v7 = DecodePointer(qword_140C5FAF8);
				if (a2 != (char*)2)
					qword_140C5FAF8 = EncodePointer(a2);
				break;
			case 0x16u:
				goto LABEL_20;
			default:
				v7 = v17;
				break;
			}
			sub_1407E2528(0);
			if (!v4)
				return (__int64)v7;
			goto LABEL_44;
		}
	}
	if (a1 > 0xB)
		goto LABEL_44;
	v8 = 2320;
	if (!_bittest(&v8, a1))
		goto LABEL_44;
	v9 = sub_1407E3DB8();
	v10 = v9;
	if (!v9)
		goto LABEL_44;
	if ((int*)v9[20] == dword_14095E4B0)
	{
		v11 = (int*)sub_1407E2C30(0xC0ui64);
		v10[20] = v11;
		if (!v11)
			goto LABEL_44;
		sub_1407DB590(v11, dword_14095E4B0, 0xC0ui64);
	}
	v12 = v10[20];
	v13 = v12;
	do
	{
		if (*(_DWORD*)(v13 + 4) == a1)
			break;
		v13 += 16i64;
	} while (v13 < v12 + 192);
	if (v13 >= v12 + 192 || *(_DWORD*)(v13 + 4) != a1)
		v13 = 0i64;
	if (v13)
	{
		v7 = *(PVOID*)(v13 + 8);
		if (a2 != (char*)2)
		{
			v14 = v13 + 4;
			do
			{
				if (*(_DWORD*)v14 != a1)
					break;
				*(_QWORD*)(v14 + 4) = a2;
				v14 += 16i64;
			} while (v14 - 4 < v10[20] + 192i64);
		}
		return (__int64)v7;
	}
LABEL_44:
	if (a1 > 0x11 || (v16 = 204810, !_bittest(&v16, a1)))
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	}
	return -1i64;
}
// 1407E0D10: variable 'v17' is possibly undefined
// 14095E4B0: using guessed type int dword_14095E4B0[48];
// 140C5FB10: using guessed type int dword_140C5FB10;

